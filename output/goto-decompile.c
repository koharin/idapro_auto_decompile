int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  int result; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rt1
  unsigned int v8; // [rsp-14h] [rbp-14h]
  unsigned __int64 v9; // [rsp-10h] [rbp-10h]
  __int64 v10; // [rsp-8h] [rbp-8h]

  __asm { endbr64 }
  v10 = v3;
  v9 = __readfsqword(0x28u);
  sub_1090(&unk_2004, &v8, envp);
  if ( v8 != 1 )
  {
    if ( v8 & 1 )
      goto LABEL_8;
    while ( 1 )
    {
      v8 = (signed int)v8 / 2;
      if ( v8 == 1 )
        break;
      if ( v8 & 1 )
LABEL_8:
        v8 = 3 * v8 + 1;
    }
  }
  v4 = v8;
  sub_1080("Always result will be : %d", v8);
  result = 0;
  v7 = __readfsqword(0x28u);
  v6 = v9 - v7;
  if ( v9 != v7 )
    result = sub_1070("Always result will be : %d", v4, v6);
  return result;
}
