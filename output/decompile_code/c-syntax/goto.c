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

char *sub_10D0()
{
  return &byte_4010;
}

__int64 sub_1100()
{
  return 0LL;
}

char *sub_1140()
{
  char *result; // rax

  if ( !byte_4010 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_4008);
    result = sub_10D0();
    byte_4010 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_1180()
{
  return sub_1100();
}

__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v4; // [rsp+4h] [rbp-Ch] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  __isoc99_scanf(&unk_2004, &v4, a3);
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
  return 0LL;
}
