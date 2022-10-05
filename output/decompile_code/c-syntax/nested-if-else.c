int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v4; // [rsp+4h] [rbp-Ch] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  __isoc99_scanf(&unk_2004, &v4, envp);
  if ( (v4 & 0x80000000) == 0 )
  {
    if ( v4 )
      printf("%d\n", v4);
    else
      printf("%d\n", 0LL);
  }
  else
  {
    printf("%d\n", -v4);
  }
  return 0;
}
