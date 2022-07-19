from idaapi import *
from idautils import *
from idc import *

exclude_func = [
  '_start', 'deregister_tm_clones', 'register_tm_clones',
  '__do_global_dtors_aux', 'frame_dummy', '__libc_csu_init', '__libc_csu_fini',
  '_term_proc', '_init_proc']

result=list()
def run_ida_decompiler(fn):
    for seg_start in Segments():
        if idc.get_segm_name(seg_start) == '.text':
            for f_ea in Functions(seg_start, SegEnd(seg_start)):
                f = idaapi.get_func(f_ea)
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
                except:
                    print ("Failed to attempt decompilation of the function@0x%08x" % (f_ea))

# get binary name
fn = ida_nalt.get_root_filename()
run_ida_decompiler(fn)
buf = '\n'.join(result)
with open('D:\\koharin\\Decompile\\result.json', 'a') as file: 
    file.write(buf)
file.close()

# close IDA Pro 
# idc.exit()
# exit()
