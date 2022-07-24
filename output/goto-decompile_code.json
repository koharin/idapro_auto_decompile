int __cdecl main(int argc, const char **argv, const char **envp)
{
  signed int v3; // edx
  int v4; // eax
  int result; // eax
  unsigned int v6; // [rsp+0h] [rbp-14h]
  unsigned __int64 v7; // [rsp+4h] [rbp-10h]

  __asm { endbr64 }
  v7 = __readfsqword(0x28u);
  sub_1090("%d", &v6, envp);
  if ( v6 != 1 )
  {
    if ( v6 & 1 )
LABEL_3:
      v6 = 3 * v6 + 1;
    v3 = v6;
    while ( 1 )
    {
      v4 = v3 / 2;
      v3 = v4;
      if ( v4 == 1 )
        break;
      if ( v4 & 1 )
      {
        v6 = v4;
        goto LABEL_3;
      }
    }
    v6 = 1;
  }
  sub_1080(1LL, "Always result will be : %d", v6);
  if ( __readfsqword(0x28u) == v7 )
    return 0;
  sub_1070();
  _libc_csu_init();
  return result;
}
