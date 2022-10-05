int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v4; // [rsp+4h] [rbp-Ch] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  __isoc99_scanf(&unk_2004, &v4, envp);
  if ( v4 != 1 )
  {
    if ( (v4 & 1) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      v4 /= 2;
      if ( v4 == 1 )
        break;
      if ( (v4 & 1) != 0 )
LABEL_7:
        v4 = 3 * v4 + 1;
    }
  }
  printf("Always result will be : %d", (unsigned int)v4);
  return 0;
}
