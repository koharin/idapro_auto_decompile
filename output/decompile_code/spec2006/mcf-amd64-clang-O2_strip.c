// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main(main, v4, &retaddr, init, fini, a3, &v5);
  __halt();
}

void *sub_400970()
{
  return &unk_405090;
}

void *sub_4009E0()
{
  void *result; // rax

  if ( !byte_4050A0 )
  {
    result = sub_400970();
    byte_4050A0 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_400A10()
{
  return 0LL;
}

// attributes: thunk
__int64 sub_400A10()
{
  return 0LL;
}

__int64 __fastcall sub_400A20(double a1)
{
  __int64 v1; // r14
  double v2; // xmm0_8
  __int64 v3; // rcx
  __int64 v4; // rbx

  v1 = -6LL;
  while ( 1 )
  {
    printf("active arcs                : %ld\n", qword_407E58);
    sub_4027B0(dest);
    printf("simplex iterations         : %ld\n", qword_407F08);
    v2 = sub_400DA0(dest);
    printf("objective value            : %0.0f\n", v2);
    if ( !++v1 )
      break;
    if ( qword_407E68 )
    {
      v3 = sub_402090(dest, -1LL, 0LL);
      if ( v3 )
        printf("erased arcs                : %ld\n", v3);
    }
    v4 = sub_401A80(dest);
    if ( !v4 )
      break;
    printf("new implicit arcs          : %ld\n", v4);
    if ( v4 < 0 )
    {
      puts("not enough memory, exit(-1)");
      exit(-1);
    }
  }
  printf("checksum                   : %ld\n", qword_407F18);
  return 0LL;
}

__int64 __fastcall main(int a1, char **a2, char **a3, double a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rbx

  v4 = -1;
  if ( a1 >= 2 )
  {
    puts("\nMCF SPEC CPU2006 version 1.10");
    puts("Copyright (c) 1998-2000 Zuse Institut Berlin (ZIB)");
    puts("Copyright (c) 2000-2002 Andreas Loebel & ZIB");
    puts("Copyright (c) 2003-2005 Andreas Loebel");
    putchar(10);
    memset(dest, 0, 0x270uLL);
    qword_407EC0 = 10000000LL;
    strcpy(dest, a2[1]);
    if ( sub_401310((__int64)dest) )
    {
      puts("read error, exit");
      sub_4012C0(dest);
    }
    else
    {
      printf("nodes                      : %ld\n", qword_407E48);
      sub_402190(dest);
      sub_400A20(a4);
      puts("done");
      v5 = sub_402340("mcf.out", dest);
      sub_4012C0(dest);
      return (unsigned int)-(v5 != 0);
    }
  }
  return v4;
}

unsigned __int64 __fastcall sub_400C00(_QWORD *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // cf

  result = a1[69];
  for ( i = a1[70]; result < i; result += 104LL )
    *(_OWORD *)(result + 56) = 0LL;
  v3 = a1[71];
  v4 = a1[72];
  if ( v3 < v4 )
  {
    v5 = v4 + ~v3;
    if ( (v5 & 0x40) == 0 )
    {
      v6 = *(_QWORD *)(v3 + 8);
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v6 + 56);
      *(_QWORD *)(v6 + 56) = v3;
      v7 = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v3 + 40) = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 64) = v3;
      v3 += 64LL;
    }
    if ( v5 >= 0x40 )
    {
      v8 = (_QWORD *)(v3 + 64);
      v9 = v8;
      do
      {
        v10 = *(v8 - 7);
        *(v8 - 4) = *(_QWORD *)(v10 + 56);
        *(_QWORD *)(v10 + 56) = v8 - 8;
        v11 = *(v8 - 6);
        *(v8 - 3) = *(_QWORD *)(v11 + 64);
        *(_QWORD *)(v11 + 64) = v8 - 8;
        v12 = v8[1];
        v8[4] = *(_QWORD *)(v12 + 56);
        *(_QWORD *)(v12 + 56) = v8;
        result = v8[2];
        v8[5] = *(_QWORD *)(result + 64);
        *(_QWORD *)(result + 64) = v8;
        v9 += 16;
        v13 = (unsigned __int64)(v8 + 8) < v4;
        v8 = v9;
      }
      while ( v13 );
    }
  }
  return result;
}

__int64 __fastcall sub_400CF0(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rdi
  __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rsi

  v1 = *(_QWORD **)(a1 + 552);
  *v1 = -100000000LL;
  v2 = (_QWORD *)v1[2];
  result = 0LL;
  if ( v2 != v1 )
  {
    v4 = (_QWORD *)v1[2];
    do
    {
      if ( v2 )
      {
        do
        {
          v4 = v2;
          v5 = (_QWORD *)v2[3];
          if ( *((_DWORD *)v2 + 2) == 1 )
          {
            v6 = *(_QWORD *)v2[6] + *v5;
          }
          else
          {
            v6 = *v5 - *(_QWORD *)v2[6];
            ++result;
          }
          *v2 = v6;
          v2 = (_QWORD *)v2[2];
        }
        while ( v2 );
      }
      else
      {
        v5 = (_QWORD *)v4[3];
      }
      v7 = v4;
      v2 = v4;
      if ( v5 )
      {
        while ( 1 )
        {
          v4 = (_QWORD *)v7[4];
          v7 = v5;
          v2 = v4;
          if ( v4 )
            break;
          v5 = (_QWORD *)v5[3];
          if ( !v5 )
          {
            v4 = 0LL;
            v2 = v7;
            break;
          }
        }
      }
    }
    while ( v2 != v1 );
  }
  return result;
}

double __fastcall sub_400DA0(_QWORD *a1)
{
  char *v1; // rax
  char *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // r8
  __int64 i; // rdx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // rsi

  v1 = (char *)a1[71];
  v2 = (char *)a1[72];
  if ( v1 != v2 )
  {
    v3 = a1[71];
    if ( (((unsigned __int8)((unsigned int)((_DWORD)v2 - 64 - (_DWORD)v1) >> 6) + 1) & 7) != 0 )
    {
      v4 = -(__int64)(((unsigned __int8)((unsigned int)((_DWORD)v2 - 64 - (_DWORD)v1) >> 6) + 1) & 7);
      v3 = a1[71];
      do
      {
        *(_QWORD *)(v3 + 48) = *(_DWORD *)(v3 + 24) == 2;
        v3 += 64LL;
        ++v4;
      }
      while ( v4 );
    }
    if ( (unsigned __int64)(v2 - 64 - v1) >= 0x1C0 )
    {
      do
      {
        v5 = *(_DWORD *)(v3 + 88);
        *(_QWORD *)(v3 + 48) = *(_DWORD *)(v3 + 24) == 2;
        *(_QWORD *)(v3 + 112) = v5 == 2;
        *(_QWORD *)(v3 + 176) = *(_DWORD *)(v3 + 152) == 2;
        *(_QWORD *)(v3 + 240) = *(_DWORD *)(v3 + 216) == 2;
        *(_QWORD *)(v3 + 304) = *(_DWORD *)(v3 + 280) == 2;
        *(_QWORD *)(v3 + 368) = *(_DWORD *)(v3 + 344) == 2;
        *(_QWORD *)(v3 + 432) = *(_DWORD *)(v3 + 408) == 2;
        *(_QWORD *)(v3 + 496) = *(_DWORD *)(v3 + 472) == 2;
        v3 += 512LL;
      }
      while ( v2 != (char *)v3 );
    }
  }
  v6 = a1[70];
  for ( i = a1[69] + 104LL; v6 != i; i += 104LL )
    *(_QWORD *)(*(_QWORD *)(i + 48) + 48LL) = *(_QWORD *)(i + 80);
  if ( v1 != v2 )
  {
    v8 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      if ( *((_QWORD *)v1 + 6) )
      {
        v10 = *(_DWORD *)(*((_QWORD *)v1 + 1) + 96LL);
        if ( v10 < 0 )
        {
          if ( *(int *)(*((_QWORD *)v1 + 2) + 96LL) <= 0 )
          {
            v11 = *(_QWORD *)v1;
LABEL_17:
            v8 += v11;
          }
        }
        else
        {
          v11 = *(_QWORD *)v1;
          if ( v10 )
            goto LABEL_17;
          ++v9;
          v8 = v8 + v11 - a1[66];
        }
      }
      v1 += 64;
      if ( v2 == v1 )
        return (double)(int)v8 + (double)(int)a1[66] * (double)v9;
    }
  }
  v9 = 0;
  LODWORD(v8) = 0;
  return (double)(int)v8 + (double)(int)a1[66] * (double)v9;
}

__int64 __fastcall sub_401120(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax

  v1 = a1[70];
  v2 = a1[69] + 104LL;
  if ( v2 < v1 )
  {
    v3 = a1[73];
    v4 = a1[74];
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 48);
      v6 = *(_QWORD *)(v2 + 80);
      if ( v5 < v3 || v5 >= v4 )
      {
        if ( v6 < -a1[64] || v6 - 1 > a1[64] )
        {
          v8 = 0LL;
          printf("PRIMAL NETWORK SIMPLEX: ");
          printf("basis primal infeasible (%ld)\n", v6);
          result = 1LL;
          goto LABEL_15;
        }
      }
      else
      {
        v7 = -v6;
        if ( -v6 < 1 )
          v7 = *(_QWORD *)(v2 + 80);
        if ( v7 > a1[64] )
        {
          printf("PRIMAL NETWORK SIMPLEX: ");
          printf("artificial arc with nonzero flow, node %d (%ld)\n", *(unsigned int *)(v2 + 96), v6);
        }
      }
      v2 += 104LL;
      if ( v2 >= v1 )
      {
        v8 = 1LL;
        result = 0LL;
        goto LABEL_15;
      }
    }
  }
  result = 0LL;
  v8 = 1LL;
LABEL_15:
  a1[61] = v8;
  return result;
}

__int64 __fastcall sub_401220(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __int64 i; // rbx
  __int64 v4; // rdx

  v1 = a1[71];
  v2 = a1[72];
  for ( i = 0LL; v1 < v2; v1 += 64LL )
  {
    v4 = **(_QWORD **)(v1 + 16) + *(_QWORD *)v1 - **(_QWORD **)(v1 + 8);
    if ( *(_DWORD *)(v1 + 24) >= 2u )
    {
      if ( *(_DWORD *)(v1 + 24) == 2 && v4 > a1[64] )
      {
LABEL_9:
        i = 1LL;
        fwrite("DUAL NETWORK SIMPLEX: ", 0x16uLL, 1uLL, stderr);
        fwrite("basis dual infeasible\n", 0x16uLL, 1uLL, stderr);
        return i;
      }
    }
    else if ( v4 < -a1[64] )
    {
      goto LABEL_9;
    }
  }
  return i;
}

__int64 __fastcall sub_4012C0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  _OWORD *v5; // rbx

  v2 = (void *)a1[69];
  if ( v2 )
    free(v2);
  v3 = (void *)a1[71];
  if ( v3 )
    free(v3);
  v4 = (void *)a1[73];
  v5 = a1 + 69;
  if ( v4 )
    free(v4);
  v5[2] = 0LL;
  v5[1] = 0LL;
  *v5 = 0LL;
  return 0LL;
}

__int64 __fastcall sub_401310(__int64 a1)
{
  FILE *v1; // rax
  FILE *v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rax
  size_t v6; // r12
  __int64 v7; // r15
  size_t v8; // rbx
  __int64 v9; // rcx
  char *v10; // r13
  char *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // r8
  char *v14; // r14
  int v15; // r12d
  __int64 v16; // r15
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 v26; // r15
  __int64 v27; // rbp
  FILE *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-138h] BYREF
  __int64 v45; // [rsp+8h] [rbp-130h] BYREF
  FILE *stream; // [rsp+10h] [rbp-128h]
  __int64 v47; // [rsp+18h] [rbp-120h]
  __int64 v48; // [rsp+20h] [rbp-118h]
  __int64 v49; // [rsp+28h] [rbp-110h] BYREF
  char s[264]; // [rsp+30h] [rbp-108h] BYREF

  v1 = fopen((const char *)a1, "r");
  v2 = v1;
  v3 = -1LL;
  if ( v1 )
  {
    fgets(s, 200, v1);
    if ( (unsigned int)__isoc99_sscanf(s, "%ld %ld", &v45, &v44) == 2 )
    {
      stream = v2;
      v4 = v45;
      *(_QWORD *)(a1 + 408) = v45;
      v5 = v44;
      *(_QWORD *)(a1 + 432) = v44;
      v6 = 2 * v4 + 1;
      *(_QWORD *)(a1 + 400) = v6;
      v7 = v5 + 3 * v4;
      *(_QWORD *)(a1 + 424) = v7;
      v8 = 27328512LL;
      if ( v4 < 15001 )
        v8 = v5 + 3 * v4;
      v9 = 28900000LL;
      if ( v4 < 15001 )
        v9 = 3000000LL;
      *(_QWORD *)(a1 + 416) = v8;
      *(_QWORD *)(a1 + 456) = v9;
      *(_QWORD *)(a1 + 448) = v8 - v7;
      v48 = v4;
      v10 = (char *)calloc(2 * v4 + 2, 0x68uLL);
      *(_QWORD *)(a1 + 552) = v10;
      v11 = (char *)calloc(v6, 0x40uLL);
      *(_QWORD *)(a1 + 584) = v11;
      v12 = calloc(v8, 0x40uLL);
      *(_QWORD *)(a1 + 568) = v12;
      if ( v12 && v10 && v11 )
      {
        *(_QWORD *)(a1 + 560) = &v10[104 * v6 + 104];
        *(_QWORD *)(a1 + 576) = &v12[8 * v7];
        *(_QWORD *)(a1 + 592) = &v11[64 * v6];
        v13 = v48;
        v47 = a1;
        if ( v48 > 0 )
        {
          v14 = v10 + 104;
          v15 = -1;
          v16 = 1LL;
          while ( 1 )
          {
            fgets(s, 200, stream);
            if ( (unsigned int)__isoc99_sscanf(s, "%ld %ld", &v45, &v44) != 2 )
              return -1LL;
            v17 = v45;
            v18 = v44;
            if ( v45 > v44 )
              return -1LL;
            *((_DWORD *)v14 + 24) = v15;
            *((_QWORD *)v14 + 10) = -1LL;
            v19 = v47;
            v13 = *(_QWORD *)(v47 + 408);
            v20 = 104 * (v16 + v13);
            *(_DWORD *)&v10[v20 + 96] = v16;
            *(_QWORD *)&v10[v20 + 80] = 1LL;
            *((_DWORD *)v14 + 25) = v17;
            *(_DWORD *)&v10[v20 + 100] = v18;
            v21 = 104LL * *(_QWORD *)(v19 + 400);
            v12[1] = &v10[v21];
            v12[2] = v14;
            v22 = *(_QWORD *)(v19 + 528);
            *v12 = v22 + 15;
            v12[7] = v22 + 15;
            v12[4] = *(_QWORD *)&v10[v21 + 56];
            *(_QWORD *)&v10[v21 + 56] = v12;
            v12[5] = *((_QWORD *)v14 + 8);
            *((_QWORD *)v14 + 8) = v12;
            v12[9] = &v10[v20];
            v12[10] = &v10[v21];
            v12[8] = 15LL;
            v12[15] = 15LL;
            v12[12] = *(_QWORD *)&v10[v20 + 56];
            *(_QWORD *)&v10[v20 + 56] = v12 + 8;
            v12[13] = *(_QWORD *)&v10[v21 + 64];
            *(_QWORD *)&v10[v21 + 64] = v12 + 8;
            v12[17] = v14;
            v12[18] = &v10[v20];
            v23 = v12 + 16;
            if ( v22 <= 9999999 )
              v22 = 10000000LL;
            v24 = 2 * v22;
            v12[16] = v24;
            v12[23] = v24;
            v12[20] = *((_QWORD *)v14 + 7);
            *((_QWORD *)v14 + 7) = v23;
            v12[21] = *(_QWORD *)&v10[v20 + 64];
            *(_QWORD *)&v10[v20 + 64] = v23;
            v12 += 24;
            v14 += 104;
            --v15;
            if ( v16++ >= v13 )
              goto LABEL_20;
          }
        }
        v16 = 1LL;
LABEL_20:
        if ( v16 != v13 + 1 )
          return -1LL;
        v26 = v47;
        if ( *(__int64 *)(v47 + 432) > 0 )
        {
          v27 = 0LL;
          v28 = stream;
          while ( 1 )
          {
            fgets(s, 200, v28);
            if ( (unsigned int)__isoc99_sscanf(s, "%ld %ld %ld", &v45, &v44, &v49) != 3 )
              return -1LL;
            v29 = 104 * (v45 + *(_QWORD *)(v26 + 408));
            v12[1] = &v10[v29];
            v30 = 104 * v44;
            v12[2] = &v10[104 * v44];
            v31 = v49;
            v12[7] = v49;
            *v12 = v31;
            v12[4] = *(_QWORD *)&v10[v29 + 56];
            *(_QWORD *)&v10[v29 + 56] = v12;
            v12[5] = *(_QWORD *)&v10[v30 + 64];
            *(_QWORD *)&v10[v30 + 64] = v12;
            ++v27;
            v12 += 8;
            if ( v27 >= *(_QWORD *)(v26 + 432) )
              goto LABEL_29;
          }
        }
        v28 = stream;
LABEL_29:
        if ( *(_QWORD **)(v26 + 576) != v12 )
        {
          *(_QWORD *)(v26 + 576) = v12;
          v33 = *(_QWORD *)(v26 + 568);
          if ( v33 >= (unsigned __int64)v12 )
            v34 = 0LL;
          else
            v34 = (((unsigned __int64)v12 + ~v33) >> 6) + 1;
          *(_QWORD *)(v26 + 424) = v34;
          *(_QWORD *)(v26 + 432) = v34;
        }
        fclose(v28);
        *(_BYTE *)(v26 + 200) = 0;
        v35 = *(_QWORD *)(v26 + 408);
        if ( v35 > 0 )
        {
          v36 = *(_QWORD *)(v26 + 568);
          v37 = 10000000LL;
          if ( *(__int64 *)(v26 + 528) > 9999999 )
            v37 = *(_QWORD *)(v26 + 528);
          v38 = -2 * v37;
          v39 = *(_QWORD *)(v26 + 408) & 1LL;
          if ( v35 == 1 )
          {
            v40 = 2LL;
            if ( !v39 )
              return 0LL;
          }
          else
          {
            v41 = (__int64 *)(v36 + 376);
            v42 = v39 - v35;
            v40 = 2LL;
            do
            {
              *(v41 - 31) = v38;
              *(v41 - 24) = v38;
              *(v41 - 7) = v38;
              *v41 = v38;
              v41 += 48;
              v40 += 6LL;
              v42 += 2LL;
            }
            while ( v42 );
            if ( !v39 )
              return 0LL;
          }
          v43 = v40 << 6;
          *(_QWORD *)(v36 + v43) = v38;
          *(_QWORD *)(v36 + v43 + 56) = v38;
        }
        return 0LL;
      }
      puts("read_min(): not enough memory");
      sub_4012C0((_QWORD *)a1);
      return -1LL;
    }
  }
  return v3;
}

__int64 __fastcall sub_401820(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  __int64 v4; // rsi
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  char *v10; // rax
  __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 456);
  v3 = *(void **)(a1 + 568);
  v4 = v2 + *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v4;
  *(_QWORD *)(a1 + 448) += v2;
  v5 = (char *)realloc(v3, v4 << 6);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 568) = v5;
    v7 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)(a1 + 576) = &v5[64 * *(_QWORD *)(a1 + 424)];
    v8 = *(_QWORD *)(a1 + 560);
    v9 = v7 + 104;
    if ( v7 + 104 >= v8 )
    {
      return 0LL;
    }
    else
    {
      v10 = &v5[-v6];
      v11 = 0LL;
      do
      {
        if ( *(_QWORD *)(v9 + 24) != v7 )
          *(_QWORD *)(v9 + 48) += v10;
        v9 += 104LL;
      }
      while ( v9 < v8 );
    }
  }
  else
  {
    printf("network %s: not enough memory\n", (const char *)a1);
    fflush(stdout);
    return -1LL;
  }
  return v11;
}

__int64 __fastcall sub_401A80(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rbx
  signed __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 i; // r14
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  __int64 v45; // [rsp+18h] [rbp-50h]
  _QWORD *v46; // [rsp+20h] [rbp-48h]
  _QWORD *v47; // [rsp+28h] [rbp-40h]
  __int64 v48; // [rsp+30h] [rbp-38h]

  v1 = a1[51];
  v2 = a1[66];
  if ( v1 >= 15001 )
  {
    v47 = a1 + 72;
    v8 = a1[71];
    v9 = a1[72];
    v7 = 0LL;
  }
  else
  {
    v3 = a1[52];
    v4 = a1[53];
    if ( v4 + a1[57] <= v3 || (__int64)(((unsigned __int64)(v1 * v1) >> 1) + v4) <= v3 )
    {
      v7 = 0LL;
    }
    else
    {
      v5 = sub_401820((__int64)a1);
      result = -1LL;
      if ( v5 )
        return result;
      sub_400C00(a1);
      v1 = a1[51];
      v7 = 1LL;
    }
    v8 = a1[71];
    v9 = a1[72];
    v47 = a1 + 72;
    if ( v1 <= 0 )
      return 0LL;
  }
  for ( i = 0LL; i < v1; ++i )
  {
    if ( *(_DWORD *)(v8 + 88) != -1 )
      break;
    v8 += 192LL;
  }
  if ( i >= v1 )
    return 0LL;
  v48 = v7;
  v11 = v2 - 15;
  v12 = 0LL;
  result = 0LL;
  v45 = v11;
  v44 = v1;
  v46 = a1;
  do
  {
    if ( *(_DWORD *)(v8 + 88) != -1 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 56LL) + 16LL) + 72LL) = v12;
      v12 = v8 + 64;
    }
    if ( *(_DWORD *)(v8 + 24) != -1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 72LL);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v8 + 16);
        v15 = *(int *)(v14 + 100) + v11 - *(_QWORD *)(v8 + 56);
        do
        {
          v33 = *(_QWORD *)(v13 + 8);
          if ( *(_QWORD *)(v13 + 56) + *(int *)(v33 + 100) <= v15 )
          {
            v16 = *(_QWORD *)v14 + 30LL - *(_QWORD *)v33;
            if ( v16 < 0 )
            {
              v17 = a1[56];
              if ( result >= v17 )
              {
                if ( *(_QWORD *)(v9 + 48) > v16 )
                {
                  v43 = v12;
                  *(_QWORD *)(v9 + 8) = v33;
                  *(_QWORD *)(v9 + 16) = v14;
                  *(_QWORD *)(v9 + 56) = 30LL;
                  *(_QWORD *)v9 = 30LL;
                  *(_QWORD *)(v9 + 48) = v16;
                  v24 = 3LL - (*(_QWORD *)(v9 + 112) > *(_QWORD *)(v9 + 176));
                  if ( v24 <= v17 )
                  {
                    v25 = 1LL;
                    while ( 1 )
                    {
                      v26 = v14;
                      v27 = v17;
                      v28 = v24;
                      v29 = (v24 - 1) << 6;
                      v30 = *(_QWORD *)(v9 + v29 + 48);
                      if ( v30 <= v16 )
                        break;
                      v31 = v25 << 6;
                      *(_QWORD *)(v9 + v31 - 48) = *(_QWORD *)(v9 + v29 + 16);
                      *(_OWORD *)(v9 + v31 - 64) = *(_OWORD *)(v9 + v29);
                      *(_QWORD *)(v9 + v31 - 8) = *(_QWORD *)(v9 + v29);
                      *(_QWORD *)(v9 + v31 - 16) = v30;
                      *(_QWORD *)(v9 + v29 + 8) = v33;
                      *(_QWORD *)(v9 + v29 + 16) = v26;
                      *(_QWORD *)(v9 + v29) = 30LL;
                      *(_QWORD *)(v9 + v29 + 56) = 30LL;
                      *(_QWORD *)(v9 + v29 + 48) = v16;
                      v24 *= 2LL;
                      v32 = 2 * v28 + 1;
                      v17 = v27;
                      if ( v32 <= v27 )
                      {
                        if ( *(_QWORD *)(v9 + (v28 << 7) - 16) >= *(_QWORD *)(v9 + (v28 << 7) + 48) )
                          v32 = 2 * v28;
                        v24 = v32;
                      }
                      v12 = v43;
                      v14 = v26;
                      v25 = v28;
                      if ( v24 > v17 )
                      {
                        a1 = v46;
                        v11 = v45;
                        v1 = v44;
                        goto LABEL_40;
                      }
                    }
                    a1 = v46;
                    v1 = v44;
                    v14 = v26;
                    v11 = v45;
                  }
                }
              }
              else
              {
                v18 = result << 6;
                *(_QWORD *)(v9 + v18 + 8) = v33;
                *(_QWORD *)(v9 + v18 + 16) = v14;
                *(_QWORD *)(v9 + v18 + 56) = 30LL;
                *(_QWORD *)(v9 + v18) = 30LL;
                *(_QWORD *)(v9 + v18 + 48) = v16;
                if ( result )
                {
                  v19 = result + 1;
                  v20 = result + 1;
                  do
                  {
                    v20 /= 2LL;
                    v21 = (v20 - 1) << 6;
                    v22 = *(_QWORD *)(v9 + v21 + 48);
                    if ( v22 >= v16 )
                      break;
                    v23 = result << 6;
                    *(_QWORD *)(v9 + v23 + 16) = *(_QWORD *)(v9 + v21 + 16);
                    *(_OWORD *)(v9 + v23) = *(_OWORD *)(v9 + v21);
                    *(_QWORD *)(v9 + v23 + 56) = *(_QWORD *)(v9 + v21);
                    *(_QWORD *)(v9 + v23 + 48) = v22;
                    *(_QWORD *)(v9 + v21 + 8) = v33;
                    *(_QWORD *)(v9 + v21 + 16) = v14;
                    *(_QWORD *)(v9 + v21) = 30LL;
                    *(_QWORD *)(v9 + v21 + 56) = 30LL;
                    *(_QWORD *)(v9 + v21 + 48) = v16;
                    result = v20 - 1;
                  }
                  while ( v20 != 1 );
                  result = v19;
                  a1 = v46;
                  v11 = v45;
                  v1 = v44;
                }
                else
                {
                  result = 1LL;
                }
              }
            }
          }
LABEL_40:
          v13 = *(_QWORD *)(v33 + 72);
        }
        while ( v13 );
      }
    }
    ++i;
    v8 += 192LL;
  }
  while ( i != v1 );
  if ( !result )
    return 0LL;
  v34 = v9 + (result << 6);
  *v47 = v34;
  v35 = (result << 6) - 64;
  if ( v48 )
  {
    if ( (((unsigned __int8)((unsigned int)v35 >> 6) + 1) & 7) != 0 )
    {
      v36 = -(__int64)(((unsigned __int8)((unsigned int)v35 >> 6) + 1) & 7);
      do
      {
        *(_QWORD *)(v9 + 48) = 0LL;
        *(_DWORD *)(v9 + 24) = 1;
        v9 += 64LL;
        ++v36;
      }
      while ( v36 );
    }
    if ( v35 >= 0x1C0 )
    {
      do
      {
        *(_QWORD *)(v9 + 48) = 0LL;
        *(_DWORD *)(v9 + 24) = 1;
        *(_QWORD *)(v9 + 112) = 0LL;
        *(_DWORD *)(v9 + 88) = 1;
        *(_QWORD *)(v9 + 176) = 0LL;
        *(_DWORD *)(v9 + 152) = 1;
        *(_QWORD *)(v9 + 240) = 0LL;
        *(_DWORD *)(v9 + 216) = 1;
        *(_QWORD *)(v9 + 304) = 0LL;
        *(_DWORD *)(v9 + 280) = 1;
        *(_QWORD *)(v9 + 368) = 0LL;
        *(_DWORD *)(v9 + 344) = 1;
        *(_QWORD *)(v9 + 432) = 0LL;
        *(_DWORD *)(v9 + 408) = 1;
        *(_QWORD *)(v9 + 496) = 0LL;
        *(_DWORD *)(v9 + 472) = 1;
        v9 += 512LL;
      }
      while ( v34 != v9 );
    }
  }
  else
  {
    if ( (v35 & 0x40) == 0 )
    {
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_DWORD *)(v9 + 24) = 1;
      v37 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)(v9 + 32) = *(_QWORD *)(v37 + 56);
      *(_QWORD *)(v37 + 56) = v9;
      v38 = *(_QWORD *)(v9 + 16);
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(v38 + 64);
      *(_QWORD *)(v38 + 64) = v9;
      v9 += 64LL;
    }
    if ( result << 6 != 64 )
    {
      do
      {
        *(_QWORD *)(v9 + 48) = 0LL;
        *(_DWORD *)(v9 + 24) = 1;
        v39 = *(_QWORD *)(v9 + 8);
        *(_QWORD *)(v9 + 32) = *(_QWORD *)(v39 + 56);
        *(_QWORD *)(v39 + 56) = v9;
        v40 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 40) = *(_QWORD *)(v40 + 64);
        *(_QWORD *)(v40 + 64) = v9;
        *(_QWORD *)(v9 + 112) = 0LL;
        *(_DWORD *)(v9 + 88) = 1;
        v41 = *(_QWORD *)(v9 + 72);
        *(_QWORD *)(v9 + 96) = *(_QWORD *)(v41 + 56);
        *(_QWORD *)(v41 + 56) = v9 + 64;
        v42 = *(_QWORD *)(v9 + 80);
        *(_QWORD *)(v9 + 104) = *(_QWORD *)(v42 + 64);
        *(_QWORD *)(v42 + 64) = v9 + 64;
        v9 += 128LL;
      }
      while ( v34 != v9 );
    }
  }
  a1[53] += result;
  a1[55] += result;
  a1[56] -= result;
  return result;
}

__int64 __fastcall sub_402090(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r8
  __int128 *v5; // rax
  _OWORD *v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2

  if ( a3 )
  {
    v3 = a1[55];
    if ( v3 )
      goto LABEL_17;
    return 0LL;
  }
  v4 = a1[72];
  v5 = (__int128 *)(a1[71] + ((a1[53] - a1[55]) << 6));
  v3 = 0LL;
  if ( (unsigned __int64)v5 < v4 )
  {
    v6 = (_OWORD *)(a1[71] + ((a1[53] - a1[55]) << 6));
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 + 6);
      v8 = -2LL;
      if ( v7 )
      {
        if ( v7 == 1 )
          v8 = **((_QWORD **)v5 + 2) + *(_QWORD *)v5 - **((_QWORD **)v5 + 1);
        if ( v8 <= a2 )
          goto LABEL_14;
      }
      else
      {
        v9 = *((_QWORD *)v5 + 1);
        if ( v5 != *(__int128 **)(v9 + 48) )
          v9 = *((_QWORD *)v5 + 2);
        *(_QWORD *)(v9 + 48) = v6;
        if ( a2 >= -2 )
        {
LABEL_14:
          v10 = *v5;
          v11 = v5[1];
          v12 = v5[2];
          v6[3] = v5[3];
          v6[2] = v12;
          v6[1] = v11;
          *v6 = v10;
          v6 += 4;
          goto LABEL_15;
        }
      }
      ++v3;
LABEL_15:
      v5 += 4;
      if ( (unsigned __int64)v5 >= v4 )
      {
        if ( v3 )
        {
LABEL_17:
          a1[53] -= v3;
          a1[55] -= v3;
          a1[72] -= v3 << 6;
          a1[56] += v3;
          sub_400C00(a1);
          return v3;
        }
        return 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_402190(_QWORD *a1)
{
  __int64 v1; // r10
  char *v2; // rdx
  char *v3; // rsi
  unsigned __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rdx

  v1 = a1[69];
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 16) = v1 + 104;
  *(_OWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 88) = a1[50] + 1LL;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = -100000000LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  v2 = (char *)a1[71];
  v3 = (char *)a1[72];
  if ( v2 != v3 )
  {
    v4 = v3 - 64 - v2;
    if ( (((unsigned __int8)((unsigned int)((_DWORD)v3 - 64 - (_DWORD)v2) >> 6) + 1) & 3) != 0 )
    {
      v5 = -(__int64)(((unsigned __int8)((unsigned int)((_DWORD)v3 - 64 - (_DWORD)v2) >> 6) + 1) & 3);
      do
      {
        if ( *((_DWORD *)v2 + 6) != -1 )
          *((_DWORD *)v2 + 6) = 1;
        v2 += 64;
        ++v5;
      }
      while ( v5 );
    }
    if ( v4 >= 0xC0 )
    {
      do
      {
        if ( *((_DWORD *)v2 + 6) != -1 )
          *((_DWORD *)v2 + 6) = 1;
        if ( *((_DWORD *)v2 + 22) != -1 )
          *((_DWORD *)v2 + 22) = 1;
        if ( *((_DWORD *)v2 + 38) != -1 )
          *((_DWORD *)v2 + 38) = 1;
        if ( *((_DWORD *)v2 + 54) != -1 )
          *((_DWORD *)v2 + 54) = 1;
        v2 += 256;
      }
      while ( v3 != v2 );
    }
  }
  v6 = a1[70];
  if ( v1 + 104 == v6 )
  {
    v12 = (_QWORD *)(v1 + 32);
  }
  else
  {
    v7 = a1[73];
    v8 = v6 - 104;
    v9 = _mm_slli_si128((__m128i)1uLL, 8);
    v10 = v1;
    do
    {
      v11 = v10;
      v10 += 104LL;
      *(_QWORD *)(v11 + 152) = v7;
      *(_QWORD *)(v11 + 128) = v1;
      *(_QWORD *)(v11 + 120) = 0LL;
      *(_QWORD *)(v11 + 136) = v11 + 208;
      *(_QWORD *)(v11 + 144) = v11;
      *(_QWORD *)v7 = 100000000LL;
      *(_DWORD *)(v7 + 24) = 0;
      *(_DWORD *)(v11 + 112) = 1;
      *(_QWORD *)(v11 + 104) = 0LL;
      *(_QWORD *)(v7 + 8) = v10;
      *(_QWORD *)(v7 + 16) = v1;
      *(__m128i *)(v11 + 184) = v9;
      v7 += 64LL;
    }
    while ( v8 != v10 );
    v12 = (_QWORD *)(v10 + 32);
  }
  *v12 = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  return 0LL;
}

__int64 __fastcall sub_402340(const char *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  FILE *v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // r13
  unsigned __int64 v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // rax

  v2 = a2[55];
  v3 = a2[72];
  v4 = fopen(a1, "w");
  v5 = -1LL;
  if ( v4 )
  {
    sub_400C00(a2);
    v6 = *(_QWORD **)(a2[69] + 104LL * a2[50] + 56);
    if ( v6 )
    {
      v7 = v3 - (v2 << 6);
      while ( !v6[6] )
      {
LABEL_15:
        v6 = (_QWORD *)v6[4];
        if ( !v6 )
          goto LABEL_16;
      }
      fwrite("()\n", 3uLL, 1uLL, v4);
      v8 = v6;
      while ( 1 )
      {
        if ( (unsigned __int64)v8 >= v7 )
          fwrite("***\n", 4uLL, 1uLL, v4);
        fprintf(v4, "%d\n", (unsigned int)-*(_DWORD *)(v8[2] + 96LL));
        v9 = *(_QWORD **)(v8[2] + 104LL * a2[51] + 56);
        if ( !v9 )
          break;
        while ( !v9[6] )
        {
          v9 = (_QWORD *)v9[4];
          if ( !v9 )
            goto LABEL_17;
        }
        v8 = 0LL;
        if ( *(_DWORD *)(v9[2] + 96LL) )
          v8 = v9;
        if ( !v8 )
          goto LABEL_15;
      }
LABEL_17:
      fclose(v4);
    }
    else
    {
LABEL_16:
      fclose(v4);
      return 0LL;
    }
  }
  return v5;
}

__int64 __fastcall sub_402490(
        __int64 a1,
        __int32 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5,
        const __m128i *a6,
        const __m128i *a7,
        const __m128i *a8,
        const __m128i *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r12
  const __m128i *v13; // rax
  __int64 v14; // r11
  __int64 v15; // r11
  const __m128i *v16; // r13
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // r11
  __int64 v20; // rbx
  const __m128i *v21; // r10
  __int64 v22; // r14
  __m128i *v23; // rbp
  bool v24; // zf
  __m128i *v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // r10
  __int64 v32; // rcx
  __m128i v33; // xmm1
  __int64 v34; // rcx

  v12 = a10;
  v13 = *(const __m128i **)(a10 + 8);
  if ( a11 < 0 && v13 == a6 || a11 > 0 && v13 == a5 )
  {
    v14 = -a11;
    if ( -a11 < 1 )
      v14 = a11;
  }
  else
  {
    v15 = -a11;
    if ( -a11 < 1 )
      v15 = a11;
    v14 = -v15;
  }
  v16 = a8;
  result = (__int64)a7;
  do
  {
LABEL_12:
    v18 = result;
    *(_QWORD *)result += v14;
    result = *(_QWORD *)(result + 16);
  }
  while ( result );
  while ( (const __m128i *)v18 != a7 )
  {
    result = *(_QWORD *)(v18 + 32);
    if ( result )
      goto LABEL_12;
    v18 = *(_QWORD *)(v18 + 24);
  }
  v19 = a7[5].m128i_i64[1];
  if ( a5 != a8 )
  {
    v20 = a7[5].m128i_i64[1];
    v21 = a6;
    do
    {
      result = (__int64)a5;
      a5 = (const __m128i *)a5[1].m128i_i64[1];
      v22 = *(_QWORD *)(result + 32);
      if ( v22 )
        *(_QWORD *)(v22 + 40) = *(_QWORD *)(result + 40);
      v23 = *(__m128i **)(result + 40);
      v24 = v23 == 0LL;
      v25 = v23 + 2;
      if ( v24 )
        v25 = (__m128i *)&a5[1];
      v25->m128i_i64[0] = v22;
      *(_QWORD *)(result + 24) = v21;
      v26 = v21[1].m128i_i64[0];
      *(_QWORD *)(result + 32) = v26;
      if ( v26 )
        *(_QWORD *)(v26 + 40) = result;
      v21[1].m128i_i64[0] = result;
      *(_QWORD *)(result + 40) = 0LL;
      v27 = *(_DWORD *)(result + 8) == 0;
      v28 = -a3;
      if ( v27 == a1 )
        v28 = a3;
      v29 = *(_QWORD *)(result + 80) + v28;
      v30 = *(_QWORD *)(result + 48);
      v31 = *(_QWORD *)(result + 88);
      *(_DWORD *)(result + 8) = a2;
      *(_QWORD *)(result + 80) = a4;
      *(_QWORD *)(result + 48) = v12;
      *(_QWORD *)(result + 88) = v20;
      v20 = v19 - v31;
      a2 = v27;
      a4 = v29;
      v21 = (const __m128i *)result;
      v12 = v30;
    }
    while ( a5 != a8 );
  }
  if ( a3 <= a12 )
  {
    result = (__int64)a9;
    while ( v16 != a9 )
    {
      v16[5].m128i_i64[1] -= v19;
      v16 = (const __m128i *)v16[1].m128i_i64[1];
    }
    while ( a6 != a9 )
    {
      a6[5].m128i_i64[1] += v19;
      a6 = (const __m128i *)a6[1].m128i_i64[1];
    }
  }
  else
  {
    if ( a8 != a9 )
    {
      result = -a3;
      do
      {
        v16[5].m128i_i64[1] -= v19;
        v32 = a3;
        if ( v16->m128i_i32[2] == a1 )
          v32 = -a3;
        v16[5].m128i_i64[0] += v32;
        v16 = (const __m128i *)v16[1].m128i_i64[1];
      }
      while ( v16 != a9 );
    }
    if ( a6 != a9 )
    {
      result = -a3;
      do
      {
        v33 = _mm_loadu_si128(a6 + 5);
        v34 = a3;
        if ( a6->m128i_i32[2] != a1 )
          v34 = -a3;
        a6[5] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v19), v33);
        a6 = (const __m128i *)a6[1].m128i_i64[1];
      }
      while ( a6 != a9 );
    }
  }
  return result;
}

__int64 __fastcall sub_4026A0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  result = 0LL;
  if ( a3 != a4 )
  {
    v6 = a3;
    a3 = a4;
    do
    {
      while ( *(_QWORD *)(v6 + 88) < *(_QWORD *)(a3 + 88) )
      {
        if ( *(_DWORD *)(v6 + 8) )
        {
          v7 = *(_QWORD *)(v6 + 80);
          if ( *a1 <= v7 )
            goto LABEL_16;
        }
        else
        {
          if ( !*(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL) )
            goto LABEL_16;
          v7 = 1LL - *(_QWORD *)(v6 + 80);
          if ( *a1 <= v7 )
            goto LABEL_16;
        }
        *a1 = v7;
        *a2 = 0LL;
        result = v6;
LABEL_16:
        v6 = *(_QWORD *)(v6 + 24);
        if ( v6 == a3 )
          goto LABEL_20;
      }
      if ( *(_DWORD *)(a3 + 8) )
      {
        if ( !*(_QWORD *)(*(_QWORD *)(a3 + 24) + 24LL) )
          goto LABEL_11;
        v8 = 1LL - *(_QWORD *)(a3 + 80);
        if ( *a1 < v8 )
          goto LABEL_11;
      }
      else
      {
        v8 = *(_QWORD *)(a3 + 80);
        if ( *a1 < v8 )
          goto LABEL_11;
      }
      *a1 = v8;
      *a2 = 1LL;
      result = a3;
LABEL_11:
      a3 = *(_QWORD *)(a3 + 24);
    }
    while ( v6 != a3 );
  }
LABEL_20:
  *a5 = a3;
  return result;
}

_BOOL8 __fastcall sub_402760(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 result; // rax

  while ( a1 != a3 )
  {
    result = *(_DWORD *)(a1 + 8) == 0;
    *(_QWORD *)(a1 + 80) = result;
    a1 = *(_QWORD *)(a1 + 24);
  }
  while ( a2 != a3 )
  {
    result = *(_DWORD *)(a2 + 8) != 0;
    *(_QWORD *)(a2 + 80) = result;
    a2 = *(_QWORD *)(a2 + 24);
  }
  return result;
}

__int64 __fastcall sub_4027B0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 i; // rdx
  __int64 v6; // r13
  __int64 *v7; // rcx
  const __m128i **v8; // rdx
  __int64 v9; // r14
  const __m128i *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  const __m128i *v13; // r9
  __int64 v14; // r14
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  const __m128i *v21; // [rsp+18h] [rbp-50h] BYREF
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24[7]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a1[53];
  v3 = a1[71];
  v4 = a1[72];
  v23 = v2;
  v22 = v3;
  for ( i = v4; ; i = v4 )
  {
    v6 = sub_402AD0(v2, v3, i, &v19);
    if ( !v6 )
      break;
    ++a1[75];
    v7 = (__int64 *)(v6 + 8);
    v8 = (const __m128i **)(v6 + 16);
    if ( v19 > 0 )
      v8 = (const __m128i **)(v6 + 8);
    if ( v19 > 0 )
      v7 = (__int64 *)(v6 + 16);
    v9 = *v7;
    v10 = *v8;
    v20 = 1LL;
    v11 = sub_4026A0(&v20, v24, v9, (__int64)v10, &v21);
    if ( v11 )
    {
      v12 = 0LL;
      v13 = (const __m128i *)v9;
      if ( !v24[0] )
        v13 = v10;
      if ( !v24[0] )
        v10 = (const __m128i *)v9;
      v14 = *(_QWORD *)(v11 + 48);
      v15 = (v24[0] == *(_DWORD *)(v11 + 8)) + 1;
      v16 = 1 - v20;
      if ( v19 <= 0 )
        v16 = v20;
      LOBYTE(v12) = v24[0] == 0;
      sub_402490(
        v12,
        *(_QWORD *)(v6 + 8) == (_QWORD)v10,
        v20,
        v16,
        v10,
        v13,
        (const __m128i *)v11,
        *(const __m128i **)(v11 + 24),
        v21,
        v6,
        v19,
        a1[64]);
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v14 + 24) = v15;
      v17 = a1[75];
      if ( v17 - 1 == 200
                    * (((unsigned __int64)(((unsigned __int128)((__int64)0xA3D70A3D70A3D70BLL * (__int128)(v17 - 1)) >> 64)
                                         + v17
                                         - 1) >> 63)
                     + ((__int64)(((unsigned __int128)((__int64)0xA3D70A3D70A3D70BLL * (__int128)(v17 - 1)) >> 64)
                                + v17
                                - 1) >> 7)) )
        a1[77] += sub_400CF0((__int64)a1);
    }
    else
    {
      ++a1[76];
      *(_DWORD *)(v6 + 24) = 2 - (*(_DWORD *)(v6 + 24) == 2);
      if ( v20 )
        sub_402760(v9, (__int64)v10, (__int64)v21);
    }
    v2 = v23;
    v3 = v22;
  }
  a1[77] += sub_400CF0((__int64)a1);
  sub_401120(a1);
  sub_401220(a1);
  return 0LL;
}

__int64 __fastcall sub_4029D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  _BOOL8 v12; // rax
  _BOOL8 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r12

  do
  {
    v3 = *(_QWORD *)(*(__int64 *)((char *)qword_4050B0
                                + 4 * ((a1 + a2 + ((unsigned __int64)(a1 + a2) >> 63)) & 0x3FFFFFFFFFFFFFFELL))
                   + 16);
    v4 = a2;
    result = a1;
    do
    {
      v6 = result - 1;
      do
      {
        v7 = v6;
        v8 = qword_4050B8[v6++];
      }
      while ( *(_QWORD *)(v8 + 16) > v3 );
      v9 = v4 + 1;
      do
      {
        v10 = v9;
        v11 = qword_4050A8[v9--];
      }
      while ( v3 > *(_QWORD *)(v11 + 16) );
      if ( v6 < v9 )
      {
        qword_4050B8[v7] = v11;
        qword_4050A8[v10] = v8;
      }
      v12 = v6 <= v9;
      v4 = v9 - v12;
      result = v6 + v12;
    }
    while ( result <= v4 );
    v13 = v6 <= v9;
    v14 = v9 - v13;
    v15 = v6 + v13;
    if ( v14 > a1 )
      result = sub_4029D0(a1, v14);
    if ( v15 >= a2 )
      break;
    a1 = v15;
  }
  while ( v15 < 51 );
  return result;
}

__int64 __fastcall sub_402AD0(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r15
  __m128i si128; // xmm5
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm8
  __m128i v13; // xmm9
  __m128i v14; // xmm10
  __m128i v15; // xmm11
  __m128i v16; // xmm7
  __m128i v17; // xmm3
  __m128i v18; // xmm4
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rbp
  __int64 v25; // rcx
  __int64 v27; // r12
  unsigned __int64 i; // rbx
  int v29; // ebp
  __int64 v30; // rdi
  unsigned __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax

  if ( LOBYTE(xmmword_405BA8[0]) )
  {
    v6 = qword_407CA8;
    if ( qword_407CA8 < 2 )
    {
      v7 = 0LL;
LABEL_19:
      qword_407CA8 = v7;
      v20 = qword_407CA0;
      v19 = qword_407C98;
      goto LABEL_20;
    }
    v21 = 2LL;
    v7 = 0LL;
    while ( 1 )
    {
      v22 = *(_QWORD *)qword_4050B0[v21];
      v23 = **(_QWORD **)(v22 + 16) + *(_QWORD *)v22 - **(_QWORD **)(v22 + 8);
      if ( v23 < 0 )
      {
        if ( *(_DWORD *)(v22 + 24) == 1 )
          goto LABEL_11;
      }
      else if ( v23 && *(_DWORD *)(v22 + 24) == 2 )
      {
LABEL_11:
        v24 = (_QWORD *)qword_4050B8[v7];
        *v24 = v22;
        ++v7;
        v24[1] = v23;
        v25 = -v23;
        if ( -v23 < 1 )
          v25 = v23;
        v24[2] = v25;
      }
      if ( v21 <= 0x31 && (__int64)v21++ < v6 )
        continue;
      goto LABEL_19;
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_403160);
  v9 = 0xFFFFFFFFFFFFF52LL;
  v10 = _mm_load_si128((const __m128i *)&xmmword_403170);
  v11 = _mm_shuffle_epi32((__m128i)((unsigned __int64)xmmword_405BA8 + 8), 68);
  v12 = _mm_load_si128((const __m128i *)&xmmword_403180);
  v13 = _mm_load_si128((const __m128i *)&xmmword_403190);
  v14 = _mm_load_si128((const __m128i *)&xmmword_4031A0);
  v15 = _mm_load_si128((const __m128i *)&xmmword_4031B0);
  v16 = _mm_load_si128((const __m128i *)&xmmword_4031C0);
  v17 = _mm_load_si128((const __m128i *)&xmmword_4031D0);
  do
  {
    v18 = _mm_add_epi64(
            _mm_slli_epi64(_mm_mul_epu32(_mm_srli_epi64(si128, 0x20u), v10), 0x20u),
            _mm_add_epi64(_mm_mul_epu32(si128, v10), v11));
    xmmword_405B98[v9] = (__int128)v18;
    xmmword_405BA8[v9] = (__int128)_mm_add_epi64(v18, v12);
    xmmword_405BB8[v9] = (__int128)_mm_add_epi64(v18, v13);
    xmmword_405BC8[v9] = (__int128)_mm_add_epi64(v18, v14);
    xmmword_405BD8[v9] = (__int128)_mm_add_epi64(v18, v15);
    xmmword_405BE8[v9] = (__int128)_mm_add_epi64(v18, v16);
    si128 = _mm_add_epi64(si128, v17);
    v9 += 6LL;
  }
  while ( v9 * 16 );
  *(_QWORD *)&xmmword_405B98[0] = &unk_407C68;
  v19 = (a1 - 1) / 300 + 1;
  qword_407C98 = v19;
  *((_QWORD *)&xmmword_405B98[0] + 1) = &unk_407C80;
  LOBYTE(xmmword_405BA8[0]) = 1;
  qword_407CA0 = 0LL;
  qword_407CA8 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
LABEL_20:
  v27 = v20;
  do
  {
    for ( i = a2 + (v27 << 6); i < a3; i += v19 << 6 )
    {
      v29 = *(_DWORD *)(i + 24);
      if ( v29 > 0 )
      {
        v30 = **(_QWORD **)(i + 16) + *(_QWORD *)i - **(_QWORD **)(i + 8);
        if ( v30 < 0 )
        {
          if ( v29 == 1 )
            goto LABEL_30;
        }
        else if ( v30 && v29 == 2 )
        {
LABEL_30:
          v31 = (unsigned __int64 *)qword_4050B8[v7++];
          qword_407CA8 = v7;
          *v31 = i;
          v31[1] = v30;
          v32 = -v30;
          if ( -v30 < 1 )
            v32 = v30;
          v31[2] = v32;
        }
      }
    }
    if ( ++v27 == v19 )
      v27 = 0LL;
  }
  while ( v7 <= 49 && v27 != v20 );
  qword_407CA0 = v27;
  if ( v7 )
  {
    sub_4029D0(1LL, v7);
    v33 = qword_4050B8[0];
    *a4 = *(_QWORD *)(qword_4050B8[0] + 8);
    return *(_QWORD *)v33;
  }
  else
  {
    LOBYTE(xmmword_405BA8[0]) = 0;
    *a4 = 0LL;
    return 0LL;
  }
}

void __fastcall init(unsigned int a1, __int64 a2, __int64 a3)
{
  signed __int64 v4; // rbp
  __int64 i; // rbx

  v4 = ((char *)&stru_404DF8 - (char *)&off_404DF0) >> 3;
  init_proc();
  if ( v4 )
  {
    for ( i = 0LL; i != v4; ++i )
      ((void (__fastcall *)(_QWORD, __int64, __int64))*(&off_404DF0 + i))(a1, a2, a3);
  }
}

void fini(void)
{
  ;
}
