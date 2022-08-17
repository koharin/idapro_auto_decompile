from idaapi import *
from idautils import *
from idc import *
from ida_auto import *
import json

exclude_func = [ '_start', 'deregister_tm_clones', 'register_tm_clones',
  '__do_global_dtors_aux', 'frame_dummy', '__libc_csu_init', '__libc_csu_fini',
  '_fini', '_init', '__gmon_start__']

def run_ida_decompiler():
    global fail
    for seg_start in Segments():
        if get_segm_name(seg_start) == '.text':
            for f_ea in Functions(seg_start, idc.get_segm_end(seg_start)):
                tmp = dict()
                result=list()
                f = idaapi.get_func(f_ea)
                fname = idc.get_func_name(f_ea)             
                if f is None:
                    print ("Failed to obtain the function@0x%08x" % (f_ea))
                
                if fname in exclude_func:
                    continue
                for (startea, endea) in Chunks(f_ea):
                    try:
                        df = idaapi.decompile(startea)
                        if df is None:
                            print ("Failed to decompile the function %s" % fname)
                        result.append(str(df))
                        buf='\n'.join(result)
                        tmp["funcName"] = fname
                        tmp["funcStartAddr"] = hex(startea) # not sure
                        tmp["funcEndAddr"] = hex(endea) # not sure 
                        tmp["decompiledFuncCode"] = buf
                        ground = '[{0}:{1}] {2}\n'.format(hex(startea), hex(endea), fname)
                        func.append(tmp)
                        text.write(ground)
                    except:
                        print ("Failed to attempt decompilation of the function@0x%08x" % (f_ea))
                        fail += 1
            form["funcCount"] = str(len(func))

form = dict()
func = list()
binary = dict()
build = dict()

# set binary info
filename = ida_nalt.get_root_filename()
binary["binaryName"] = filename
binary["isStripped"] = "True"
form["binaryInfo"] = binary

# set decompile result
form["decompileResult"] = func
form['funcCount']=len(func) 

# set build info
build["decompilerName"] = "IDA Pro"
build["compilerName"] = "gcc"
build["compilerVersion"] = "9.4.0"
build["Optlevel"] = "-O"
form["buildInfo"] = build

# wait until idapro analysis done
ida_auto.auto_wait()

# run ida decompiler
text = open("D:\\koharin\\Decompile\\ground\\{0}.txt".format(filename), 'w')
run_ida_decompiler()

# json formatting
json_object = json.dumps(form, indent=4)

# save decompile code
with open("D:\\koharin\\Decompile\\output\\{0}-result.json".format(filename), 'w') as file: 
    file.write(json_object)
    file.close()
text.close()
idc.qexit(0)
