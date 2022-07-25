from idaapi import *
from idautils import *
from idc import *
import json

exclude_func = [
  '_start', 'deregister_tm_clones', 'register_tm_clones',
  '__do_global_dtors_aux', 'frame_dummy', '__libc_csu_init', '__libc_csu_fini']

def run_ida_decompiler():
    for seg_start in Segments():
        if get_segm_name(seg_start) == '.text':
            for f_ea in Functions(seg_start, SegEnd(seg_start)):
                tmp = dict()
                result=list()
                f = get_func(f_ea)
                fname = GetFunctionName(f_ea)             
                if f is None:
                    print ("Failed to obtain the function@0x%08x" % (f_ea))
                if fname in exclude_func:
                    continue
                try:
                    df = decompile(f_ea)
                    if df is None:
                        print ("Failed to decompile the function %s" % fname)
                    # print (df)
                    result.append(str(df))
                    buf='\n'.join(result)
                    tmp["funcName"] = fname
                    tmp["funcStartAddr"] = hex(seg_start) # not sure
                    tmp["funcEndAddr"] = hex(SegEnd(seg_start)) # not sure 
                    tmp["decompiledFuncCode"] = buf
                    func.append(tmp)
                except:
                    print ("Failed to attempt decompilation of the function@0x%08x" % (f_ea))

form = dict()
func = list()
binary = dict()
build = dict()

# set binary info
fn = ida_nalt.get_root_filename()
binary["binaryName"] = fn
binary["isStripped"] = "True"
form["binaryInfo"] = binary

# set decompile result
form["decompileResult"] = func

# set build info
build["decompilerName"] = "IDA Pro"
build["compilerName"] = "gcc"
build["compilerVersion"] = "9.4.0"
build["Optlevel"] = "-O"
form["buildInfo"] = build

# run ida decompiler
run_ida_decompiler()

# json formatting
json_object = json.dumps(form, indent=4)

# save decompile code
with open("D:\\koharin\\Decompile\\goto-result.json", 'w') as file: 
    file.write(json_object)
    file.close()

# close IDA Pro 
idc.Exit(0)
