// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main(main, v4, &retaddr, 0LL, 0LL, a3, &v5);
  __halt();
}

char *sub_1090()
{
  return &byte_4010;
}

__int64 sub_10C0()
{
  return 0LL;
}

char *sub_1100()
{
  char *result; // rax

  if ( !byte_4010 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_4008);
    result = sub_1090();
    byte_4010 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_1140()
{
  return sub_10C0();
}

__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int i; // [rsp+4h] [rbp-Ch]
  unsigned int v5; // [rsp+4h] [rbp-Ch]
  int v6; // [rsp+8h] [rbp-8h]
  int v7; // [rsp+Ch] [rbp-4h]

  for ( i = 0; i <= 9; i = v5 + 1 )
  {
    v5 = i + 1;
    printf("Counting for.. %d\n", v5);
  }
  while ( v6 <= 9 )
    printf("Counting while.. %d\n", (unsigned int)++v6);
  do
    printf("Counting while.. %d\n", (unsigned int)++v7);
  while ( v7 <= 9 );
  return 0LL;
}
