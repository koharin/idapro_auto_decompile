# IDA Pro Auto Decompile
- Get Decompile code without executing IDA Pro GUI using IDAPython and idat.exe or ida.exe

# Future Work
- JSON formatting [V]
- Add binary info, compile info, build info to output json file [V]
- complete headless [V]

# file
- `idapro-decompile.py`: only Decompile
- `idapro-headless.py`: get binary info, build info, function decompile info in json format

# IDA Pro Version
- 7.7

# Usage
```bash
.\idat64.exe -A -S"path\to\headlessscipt.py" path\to\binary
```
```bash
.\ida64.exe -A -S"path\to\headlessscipt.py" path\to\binary
```
- need to give a target binary path with double quotes
