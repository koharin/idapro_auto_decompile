from idaapi import *
from idautils import *
from idc import *
import json

exclude_func = [
  'deregister_tm_clones', 'register_tm_clones',
  '__do_global_dtors_aux', 'frame_dummy']

def run_ida_decompiler():
    for seg_start in Segments():
        if get_segm_name(seg_start) == '.text':
            for f_ea in Functions(seg_start, SegEnd(seg_start)):
                f = idaapi.get_func(f_ea)
                fname = GetFunctionName(f_ea)             
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
                    except:
                        print ("Failed to attempt decompilation of the function@0x%08x" % (f_ea))

result=list()

# set binary info
filename = ida_nalt.get_root_filename()

# run ida decompiler
run_ida_decompiler()
buf='\n'.join(result)

# save decompile code
with open("D:\\koharin\\Decompile\\output\\{0}.c".format(filename), 'w') as file: 
    file.write(buf)
    file.close()

idc.Exit(0)
