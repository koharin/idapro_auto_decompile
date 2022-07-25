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
                f=get_func(f_ea)
                fname = GetFunctionName(f_ea)
                if f is None:
                    print ("Failed to obtain the function@0x%08x" % (f_ea))
                if fname in exclude_func:
                    continue
                
                try:
                    df = decompile(f_ea)
                    if df is None:
                        print ("Failed to decompile the function %s" % fname)
                    result.append(str(df))
               
                except:
                    print ("Failed to attempt decompilation of the function@0x%08x" % (f_ea))
                
result=list()

# run ida decompiler
run_ida_decompiler()

# json formatting
buf = '\n'.join(result)

# save decompile code
# filename = GetInputFile()
with open('D:\\koharin\\Decompile\\loops-decompile.c', 'w') as file:
    file.write(buf)
    file.close()


# close IDA Pro 
idc.Exit(0)
