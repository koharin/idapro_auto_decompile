# IDA Pro Auto Decompile
- Get Decompile code without executing IDA Pro GUI using IDAPython and idat.executing

# Future Work
- JSON formatting [done]
- Add binary info, compile info, build info to output json file 
- complete headless

# file
- `idapro-decompile.py`: only Decompile
- `idapro-headless.py`: get binary info, build info, function decompile info in json format

# Usage
```bash
.\idat64.exe -A -S"path\to\headlessscipt.py" path\to\binary
```
```bash
.\ida64.exe -A -S"path\to\headlessscipt.py" path\to\binary
```
