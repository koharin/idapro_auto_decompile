void __noreturn sub_4180()
{
  __assert_fail("str", "./include/xalloc.h", 0x4Au, "xstrdup");
}

void __fastcall __noreturn sub_41A3(unsigned int a1)
{
  err(1, "%s: %u: cannot allocate memory", "sys-utils/lsipc.c", a1);
}

void __noreturn sub_41C3()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "too many columns specified, the limit is %zu columns", 5);
  errx(1, v0, 67LL);
}

signed __int64 __fastcall main(int a1, char **a2, char **a3)
{
  char **v3; // r13
  int v4; // er12
  _BYTE *v5; // rax
  _BYTE *v6; // r15
  signed __int64 v7; // rcx
  char *v8; // rdi
  unsigned __int64 v9; // rsi
  int v10; // eax
  void **v11; // r8
  char *v12; // rcx
  signed int v13; // edx
  int *v14; // rsi
  int v15; // edx
  char *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // cf
  bool v20; // zf
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  char *v43; // rax
  __int64 v44; // rbx
  char *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  char *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  char *v53; // rdx
  struct option *v54; // rax
  int v55; // edx
  char v56; // al
  char v57; // al
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // r14
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  char **v73; // rax
  __int128 v74; // xmm0
  __int64 v75; // r12
  signed __int64 result; // rax
  __int64 v77; // rdx
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  signed __int64 v81; // rax
  __int64 v82; // rdx
  char *v83; // rax
  int v84; // er12
  int v85; // ebx
  _QWORD *v86; // rax
  __int64 v87; // r12
  __int64 v88; // r14
  __int64 v89; // r13
  _QWORD *j; // rax
  __int64 v91; // r12
  int v92; // ebp
  int v93; // ebx
  _QWORD *v94; // rax
  char *v95; // rax
  __int64 v96; // rbp
  __int64 v97; // r14
  __int64 v98; // r13
  __int64 v99; // ST20_8
  __int64 v100; // r9
  signed __int64 v101; // rcx
  char *v102; // rdi
  __int64 v103; // rbx
  char *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned int *i; // r12
  __int64 v110; // r13
  __uid_t v111; // edi
  __gid_t v112; // edi
  unsigned __int64 v113; // rbx
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdx
  void *v125; // rax
  unsigned int v126; // edi
  _BYTE *v127; // r13
  unsigned int *v128; // r14
  __int64 v129; // r15
  unsigned __int64 v130; // rbx
  __int64 v131; // rdx
  char v132; // di
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rdx
  void *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // rax
  unsigned __int64 v141; // kr08_8
  unsigned __int64 v142; // kr10_8
  unsigned __int64 v143; // kr18_8
  char *v144; // rax
  signed __int64 v145; // rcx
  char *v146; // rdi
  size_t v147; // r12
  void *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rdx
  unsigned int v152; // eax
  signed __int64 v153; // rcx
  signed __int64 v154; // ST48_8
  char *v155; // rax
  void *v156; // rax
  unsigned int v157; // edi
  signed int v158; // er12
  signed __int64 v159; // ST48_8
  char *v160; // rax
  char *v161; // rax
  unsigned int v162; // eax
  char *v163; // rax
  unsigned int v164; // eax
  signed __int64 v165; // r12
  char *v166; // rax
  __int64 v167; // rcx
  FILE *v168; // rbx
  char *v169; // rax
  __int64 v170; // rbp
  char *v171; // rax
  char *v172; // rax
  char *v173; // rax
  char *v174; // rax
  char *v175; // rax
  char *v176; // rax
  char *v177; // rax
  char *v178; // rax
  char *v179; // rax
  char *v180; // rax
  char *v181; // rax
  char *v182; // rax
  char *v183; // rax
  char *v184; // rax
  char *v185; // rax
  char *v186; // rax
  char *v187; // rax
  char *v188; // rax
  char *v189; // rax
  char *v190; // rax
  char *v191; // rax
  char *v192; // rax
  char *v193; // rax
  char *v194; // rbp
  char *v195; // rax
  char *v196; // r9
  __int64 v197; // rbp
  char *v198; // rax
  __int64 v199; // rcx
  char *v200; // rcx
  __int64 v201; // rbp
  char *v202; // rax
  __int64 v203; // rcx
  char *v204; // rcx
  __int64 v205; // rbp
  char *v206; // rax
  __int64 v207; // rcx
  char *v208; // rcx
  __int64 v209; // rbp
  char *v210; // rax
  __int64 v211; // rcx
  char *v212; // rax
  __int64 v213; // rcx
  char *v214; // rcx
  char *v215; // rax
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 v219; // rbx
  char *v220; // rax
  char *v221; // rax
  const char *v222; // rsi
  char *v223; // rax
  __int64 msqid; // [rsp+0h] [rbp-138h]
  void **msqida; // [rsp+0h] [rbp-138h]
  signed int v226; // [rsp+8h] [rbp-130h]
  char *v227; // [rsp+8h] [rbp-130h]
  signed int v228; // [rsp+14h] [rbp-124h]
  signed int v229; // [rsp+18h] [rbp-120h]
  __int64 v230; // [rsp+18h] [rbp-120h]
  signed int v231; // [rsp+20h] [rbp-118h]
  signed int v232; // [rsp+28h] [rbp-110h]
  signed int v233; // [rsp+30h] [rbp-108h]
  char *v234; // [rsp+38h] [rbp-100h]
  char *s2; // [rsp+40h] [rbp-F8h]
  bool s2a; // [rsp+40h] [rbp-F8h]
  struct passwd *v237; // [rsp+58h] [rbp-E0h]
  struct group *v238; // [rsp+60h] [rbp-D8h]
  unsigned int *v239; // [rsp+68h] [rbp-D0h]
  __int64 v240; // [rsp+70h] [rbp-C8h]
  __int64 v241; // [rsp+78h] [rbp-C0h]
  __int64 v242; // [rsp+80h] [rbp-B8h]
  void *v243; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+90h] [rbp-A8h]
  char v245; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v246; // [rsp+F8h] [rbp-40h]

  v3 = a2;
  v4 = a1;
  v246 = __readfsqword(0x28u);
  v5 = calloc(1uLL, 8uLL);
  if ( !v5 )
    err(1, "cannot allocate %zu bytes", 8LL);
  v6 = v5;
  v7 = 5LL;
  v8 = &v245;
  while ( v7 )
  {
    *(_DWORD *)v8 = 0;
    v8 += 4;
    --v7;
  }
  setlocale(6, "");
  bindtextdomain("util-linux", "/usr/share/locale");
  textdomain("util-linux");
  sub_10E60(sub_73E0, "/usr/share/locale");
  v6[4] &= 0x9Fu;
  scols_init_debug(0LL);
  v234 = 0LL;
  v232 = 0;
  v233 = 0;
  v229 = 0;
  LODWORD(msqid) = -1;
  v228 = 0;
  v226 = 0;
  v231 = 0;
  while ( 1 )
  {
    v9 = (unsigned __int64)v3;
    v10 = getopt_long(v4, v3, "bceghi:Jlmno:PqrstVy", &longopts, 0LL);
    if ( v10 == -1 )
      break;
    if ( v10 > 73 )
    {
      v11 = &off_12100;
      v12 = &v245;
      v13 = 74;
      do
      {
        if ( v10 >= v13 )
        {
          if ( v10 == v13 )
          {
LABEL_16:
            if ( *(_DWORD *)v12 )
            {
              if ( v10 != *(_DWORD *)v12 )
              {
                v48 = program_invocation_short_name;
                msqida = v11;
                v49 = dcgettext(0LL, "%s: mutually exclusive arguments:", 5);
                v50 = v48;
                v51 = 0LL;
                __fprintf_chk(stderr, 1LL, v49, v50);
                do
                {
                  v52 = *(unsigned int *)((char *)msqida + v51);
                  if ( !(_DWORD)v52 )
                    break;
                  v53 = "bytes";
                  v54 = &longopts;
                  do
                  {
                    if ( (_DWORD)v52 == v54->val )
                    {
                      __fprintf_chk(stderr, 1LL, " --%s", v53);
                      goto LABEL_76;
                    }
                    ++v54;
                    v53 = (char *)v54->name;
                  }
                  while ( v54->name );
                  if ( (unsigned int)(v52 - 33) <= 0x5D )
                    __fprintf_chk(stderr, 1LL, " -%c", v52);
LABEL_76:
                  v51 += 4LL;
                }
                while ( v51 != 60 );
                fputc(10, stderr);
                exit(1);
              }
            }
            else
            {
              *(_DWORD *)v12 = v10;
            }
          }
          else
          {
            v14 = (int *)v11;
            while ( 1 )
            {
              ++v14;
              v15 = *v14;
              if ( v10 < *v14 || !v15 )
                break;
              if ( v10 == v15 )
                goto LABEL_16;
            }
          }
        }
        v11 += 8;
        v13 = *(_DWORD *)v11;
        v12 += 4;
      }
      while ( v10 >= *(_DWORD *)v11 && v13 );
    }
    switch ( v10 )
    {
      case 74:
        *(_DWORD *)v6 = 4;
        continue;
      case 80:
        v6[4] |= 0x10u;
        continue;
      case 86:
        v44 = program_invocation_short_name;
        v45 = dcgettext(0LL, "%s from %s\n", 5);
        __printf_chk(1LL, v45, v44, "util-linux 2.38.84-ef7d", v46, v47);
        exit(0);
        return result;
      case 98:
        v6[4] |= 8u;
        continue;
      case 99:
        v233 = 1;
        continue;
      case 101:
        *(_DWORD *)v6 = 1;
        continue;
      case 103:
        v232 = 1;
        continue;
      case 104:
        v168 = stdout;
        v169 = dcgettext(0LL, "\nUsage:\n", 5);
        fputs(v169, v168);
        v170 = program_invocation_short_name;
        v171 = dcgettext(0LL, " %s [options]\n", 5);
        __fprintf_chk(v168, 1LL, v171, v170);
        fputc(10, v168);
        v172 = dcgettext(0LL, "Show information on IPC facilities.\n", 5);
        fputs(v172, v168);
        fputc(10, v168);
        v173 = dcgettext(0LL, "Resource options:\n", 5);
        fputs(v173, v168);
        v174 = dcgettext(0LL, " -m, --shmems      shared memory segments\n", 5);
        fputs(v174, v168);
        v175 = dcgettext(0LL, " -q, --queues      message queues\n", 5);
        fputs(v175, v168);
        v176 = dcgettext(0LL, " -s, --semaphores  semaphores\n", 5);
        fputs(v176, v168);
        v177 = dcgettext(0LL, " -g, --global      info about system-wide usage (may be used with -m, -q and -s)\n", 5);
        fputs(v177, v168);
        v178 = dcgettext(0LL, " -i, --id <id>     print details on resource identified by <id>\n", 5);
        fputs(v178, v168);
        v179 = dcgettext(0LL, "\nOptions:\n", 5);
        fputs(v179, v168);
        v180 = dcgettext(0LL, "     --noheadings         don't print headings\n", 5);
        fputs(v180, v168);
        v181 = dcgettext(0LL, "     --notruncate         don't truncate output\n", 5);
        fputs(v181, v168);
        v182 = dcgettext(0LL, "     --time-format=<type> display dates in short, full or iso format\n", 5);
        fputs(v182, v168);
        v183 = dcgettext(0LL, " -b, --bytes              print SIZE in bytes rather than in human readable format\n", 5);
        fputs(v183, v168);
        v184 = dcgettext(0LL, " -c, --creator            show creator and owner\n", 5);
        fputs(v184, v168);
        v185 = dcgettext(0LL, " -e, --export             display in an export-able output format\n", 5);
        fputs(v185, v168);
        v186 = dcgettext(0LL, " -J, --json               use the JSON output format\n", 5);
        fputs(v186, v168);
        v187 = dcgettext(0LL, " -n, --newline            display each piece of information on a new line\n", 5);
        fputs(v187, v168);
        v188 = dcgettext(0LL, " -l, --list               force list output format (for example with --id)\n", 5);
        fputs(v188, v168);
        v189 = dcgettext(0LL, " -o, --output[=<list>]    define the columns to output\n", 5);
        fputs(v189, v168);
        v190 = dcgettext(0LL, " -P, --numeric-perms      print numeric permissions (PERMS column)\n", 5);
        fputs(v190, v168);
        v191 = dcgettext(0LL, " -r, --raw                display in raw mode\n", 5);
        fputs(v191, v168);
        v192 = dcgettext(0LL, " -t, --time               show attach, detach and change times\n", 5);
        fputs(v192, v168);
        v193 = dcgettext(
                 0LL,
                 " -y, --shell              use column names to be usable as shell variable identifiers\n",
                 5);
        fputs(v193, v168);
        fputc(10, v168);
        v194 = dcgettext(0LL, "display version", 5);
        v195 = dcgettext(0LL, "display this help", 5);
        v196 = v194;
        v197 = 0LL;
        __printf_chk(1LL, "%-26s%s\n%-26s%s\n", " -h, --help", v195, " -V, --version", v196);
        v198 = dcgettext(0LL, "\nGeneric columns:\n", 5);
        __fprintf_chk(v168, 1LL, v198, v199);
        do
        {
          dcgettext(0LL, off_216148[v197], 5);
          v200 = off_216148[v197 - 1];
          v197 += 5LL;
          __fprintf_chk(v168, 1LL, " %14s  %s\n", v200);
        }
        while ( v197 != 65 );
        v201 = 0LL;
        v202 = dcgettext(0LL, "\nShared-memory columns (--shmems):\n", 5);
        __fprintf_chk(v168, 1LL, v202, v203);
        do
        {
          dcgettext(0LL, off_216440[v201], 5);
          v204 = off_216440[v201 - 1];
          v201 += 5LL;
          __fprintf_chk(v168, 1LL, " %14s  %s\n", v204);
        }
        while ( v201 != 40 );
        v205 = 0LL;
        v206 = dcgettext(0LL, "\nMessage-queue columns (--queues):\n", 5);
        __fprintf_chk(v168, 1LL, v206, v207);
        do
        {
          dcgettext(0LL, off_216350[v205], 5);
          v208 = off_216350[v205 - 1];
          v205 += 5LL;
          __fprintf_chk(v168, 1LL, " %14s  %s\n", v208);
        }
        while ( v205 != 30 );
        v209 = 0LL;
        v210 = dcgettext(0LL, "\nSemaphore columns (--semaphores):\n", 5);
        __fprintf_chk(v168, 1LL, v210, v211);
        dcgettext(0LL, aNumberOf, 5);
        __fprintf_chk(v168, 1LL, " %14s  %s\n", "NSEMS");
        dcgettext(0LL, "Time of the last operation", 5);
        __fprintf_chk(v168, 1LL, " %14s  %s\n", "OTIME");
        v212 = dcgettext(0LL, "\nSummary columns (--global):\n", 5);
        __fprintf_chk(v168, 1LL, v212, v213);
        do
        {
          dcgettext(0LL, off_2165D0[v209], 5);
          v214 = off_2165D0[v209 - 1];
          v209 += 5LL;
          __fprintf_chk(v168, 1LL, " %14s  %s\n", v214);
        }
        while ( v209 != 25 );
        v215 = dcgettext(0LL, "\nFor more details see %s.\n", 5);
        __printf_chk(1LL, v215, "lsipc(1)", v216, v217, v218);
        exit(0);
        return result;
      case 105:
        v43 = dcgettext(0LL, "failed to parse IPC identifier", 5);
        LODWORD(msqid) = sub_9230(optarg, 10LL, v43, -2147483648LL, 0x7FFFFFFFLL);
        continue;
      case 108:
        *(_DWORD *)v6 = 6;
        continue;
      case 109:
        v32 = qword_217080;
        v33 = qword_217080 + 1;
        v19 = (unsigned __int64)qword_217080 < 0x43;
        v20 = qword_217080++ == 67;
        if ( !v19 && !v20 )
          goto LABEL_338;
        v34 = v32 + 2;
        dword_2170A0[v32] = 0;
        qword_217080 = v32 + 2;
        if ( v33 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v33] = 1;
        v35 = v32 + 3;
        qword_217080 = v32 + 3;
        if ( v34 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v34] = 3;
        v36 = v32 + 4;
        qword_217080 = v32 + 4;
        if ( v35 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v35] = 2;
        v37 = v32 + 5;
        qword_217080 = v32 + 5;
        if ( v36 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v36] = 19;
        v38 = v32 + 6;
        qword_217080 = v32 + 6;
        if ( v37 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v37] = 20;
        v39 = v32 + 7;
        qword_217080 = v32 + 7;
        if ( v38 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v38] = 21;
        v40 = v32 + 8;
        qword_217080 = v32 + 8;
        if ( v39 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v39] = 12;
        v41 = v32 + 9;
        qword_217080 = v32 + 9;
        if ( v40 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v40] = 25;
        v42 = v32 + 10;
        qword_217080 = v32 + 10;
        if ( v41 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v41] = 26;
        qword_217080 = v32 + 11;
        if ( v42 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v42] = 24;
        qword_2171B8 = 19LL;
        qword_2171B0 = 26LL;
        v228 = 1;
        continue;
      case 110:
        *(_DWORD *)v6 = 2;
        continue;
      case 111:
        v234 = optarg;
        continue;
      case 113:
        v24 = qword_217080;
        v25 = qword_217080 + 1;
        v19 = (unsigned __int64)qword_217080 < 0x43;
        v20 = qword_217080++ == 67;
        if ( !v19 && !v20 )
          goto LABEL_338;
        v26 = v24 + 2;
        dword_2170A0[v24] = 0;
        qword_217080 = v24 + 2;
        if ( v25 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v25] = 1;
        v27 = v24 + 3;
        qword_217080 = v24 + 3;
        if ( v26 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v26] = 3;
        v28 = v24 + 4;
        qword_217080 = v24 + 4;
        if ( v27 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v27] = 2;
        v29 = v24 + 5;
        qword_217080 = v24 + 5;
        if ( v28 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v28] = 13;
        v30 = v24 + 6;
        qword_217080 = v24 + 6;
        if ( v29 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v29] = 14;
        v31 = v24 + 7;
        qword_217080 = v24 + 7;
        if ( v30 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v30] = 17;
        qword_217080 = v24 + 8;
        if ( v31 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v31] = 18;
        qword_2171B8 = 13LL;
        qword_2171B0 = 18LL;
        v231 = 1;
        continue;
      case 114:
        *(_DWORD *)v6 = 3;
        continue;
      case 115:
        v17 = qword_217080;
        v18 = qword_217080 + 1;
        v19 = (unsigned __int64)qword_217080 < 0x43;
        v20 = qword_217080++ == 67;
        if ( !v19 && !v20 )
          goto LABEL_338;
        v21 = v17 + 2;
        dword_2170A0[v17] = 0;
        qword_217080 = v17 + 2;
        if ( v18 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v18] = 1;
        v22 = v17 + 3;
        qword_217080 = v17 + 3;
        if ( v21 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v21] = 3;
        v23 = v17 + 4;
        qword_217080 = v17 + 4;
        if ( v22 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v22] = 2;
        qword_217080 = v17 + 5;
        if ( v23 > 0x43 )
          goto LABEL_338;
        dword_2170A0[v23] = 27;
        qword_2171B8 = 27LL;
        qword_2171B0 = 28LL;
        v226 = 1;
        break;
      case 116:
        v229 = 1;
        break;
      case 121:
        v6[4] |= 4u;
        break;
      case 128:
        v6[4] |= 2u;
        break;
      case 129:
        v6[4] |= 1u;
        break;
      case 130:
        s2 = optarg;
        if ( !strcmp("iso", optarg) )
        {
          v81 = 0LL;
        }
        else if ( !strcmp("full", s2) )
        {
          v81 = 1LL;
        }
        else
        {
          if ( strcmp("short", s2) )
          {
            v16 = dcgettext(0LL, "unknown time format: %s", 5);
            errx(1, v16, s2, msqid);
          }
          v81 = 2LL;
        }
        v6[4] = 32 * (off_215E40[16 * v81 + 8] & 3) | v6[4] & 0x9F;
        break;
      default:
        v219 = program_invocation_short_name;
        v220 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
        __fprintf_chk(stderr, 1LL, v220, v219);
        exit(1);
        return result;
    }
  }
  if ( v226 + v228 + v231 )
  {
    if ( !v232 )
      goto LABEL_81;
  }
  else
  {
    if ( (unsigned __int8)v233 | (unsigned __int8)v229 || (_DWORD)msqid != -1 )
    {
      v221 = dcgettext(0LL, "--global is mutually exclusive with --creator, --id and --time", 5);
      errx(1, v221, msqid);
    }
    v228 = 1;
    v226 = 1;
    v231 = 1;
  }
  v77 = qword_217080;
  v78 = qword_217080 + 1;
  v19 = (unsigned __int64)qword_217080 < 0x43;
  v20 = qword_217080++ == 67;
  if ( !v19 && !v20 )
    goto LABEL_338;
  v79 = v77 + 2;
  dword_2170A0[v77] = 29;
  qword_217080 = v77 + 2;
  if ( v78 > 0x43 )
    goto LABEL_338;
  dword_2170A0[v78] = 30;
  v9 = v77 + 3;
  qword_217080 = v77 + 3;
  if ( v79 > 0x43 )
    goto LABEL_338;
  dword_2170A0[v79] = 31;
  v80 = v77 + 4;
  qword_217080 = v77 + 4;
  if ( v9 > 0x43 )
    goto LABEL_338;
  dword_2170A0[v9] = 32;
  qword_217080 = v77 + 5;
  if ( v80 > 0x43 )
    goto LABEL_338;
  dword_2170A0[v80] = 33;
  qword_2171B8 = 29LL;
  qword_2171B0 = 33LL;
  v232 = 1;
LABEL_81:
  v55 = *(_DWORD *)v6;
  v56 = v6[4] & 0x60;
  if ( (_DWORD)msqid == -1 || v55 )
  {
    if ( v56 )
    {
LABEL_86:
      if ( *(_DWORD *)v6 != 5 )
        goto LABEL_87;
      goto LABEL_143;
    }
    if ( v55 != 5 )
    {
      v57 = 1;
      goto LABEL_85;
    }
LABEL_84:
    v57 = 2;
LABEL_85:
    v6[4] = 32 * v57 | v6[4] & 0x9F;
    goto LABEL_86;
  }
  *(_DWORD *)v6 = 5;
  if ( !v56 )
    goto LABEL_84;
LABEL_143:
  if ( !optarg && !(v233 | v229) )
  {
    v82 = 0LL;
    do
    {
      dword_2170A0[v82] = v82;
      ++v82;
    }
    while ( v82 != 34 );
    qword_217080 = 34LL;
    goto LABEL_108;
  }
LABEL_87:
  if ( v233 )
  {
    v58 = qword_217080;
    v59 = qword_217080 + 1;
    v19 = (unsigned __int64)qword_217080 < 0x43;
    v20 = qword_217080++ == 67;
    if ( !v19 && !v20 )
      goto LABEL_338;
    v9 = v58 + 2;
    dword_2170A0[v58] = 4;
    qword_217080 = v58 + 2;
    if ( v59 > 0x43 )
      goto LABEL_338;
    dword_2170A0[v59] = 6;
    v60 = v58 + 3;
    qword_217080 = v58 + 3;
    if ( v9 > 0x43 )
      goto LABEL_338;
    dword_2170A0[v9] = 8;
    qword_217080 = v58 + 4;
    if ( v60 > 0x43 )
      goto LABEL_338;
    dword_2170A0[v60] = 10;
  }
  if ( v231 & v229 )
  {
    v61 = qword_217080;
    v9 = qword_217080 + 1;
    v19 = (unsigned __int64)qword_217080 < 0x43;
    v20 = qword_217080++ == 67;
    if ( !v19 && !v20 )
      goto LABEL_338;
    v62 = v61 + 2;
    dword_2170A0[v61] = 15;
    qword_217080 = v61 + 2;
    if ( v9 > 0x43 )
      goto LABEL_338;
    dword_2170A0[v9] = 16;
    qword_217080 = v61 + 3;
    if ( v62 > 0x43 )
      goto LABEL_338;
    dword_2170A0[v62] = 12;
  }
  if ( v228 & v229 )
  {
    v63 = qword_217080;
    v9 = dword_2170A0[qword_217080 - 1];
    if ( (_DWORD)v9 == 24 )
      v63 = qword_217080 - 1;
    v64 = v63 + 1;
    qword_217080 = v63 + 1;
    if ( v63 > 0x43 )
      goto LABEL_338;
    v65 = v63 + 2;
    dword_2170A0[v63] = 22;
    qword_217080 = v63 + 2;
    if ( v64 > 0x43 )
      goto LABEL_338;
    dword_2170A0[v64] = 23;
    if ( (_DWORD)v9 == 24 )
    {
      qword_217080 = v63 + 3;
      if ( v65 > 0x43 )
        goto LABEL_338;
      dword_2170A0[v65] = 24;
    }
  }
  if ( v226 & v229 )
  {
    v66 = qword_217080;
    v67 = qword_217080 + 1;
    v19 = (unsigned __int64)qword_217080 < 0x43;
    v20 = qword_217080++ == 67;
    if ( v19 || v20 )
    {
      dword_2170A0[v66] = 28;
      qword_217080 = v66 + 2;
      if ( v67 <= 0x43 )
      {
        dword_2170A0[v67] = 12;
        goto LABEL_108;
      }
    }
LABEL_338:
    sub_41C3();
  }
LABEL_108:
  if ( v234 )
  {
    v9 = (unsigned __int64)dword_2170A0;
    if ( (signed int)sub_9DB0(v234, dword_2170A0, 68LL, &qword_217080, sub_66D0) < 0 )
    {
LABEL_142:
      result = 1LL;
      goto LABEL_125;
    }
  }
  v68 = 0LL;
  v70 = sub_6520(v6, v9);
  while ( v68 < qword_217080 )
  {
    v71 = (signed int)sub_6780((unsigned int)v68);
    v72 = (unsigned int)off_216140[5 * (signed int)v71 + 4];
    if ( v6[4] & 2 )
      v72 = (unsigned __int64)off_216140[5 * (signed int)v71 + 4] & 0xFFFFFFFE;
    v73 = &off_216140[5 * v71];
    v9 = (unsigned __int64)*v73;
    v74 = (unsigned __int64)v73[3];
    if ( !scols_table_new_column(v70, *v73, v72) )
    {
      scols_unref_table(v70);
      qword_217060 = 0LL;
      goto LABEL_142;
    }
    ++v68;
  }
  qword_217060 = v70;
  if ( !v70 )
    goto LABEL_142;
  if ( !v232 )
  {
    if ( v231 )
    {
      v9 = (unsigned __int64)&v239;
      v237 = 0LL;
      v238 = 0LL;
      v240 = 0LL;
      if ( (signed int)sub_8000(msqid) > 0 )
      {
        v9 = (unsigned __int64)"messages";
        scols_table_set_name(v70, "messages");
        for ( i = v239; *((_QWORD *)i + 11) || (signed int)msqid >= 0; i = (unsigned int *)*((_QWORD *)i + 11) )
        {
          v9 = 0LL;
          v110 = scols_table_new_line(v70, 0LL);
          if ( !v110 )
          {
LABEL_337:
            v222 = "failed to allocate output line";
LABEL_336:
            v223 = dcgettext(0LL, v222, 5);
            err(1, v223, msqid);
          }
          v111 = i[2];
          if ( !v237 || v237->pw_uid != v111 )
            v237 = getpwuid(v111);
          v112 = i[3];
          if ( !v238 || v238->gr_gid != v112 )
            v238 = getgrgid(v112);
          if ( qword_217080 )
          {
            v113 = 0LL;
            while ( 1 )
            {
              switch ( (unsigned int)sub_6780((unsigned int)v113) )
              {
                case 0u:
                  v121 = i[1];
                  goto LABEL_207;
                case 1u:
                  v120 = *i;
                  goto LABEL_207;
                case 2u:
                  v240 = sub_6C30(&v237, i[2]);
                  if ( !v240 )
                  {
                    v119 = i[2];
                    sub_6600((unsigned __int64)&v240);
                  }
                  goto LABEL_208;
                case 3u:
                  if ( v6[4] & 0x10 )
                  {
                    v9 = (unsigned __int64)"%#o";
                    v20 = (i[6] & 0x1FF) == 0;
                    sub_6600((unsigned __int64)&v240);
                  }
                  else
                  {
                    v125 = malloc(0xBuLL);
                    if ( !v125 )
                      goto LABEL_334;
                    v126 = i[6];
                    v240 = (__int64)v125;
                    sub_96A0(v126 & 0x1FF, v125);
                    v9 = v113;
                    v115 = scols_line_refer_data(v110, v113, v240);
LABEL_209:
                    if ( v115 )
                    {
LABEL_335:
                      v222 = "failed to set data";
                      goto LABEL_336;
                    }
                  }
LABEL_210:
                  ++v113;
                  v240 = 0LL;
                  if ( v113 >= qword_217080 )
                    goto LABEL_211;
                  break;
                case 4u:
                case 6u:
                  v114 = i[4];
                  goto LABEL_207;
                case 5u:
                  v9 = i[4];
                  goto LABEL_215;
                case 7u:
                  v9 = i[5];
                  goto LABEL_234;
                case 8u:
                  v124 = i[2];
                  goto LABEL_207;
                case 9u:
                  v9 = i[2];
LABEL_215:
                  v117 = sub_6C30(&v237, v9);
                  v240 = v117;
                  if ( v117 )
                    goto LABEL_216;
                  goto LABEL_210;
                case 0xAu:
                  v123 = i[3];
                  goto LABEL_207;
                case 0xBu:
                  v9 = i[3];
LABEL_234:
                  v117 = sub_6C90(&v238, v9);
                  v240 = v117;
                  if ( !v117 )
                    goto LABEL_210;
                  goto LABEL_216;
                case 0xCu:
                  v9 = *((_QWORD *)i + 6);
                  if ( v9 )
                    goto LABEL_225;
                  goto LABEL_210;
                case 0xDu:
                  if ( v6[4] & 8 )
                    sub_6600((unsigned __int64)&v240);
                  else
                    v240 = sub_98D0(0LL, *((_QWORD *)i + 7));
                  goto LABEL_208;
                case 0xEu:
                  v122 = *((_QWORD *)i + 8);
                  sub_6600((unsigned __int64)&v240);
                  v9 = v113;
                  v115 = scols_line_refer_data(v110, v113, v240);
                  goto LABEL_209;
                case 0xFu:
                  v9 = *((_QWORD *)i + 4);
                  if ( v9 )
                    goto LABEL_225;
                  goto LABEL_210;
                case 0x10u:
                  v9 = *((_QWORD *)i + 5);
                  if ( !v9 )
                    goto LABEL_210;
LABEL_225:
                  v117 = sub_6AB0((v6[4] >> 5) & 3);
LABEL_216:
                  v9 = v113;
                  v115 = scols_line_refer_data(v110, v113, v117);
                  goto LABEL_209;
                case 0x11u:
                  v116 = i[20];
                  goto LABEL_207;
                case 0x12u:
                  v118 = i[21];
LABEL_207:
                  sub_6600((unsigned __int64)&v240);
LABEL_208:
                  v9 = v113;
                  v115 = scols_line_refer_data(v110, v113, v240);
                  goto LABEL_209;
                default:
                  goto LABEL_210;
              }
            }
          }
LABEL_211:
          if ( (signed int)msqid >= 0 )
            break;
        }
        sub_8320(v239, v9);
      }
      else if ( (signed int)msqid >= 0 )
      {
        v83 = dcgettext(0LL, "id %d not found", 5);
        v9 = (unsigned int)msqid;
        warnx(v83, (unsigned int)msqid, msqid);
      }
    }
    if ( v228 )
    {
      v9 = (unsigned __int64)&v243;
      v241 = 0LL;
      v242 = 0LL;
      ptr = 0LL;
      v230 = qword_217060;
      if ( (signed int)sub_79B0((unsigned int)msqid, &v243) > 0 )
      {
        v9 = (unsigned __int64)"sharedmemory";
        v127 = v6;
        scols_table_set_name(v230, "sharedmemory");
        v128 = (unsigned int *)v243;
        s2a = (signed int)msqid >= 0;
        while ( *((_QWORD *)v128 + 12) || s2a )
        {
          v9 = 0LL;
          v129 = scols_table_new_line(v230, 0LL);
          if ( !v129 )
            goto LABEL_337;
          v130 = 0LL;
          while ( v130 < qword_217080 )
          {
            switch ( (unsigned int)sub_6780((unsigned int)v130) )
            {
              case 0u:
                v135 = v128[1];
                goto LABEL_253;
              case 1u:
                v134 = *v128;
                goto LABEL_253;
              case 2u:
                ptr = (void *)sub_6C30(&v241, v128[2]);
                if ( ptr )
                  goto LABEL_255;
                v138 = v128[2];
                v132 = (unsigned __int64)&ptr;
                goto LABEL_254;
              case 3u:
                if ( v127[4] & 0x10 )
                {
                  v20 = (v128[6] & 0x1FF) == 0;
                  sub_6600((unsigned __int64)&ptr);
                }
                else
                {
                  v156 = malloc(0xBuLL);
                  if ( !v156 )
                    goto LABEL_334;
                  v157 = v128[6];
                  ptr = v156;
                  sub_96A0(v157 & 0x1FF, v156);
                }
                goto LABEL_255;
              case 4u:
              case 6u:
                v131 = v128[4];
                goto LABEL_253;
              case 5u:
                v9 = v128[4];
                goto LABEL_261;
              case 7u:
                v9 = v128[5];
                goto LABEL_285;
              case 8u:
                v151 = v128[2];
                goto LABEL_253;
              case 9u:
                v9 = v128[2];
LABEL_261:
                v136 = (void *)sub_6C30(&v241, v9);
                ptr = v136;
                if ( v136 )
                  goto LABEL_262;
                goto LABEL_257;
              case 0xAu:
                v150 = v128[3];
                goto LABEL_253;
              case 0xBu:
                v9 = v128[3];
LABEL_285:
                v136 = (void *)sub_6C90(&v242, v9);
                ptr = v136;
                if ( !v136 )
                  goto LABEL_257;
                goto LABEL_262;
              case 0xCu:
                v9 = *((_QWORD *)v128 + 8);
                if ( v9 )
                  goto LABEL_271;
                goto LABEL_257;
              case 0x13u:
                if ( v127[4] & 8 )
                  sub_6600((unsigned __int64)&ptr);
                else
                  ptr = (void *)sub_98D0(0LL, *((_QWORD *)v128 + 5));
                goto LABEL_255;
              case 0x14u:
                v149 = *((_QWORD *)v128 + 4);
                sub_6600((unsigned __int64)&ptr);
                v9 = v130;
                v133 = scols_line_refer_data(v129, v130, ptr);
                goto LABEL_256;
              case 0x15u:
                free(ptr);
                v141 = strlen(dcgettext(0LL, "dest", 5)) + 1;
                v142 = strlen(dcgettext(0LL, "locked", 5)) + 1;
                v143 = strlen(dcgettext(0LL, "hugetlb", 5)) + 1;
                v144 = dcgettext(0LL, "noreserve", 5);
                v145 = -1LL;
                v146 = v144;
                do
                {
                  if ( !v145 )
                    break;
                  v20 = *v146++ == 0;
                  --v145;
                }
                while ( !v20 );
                v147 = v143 - 1 - v145 + v141 - 1 + v142 - 1 + 4 - 2;
                v148 = calloc(1uLL, v147);
                if ( !v148 && v147 )
                  err(1, "cannot allocate %zu bytes", v147, msqid);
                ptr = v148;
                v152 = v128[6];
                if ( v152 & 0x200 )
                {
                  v163 = dcgettext(0LL, "dest", 5);
                  v153 = sprintf((char *)ptr, "%s", v163, msqid);
                  v164 = v128[6];
                  if ( v164 & 0x400 )
                  {
                    v165 = v153 + 1;
                    *((_BYTE *)ptr + v153) = 44;
                    v166 = dcgettext(0LL, "locked", 5);
                    v167 = sprintf((char *)ptr + v165, "%s", v166);
                    v164 = v128[6];
                    v153 = v165 + v167;
                  }
                  if ( !(v164 & 0x800) )
                  {
                    if ( v164 & 0x1000 )
                      goto LABEL_310;
                    goto LABEL_255;
                  }
                  v158 = v228;
                  *((_BYTE *)ptr + v153++) = 44;
                }
                else if ( v152 & 0x400 )
                {
                  v161 = dcgettext(0LL, "locked", 5);
                  v153 = sprintf((char *)ptr, "%s", v161, msqid);
                  v162 = v128[6];
                  if ( !(v162 & 0x800) )
                  {
                    if ( v162 & 0x1000 )
                      goto LABEL_299;
                    goto LABEL_255;
                  }
                  v158 = 0;
                }
                else
                {
                  if ( !(v152 & 0x800) )
                  {
                    if ( !(v152 & 0x1000) )
                      goto LABEL_255;
                    v153 = 0LL;
                    goto LABEL_299;
                  }
                  v158 = 0;
                  v153 = 0LL;
                }
                v159 = v153;
                v160 = dcgettext(0LL, "hugetlb", 5);
                v153 = sprintf((char *)ptr + v159, "%s", v160, msqid) + v159;
                if ( *((_BYTE *)v128 + 25) & 0x10 )
                {
                  if ( v158 )
LABEL_310:
                    *((_BYTE *)ptr + v153++) = 44;
LABEL_299:
                  v154 = v153;
                  v155 = dcgettext(0LL, "noreserve", 5);
                  strcpy((char *)ptr + v154, v155);
                }
LABEL_255:
                v9 = v130;
                v133 = scols_line_refer_data(v129, v130, ptr);
LABEL_256:
                if ( v133 )
                  goto LABEL_335;
LABEL_257:
                ptr = 0LL;
                ++v130;
                break;
              case 0x16u:
                v9 = *((_QWORD *)v128 + 6);
                if ( v9 )
                  goto LABEL_271;
                goto LABEL_257;
              case 0x17u:
                v9 = *((_QWORD *)v128 + 7);
                if ( !v9 )
                  goto LABEL_257;
LABEL_271:
                v140 = sub_6AB0((v127[4] >> 5) & 3);
                v9 = v130;
                v133 = scols_line_refer_data(v129, v130, v140);
                goto LABEL_256;
              case 0x18u:
                v136 = (void *)sub_FB90(v128[18]);
                ptr = v136;
LABEL_262:
                v9 = v130;
                v133 = scols_line_refer_data(v129, v130, v136);
                goto LABEL_256;
              case 0x19u:
                v139 = v128[18];
                goto LABEL_253;
              case 0x1Au:
                v137 = v128[19];
LABEL_253:
                v132 = (unsigned __int64)&ptr;
LABEL_254:
                sub_6600(v132);
                goto LABEL_255;
              default:
                goto LABEL_257;
            }
          }
          if ( (signed int)msqid >= 0 )
            break;
          v128 = (unsigned int *)*((_QWORD *)v128 + 12);
        }
        v6 = v127;
        sub_7CE0(v243);
      }
      else if ( (signed int)msqid >= 0 )
      {
        v95 = dcgettext(0LL, "id %d not found", 5);
        v9 = (unsigned int)msqid;
        warnx(v95, (unsigned int)msqid, msqid);
      }
    }
    if ( v226 )
    {
      v9 = (unsigned __int64)v6;
      sub_6CF0((unsigned int)msqid, v6, qword_217060);
    }
    goto LABEL_122;
  }
  v9 = (unsigned __int64)"ipclimits";
  scols_table_set_name(v70, "ipclimits");
  if ( v231 )
  {
    v84 = qword_217060;
    sub_76E0(&ptr);
    if ( (signed int)sub_8000(-1) > 0 )
    {
      v85 = 0;
      v86 = v243;
      while ( 1 )
      {
        v86 = (_QWORD *)v86[11];
        if ( !v86 )
          break;
        ++v85;
      }
      sub_8320(v243, &v243);
    }
    dcgettext(0LL, "Number of message queues", 5);
    sub_6810((_DWORD)v6, v84, (unsigned __int64)"MSGMNI");
    dcgettext(0LL, "Max size of message (bytes)", 5);
    sub_6810((_DWORD)v6, v84, (unsigned __int64)"MSGMAX");
    dcgettext(0LL, "Default max size of queue (bytes)", 5);
    sub_6810((_DWORD)v6, v84, (unsigned __int64)"MSGMNB");
    v9 = 1LL;
  }
  if ( v228 )
  {
    v87 = qword_217060;
    sub_78C0(&ptr, v9);
    if ( (signed int)sub_79B0(0xFFFFFFFFLL, &v243) > 0 )
    {
      v88 = 0LL;
      v89 = 0LL;
      for ( j = v243; j[12]; j = (_QWORD *)j[12] )
      {
        v88 += j[5];
        ++v89;
      }
      ((void (*)(void))sub_7CE0)();
    }
    dcgettext(0LL, "Shared memory segments", 5);
    sub_6810((_DWORD)v6, v87, (unsigned __int64)"SHMMNI");
    getpagesize();
    dcgettext(0LL, "Shared memory pages", 5);
    sub_6810((_DWORD)v6, v87, (unsigned __int64)"SHMALL");
    dcgettext(0LL, "Max size of shared memory segment (bytes)", 5);
    sub_6810((_DWORD)v6, v87, (unsigned __int64)"SHMMAX");
    dcgettext(0LL, "Min size of shared memory segment (bytes)", 5);
    v9 = v87;
    sub_6810((_DWORD)v6, v87, (unsigned __int64)"SHMMIN");
    if ( !v226 )
      goto LABEL_122;
    goto LABEL_167;
  }
  if ( v226 )
  {
LABEL_167:
    v91 = qword_217060;
    sub_77E0(&ptr, v9);
    if ( (signed int)sub_7D10(0xFFFFFFFFLL, &v243) > 0 )
    {
      v92 = 0;
      v93 = 0;
      v94 = v243;
      while ( 1 )
      {
        v94 = (_QWORD *)v94[8];
        if ( !v94 )
          break;
        v93 += *((_DWORD *)v243 + 12);
        ++v92;
      }
      sub_7FC0(v243);
    }
    dcgettext(0LL, "Number of semaphore identifiers", 5);
    sub_6810((_DWORD)v6, v91, (unsigned __int64)"SEMMNI");
    dcgettext(0LL, "Total number of semaphores", 5);
    sub_6810((_DWORD)v6, v91, (unsigned __int64)"SEMMNS");
    dcgettext(0LL, "Max semaphores per semaphore set.", 5);
    sub_6810((_DWORD)v6, v91, (unsigned __int64)"SEMMSL");
    dcgettext(0LL, "Max number of operations per semop(2)", 5);
    sub_6810((_DWORD)v6, v91, (unsigned __int64)"SEMOPM");
    dcgettext(0LL, "Semaphore max value", 5);
    v9 = v91;
    sub_6810((_DWORD)v6, v91, (unsigned __int64)"SEMVMX");
    v69 = 0LL;
  }
LABEL_122:
  v75 = qword_217060;
  if ( *(_DWORD *)v6 == 5 )
  {
    v96 = 0LL;
    v97 = scols_new_iter(0LL, v9, v69);
    v98 = scols_table_get_line(v75, 0LL);
    while ( !(unsigned int)scols_table_next_column(v75, v97, &ptr) )
    {
      v99 = scols_line_get_cell(v98, v96);
      v227 = off_216140[5 * (signed int)sub_6780((unsigned int)v96) + 2];
      v100 = scols_cell_get_data(v99);
      if ( v100 )
      {
        v101 = -1LL;
        v102 = v227;
        do
        {
          if ( !v101 )
            break;
          v20 = *v102++ == 0;
          --v101;
        }
        while ( !v20 );
        __printf_chk(1LL, "%s:%*c%-36s\n", v227, (unsigned int)(v101 + 37), 32LL, v100);
      }
      ++v96;
    }
    if ( v98 )
    {
      v103 = scols_line_get_userdata(v98);
      if ( v103 )
      {
        v104 = dcgettext(0LL, "Elements:\n\n", 5);
        __printf_chk(1LL, v104, v105, v106, v107, v108);
        scols_print_table(v103);
      }
    }
    scols_free_iter(v97);
  }
  else
  {
    scols_print_table(qword_217060);
  }
  scols_unref_table(qword_217060);
  free(v6);
  result = 0LL;
LABEL_125:
  if ( __readfsqword(0x28u) != v246 )
LABEL_334:
    err(1, "cannot allocate %zu bytes", 11LL);
  return result;
}

__int64 (**sub_6440())(void)
{
  __int64 (**result)(void); // rax

  result = (__int64 (**)(void))&unk_217018;
  if ( &unk_217018 != &unk_217018 )
  {
    result = &ITM_deregisterTMCloneTable;
    if ( &ITM_deregisterTMCloneTable )
      result = (__int64 (**)(void))ITM_deregisterTMCloneTable();
  }
  return result;
}

__int64 sub_6480()
{
  return 0LL;
}

__int64 (**sub_64D0())(void)
{
  __int64 (**result)(void); // rax

  if ( !byte_217048 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_217008);
    result = sub_6440();
    byte_217048 = 1;
  }
  return result;
}

__int64 sub_6510()
{
  return sub_6480();
}

__int64 __fastcall sub_6520(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // al
  char *v5; // rax

  v1 = scols_new_table();
  if ( !v1 )
  {
    v5 = dcgettext(0LL, "failed to allocate output table", 5);
    err(1, v5);
  }
  v2 = v1;
  v3 = *(_BYTE *)(a1 + 4);
  if ( v3 & 1 )
  {
    scols_table_enable_noheadings(v2, 1LL);
    v3 = *(_BYTE *)(a1 + 4);
  }
  if ( v3 & 4 )
    scols_table_enable_shellvar(v2, 1LL);
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      goto LABEL_10;
    case 2:
      scols_table_set_column_separator(v2, "\n");
LABEL_10:
      scols_table_enable_export(v2, 1LL);
      break;
    case 3:
      scols_table_enable_raw(v2, 1LL);
      break;
    case 4:
      scols_table_enable_json(v2, 1LL);
      break;
    case 5:
      scols_table_enable_noheadings(v2, 1LL);
      break;
    default:
      return v2;
  }
  return v2;
}

__int64 sub_6600(__int64 a1, __int64 a2, ...)
{
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  result = __vasprintf_chk(a1, 1LL, a2, va);
  if ( (signed int)result < 0 )
    err(1, "cannot allocate string");
  return result;
}

__int64 __fastcall sub_66D0(char *s1, size_t n)
{
  const char *v2; // r12
  const char **v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  const char *v6; // rsi
  char *v7; // rax

  v2 = "KEY";
  v3 = (const char **)&off_216168;
  v4 = 0LL;
  while ( strncasecmp(s1, v2, n) || v2[n] )
  {
    if ( ++v4 == 34 )
    {
      v6 = "unknown column: %s";
LABEL_11:
      v7 = dcgettext(0LL, v6, 5);
      warnx(v7, s1);
      return 0xFFFFFFFFLL;
    }
    v2 = *v3;
    v3 += 5;
  }
  result = (unsigned int)v4;
  if ( v4 > 0xC && (qword_2171B8 > v4 || qword_2171B0 < v4) )
  {
    v6 = "column %s does not apply to the specified IPC";
    goto LABEL_11;
  }
  return result;
}

__int64 __fastcall sub_6780(__int64 a1)
{
  __int64 result; // rax

  if ( (signed int)a1 < 0 )
    __assert_fail("num >= 0", "sys-utils/lsipc.c", 0xEFu, "get_column_id");
  a1 = (signed int)a1;
  if ( (signed int)a1 >= (unsigned __int64)qword_217080 )
    __assert_fail("(size_t) num < ncolumns", "sys-utils/lsipc.c", 0xF0u, "get_column_id");
  result = dword_2170A0[a1];
  if ( (unsigned int)result > 0x21 )
    __assert_fail("(size_t) columns[num] < ARRAY_SIZE(coldescs)", "sys-utils/lsipc.c", 0xF1u, "get_column_id");
  return result;
}

unsigned __int64 __fastcall sub_6810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, unsigned __int64 a6, int a7, int a8)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  int v13; // eax
  double v15; // xmm0_8
  double v16; // xmm1_8
  const char *v17; // rsi
  char *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v8 = a5;
  v9 = a6;
  v19 = a1;
  v23 = __readfsqword(0x28u);
  v20 = a3;
  v21 = a4;
  v10 = scols_table_new_line(a2, 0LL);
  if ( !v10 )
  {
    v17 = "failed to allocate output line";
LABEL_30:
    v18 = dcgettext(0LL, v17, 5);
    err(1, v18, v19);
  }
  v11 = 0LL;
  if ( qword_217080 )
  {
    v12 = v10;
    while ( 1 )
    {
      v22 = 0LL;
      switch ( (unsigned int)sub_6780((unsigned int)v11) )
      {
        case 0x1Du:
          v13 = scols_line_set_data(v12, v11, v20);
          goto LABEL_10;
        case 0x1Eu:
          v13 = scols_line_set_data(v12, v11, v21);
          goto LABEL_10;
        case 0x1Fu:
          if ( a8 && !(*(_BYTE *)(v19 + 4) & 8) )
            v22 = sub_98D0(0LL, v9);
          else
            sub_6600((__int64)&v22, (__int64)"%ju", v9, v19);
          goto LABEL_9;
        case 0x20u:
          if ( !a7 )
            goto LABEL_24;
          if ( a8 && !(*(_BYTE *)(v19 + 4) & 8) )
            v22 = sub_98D0(0LL, v8);
          else
            sub_6600((__int64)&v22, (__int64)"%ju", v8, v19);
LABEL_9:
          v13 = scols_line_refer_data(v12, v11, v22);
          goto LABEL_10;
        case 0x21u:
          if ( a7 )
          {
            if ( (v8 & 0x8000000000000000LL) != 0LL )
              v15 = (double)(signed int)(v8 & 1 | (v8 >> 1)) + (double)(signed int)(v8 & 1 | (v8 >> 1));
            else
              v15 = (double)(signed int)v8;
            if ( (v9 & 0x8000000000000000LL) != 0LL )
              v16 = (double)(signed int)(v9 & 1 | (v9 >> 1)) + (double)(signed int)(v9 & 1 | (v9 >> 1));
            else
              v16 = (double)(signed int)v9;
            sub_6600((__int64)&v22, (__int64)"%2.2f%%", v15 / v16 * 100.0, v19);
            v13 = scols_line_refer_data(v12, v11, v22);
          }
          else
          {
LABEL_24:
            v13 = scols_line_set_data(v12, v11, "-");
          }
LABEL_10:
          if ( !v13 )
            goto LABEL_11;
          v17 = "failed to add output data";
          goto LABEL_30;
        default:
LABEL_11:
          if ( qword_217080 <= (unsigned __int64)++v11 )
            return __readfsqword(0x28u) ^ v23;
          break;
      }
    }
  }
  return __readfsqword(0x28u) ^ v23;
}

char *__fastcall sub_6AB0(int a1, time_t a2)
{
  char *v2; // rax
  char *result; // rax
  char *v4; // rdx
  time_t timer; // [rsp+0h] [rbp-B0h]
  struct tm tp; // [rsp+8h] [rbp-A8h]
  char s[16]; // [rsp+48h] [rbp-68h]
  __int128 v8; // [rsp+58h] [rbp-58h]
  __int128 v9; // [rsp+68h] [rbp-48h]
  __int128 v10; // [rsp+78h] [rbp-38h]
  unsigned __int64 v11; // [rsp+90h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  timer = a2;
  *(_OWORD *)s = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a1 == 2 )
  {
    localtime_r(&timer, &tp);
    asctime_r(&tp, s);
    v4 = &s[strlen(s)];
    if ( *(v4 - 1) == 10 )
      *(v4 - 1) = 0;
  }
  else if ( a1 == 3 )
  {
    sub_B6C0(&timer, 39LL, s, 64LL);
  }
  else
  {
    if ( a1 != 1 )
    {
      v2 = dcgettext(0LL, "unsupported time type", 5);
      errx(1, v2);
    }
    sub_B770(&timer, &tv);
  }
  result = strdup(s);
  if ( !result )
    err(1, "cannot duplicate string");
  return result;
}

char *__fastcall sub_6C30(struct passwd **a1, __uid_t a2)
{
  struct passwd *v2; // rax
  char *result; // rax

  v2 = *a1;
  if ( !*a1 || v2->pw_uid != a2 )
  {
    v2 = getpwuid(a2);
    *a1 = v2;
    if ( !v2 )
      return 0LL;
  }
  if ( !v2->pw_name )
    sub_4180();
  result = strdup(v2->pw_name);
  if ( !result )
    err(1, "cannot duplicate string");
  return result;
}

char *__fastcall sub_6C90(struct group **a1, __gid_t a2)
{
  struct group *v2; // rax
  char *result; // rax

  v2 = *a1;
  if ( !*a1 || v2->gr_gid != a2 )
  {
    v2 = getgrgid(a2);
    *a1 = v2;
    if ( !v2 )
      return 0LL;
  }
  if ( !v2->gr_name )
    sub_4180();
  result = strdup(v2->gr_name);
  if ( !result )
    err(1, "cannot duplicate string");
  return result;
}

__int64 __fastcall sub_6CF0(unsigned int a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  unsigned int *v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  time_t v7; // rsi
  int v8; // eax
  const char *v9; // rsi
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rsi
  char *v13; // rax
  unsigned int v14; // edi
  __int64 result; // rax
  unsigned __int64 v16; // rt1
  char *v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // r14
  unsigned int *v21; // rbp
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-98h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  int v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  __int64 v30; // [rsp+40h] [rbp-58h]
  void *ptr; // [rsp+48h] [rbp-50h]
  char *v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v24 = a2;
  v26 = a1;
  v25 = a3;
  v27 = 0LL;
  v33 = __readfsqword(0x28u);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  scols_table_set_name(a3, "semaphores");
  if ( (signed int)sub_7D10(a1, &ptr) <= 0 )
  {
    if ( (a1 & 0x80000000) == 0 )
    {
      v17 = dcgettext(0LL, "id %d not found", 5);
      warnx(v17, a1, a2, v25);
    }
  }
  else
  {
    v3 = ptr;
    v4 = (unsigned int *)ptr;
    if ( *((_QWORD *)ptr + 8) || v26 >= 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = scols_table_new_line(v25, 0LL);
          if ( !v5 )
          {
LABEL_72:
            v9 = "failed to allocate output line";
            goto LABEL_63;
          }
          v6 = 0LL;
          if ( qword_217080 )
          {
            while ( 1 )
            {
              switch ( (unsigned int)sub_6780((unsigned int)v6) )
              {
                case 0u:
                  v11 = v4[1];
                  v12 = "0x%08x";
                  goto LABEL_19;
                case 1u:
                  v11 = *v4;
                  v12 = "%d";
                  goto LABEL_19;
                case 2u:
                  v10 = sub_6C30((struct passwd **)&v27, v4[2]);
                  v32 = v10;
                  if ( !v10 )
                  {
                    sub_6600((__int64)&v32, (__int64)"%u", v4[2], v24);
                    v10 = v32;
                  }
                  goto LABEL_17;
                case 3u:
                  if ( *(_BYTE *)(v24 + 4) & 0x10 )
                  {
                    sub_6600((__int64)&v32, (__int64)"%#o", v4[6] & 0x1FF, v24);
                  }
                  else
                  {
                    v13 = (char *)malloc(0xBuLL);
                    if ( !v13 )
                      err(1, "cannot allocate %zu bytes", 11LL, v24);
                    v14 = v4[6];
                    v32 = v13;
                    sub_96A0(v14 & 0x1FF, v13);
                  }
                  goto LABEL_13;
                case 4u:
                  v11 = v4[4];
                  v12 = "%u";
                  goto LABEL_19;
                case 5u:
                  v10 = sub_6C30((struct passwd **)&v28, v4[4]);
                  v32 = v10;
                  if ( v10 )
                    goto LABEL_17;
                  goto LABEL_8;
                case 6u:
                  v11 = v4[5];
                  v12 = "%u";
                  goto LABEL_19;
                case 7u:
                  v10 = sub_6C90((struct group **)&v30, v4[5]);
                  v32 = v10;
                  if ( !v10 )
                    goto LABEL_8;
                  goto LABEL_17;
                case 8u:
                  v11 = v4[2];
                  v12 = "%u";
                  goto LABEL_19;
                case 9u:
                  v10 = sub_6C30((struct passwd **)&v27, v4[2]);
                  v32 = v10;
                  if ( !v10 )
                    goto LABEL_8;
                  goto LABEL_17;
                case 0xAu:
                  v11 = v4[3];
                  v12 = "%u";
LABEL_19:
                  sub_6600((__int64)&v32, (__int64)v12, v11, v24);
                  v8 = scols_line_refer_data(v5, v6, v32);
                  goto LABEL_14;
                case 0xBu:
                  v10 = sub_6C90((struct group **)&v29, v4[3]);
                  v32 = v10;
                  if ( !v10 )
                    goto LABEL_8;
                  goto LABEL_17;
                case 0xCu:
                  v7 = *((_QWORD *)v4 + 4);
                  if ( v7 )
                    goto LABEL_32;
                  goto LABEL_8;
                case 0x1Bu:
                  sub_6600((__int64)&v32, (__int64)"%ju", *((_QWORD *)v4 + 6), v24);
LABEL_13:
                  v8 = scols_line_refer_data(v5, v6, v32);
                  goto LABEL_14;
                case 0x1Cu:
                  v7 = *((_QWORD *)v4 + 5);
                  if ( !v7 )
                    goto LABEL_8;
LABEL_32:
                  v10 = sub_6AB0((*(_BYTE *)(v24 + 4) >> 5) & 3, v7);
LABEL_17:
                  v8 = scols_line_refer_data(v5, v6, v10);
LABEL_14:
                  if ( !v8 )
                    goto LABEL_8;
                  v9 = "failed to add output data";
                  goto LABEL_63;
                default:
LABEL_8:
                  ++v6;
                  v32 = 0LL;
                  if ( qword_217080 <= v6 )
                    goto LABEL_9;
                  break;
              }
            }
          }
LABEL_9:
          if ( v26 >= 0 )
            break;
          v4 = (unsigned int *)*((_QWORD *)v4 + 8);
          if ( !*((_QWORD *)v4 + 8) )
          {
            v3 = ptr;
            goto LABEL_41;
          }
        }
        if ( *((_QWORD *)ptr + 6) )
          break;
        v4 = (unsigned int *)*((_QWORD *)v4 + 8);
      }
      v18 = sub_6520(v24);
      scols_table_enable_noheadings(v18, 0LL);
      scols_table_set_name(v18, "elements");
      if ( scols_table_new_column(v18, "SEMNUM", 4LL) )
      {
        if ( !scols_table_new_column(v18, "VALUE", 4LL) )
          sub_41A3(0x218u);
        if ( !scols_table_new_column(v18, "NCOUNT", 4LL) )
          sub_41A3(0x21Au);
        if ( !scols_table_new_column(v18, "ZCOUNT", 4LL) )
          sub_41A3(0x21Cu);
        if ( !scols_table_new_column(v18, "PID", 4LL) )
          sub_41A3(0x21Eu);
        if ( !scols_table_new_column(v18, "COMMAND", 4LL) )
          sub_41A3(0x220u);
        v19 = ptr;
        v20 = 0LL;
        if ( !*((_QWORD *)ptr + 6) )
        {
LABEL_64:
          scols_line_set_userdata(v5, v18);
          v3 = ptr;
          goto LABEL_41;
        }
        while ( 1 )
        {
          v21 = (unsigned int *)(v19[7] + 16 * v20);
          v22 = scols_table_new_line(v18, 0LL);
          if ( !v22 )
            goto LABEL_72;
          sub_6600((__int64)&v32, (__int64)"%zu", v20, 0.0, v24);
          if ( (unsigned int)scols_line_refer_data(v22, 0LL, v32) )
            break;
          sub_6600((__int64)&v32, (__int64)"%d", *v21);
          if ( (unsigned int)scols_line_refer_data(v22, 1LL, v32) )
            break;
          sub_6600((__int64)&v32, (__int64)"%d", v21[1]);
          if ( (unsigned int)scols_line_refer_data(v22, 2LL, v32) )
            break;
          sub_6600((__int64)&v32, (__int64)"%d", v21[2]);
          if ( (unsigned int)scols_line_refer_data(v22, 3LL, v32) )
            break;
          sub_6600((__int64)&v32, (__int64)"%d", v21[3]);
          if ( (unsigned int)scols_line_refer_data(v22, 4LL, v32) )
            break;
          v32 = (char *)sub_FB90(v21[3]);
          if ( (unsigned int)scols_line_refer_data(v22, 5LL, v32) )
            break;
          v19 = ptr;
          if ( *((_QWORD *)ptr + 6) <= (unsigned __int64)++v20 )
            goto LABEL_64;
        }
        v9 = "failed to set data";
LABEL_63:
        v23 = dcgettext(0LL, v9, 5);
        err(1, v23, v24);
      }
LABEL_65:
      sub_41A3(0x216u);
    }
LABEL_41:
    sub_7FC0(v3);
  }
  v16 = __readfsqword(0x28u);
  result = v16 ^ v33;
  if ( v16 != v33 )
    goto LABEL_65;
  return result;
}

int sub_73E0()
{
  FILE *v0; // rbp
  int *v1; // rax
  int *v2; // rbx
  int v3; // eax
  FILE *v4; // rbp
  int result; // eax
  char *v6; // rax
  int v7; // eax
  int v8; // eax
  char *v9; // rax

  v0 = stdout;
  v1 = __errno_location();
  *v1 = 0;
  v2 = v1;
  if ( ferror(v0) || fflush(v0) || (v7 = fileno(v0), v7 < 0) || (v8 = dup(v7), v8 < 0) || close(v8) )
  {
    v3 = *v2;
    if ( *v2 != 9 && v3 != 32 )
    {
      if ( v3 )
      {
        v6 = dcgettext(0LL, "write error", 5);
        warn(v6);
      }
      else
      {
        v9 = dcgettext(0LL, "write error", 5);
        warnx(v9);
      }
      goto LABEL_9;
    }
  }
  v4 = stderr;
  *v2 = 0;
  result = ferror(v4);
  if ( result
    || (result = fflush(v4)) != 0
    || (result = fileno(v4), result < 0)
    || (result = dup(result), result < 0)
    || (result = close(result)) != 0 )
  {
    if ( *v2 != 9 )
LABEL_9:
      _exit(1);
  }
  return result;
}

int __fastcall sub_7520(__int64 a1)
{
  size_t v1; // rax
  int v2; // er13
  char *v3; // rax
  char *v4; // rbp
  __int64 v5; // rbx
  int *v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 >= 0 )
    {
      v3 = (char *)calloc(v1, 0x10uLL);
      v4 = v3;
      if ( !v3 )
        err(1, "cannot allocate %zu bytes", 16LL);
      *(_QWORD *)(a1 + 56) = v3;
      v5 = 0LL;
      while ( 1 )
      {
        v6 = (int *)&v4[16 * v5];
        v7 = semctl(v2, v5, 12, 0LL);
        *v6 = v7;
        if ( v7 < 0 )
        {
          v10 = dcgettext(0LL, "%s failed", 5);
          err(1, v10, "semctl(GETVAL)");
        }
        v8 = semctl(*(_DWORD *)a1, v5, 14, 0LL);
        v6[1] = v8;
        if ( v8 < 0 )
        {
          v11 = dcgettext(0LL, "%s failed", 5);
          err(1, v11, "semctl(GETNCNT)");
        }
        v9 = semctl(*(_DWORD *)a1, v5, 15, 0LL);
        v6[2] = v9;
        if ( v9 < 0 )
        {
          v12 = dcgettext(0LL, "%s failed", 5);
          err(1, v12, "semctl(GETZCNT)");
        }
        LODWORD(v1) = semctl(*(_DWORD *)a1, v5, 11, 0LL);
        v6[3] = v1;
        if ( (v1 & 0x80000000) != 0LL )
        {
          v13 = dcgettext(0LL, "%s failed", 5);
          err(1, v13, "semctl(GETPID)");
        }
        if ( (unsigned __int64)++v5 >= *(_QWORD *)(a1 + 48) )
          break;
        v4 = *(char **)(a1 + 56);
        v2 = *(_DWORD *)a1;
      }
    }
  }
  return v1;
}

_BOOL8 __fastcall sub_76E0(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-38h]
  int v3; // [rsp+8h] [rbp-30h]
  int v4; // [rsp+Ch] [rbp-2Ch]
  int v5; // [rsp+10h] [rbp-28h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( access("/proc/sys/kernel/msgmni", 0)
    || access("/proc/sys/kernel/msgmnb", 0)
    || access("/proc/sys/kernel/msgmax", 0) )
  {
    if ( msgctl(0, 3, (struct msqid_ds *)&v2) >= 0 )
    {
      *(_DWORD *)(a1 + 52) = v5;
      *(_DWORD *)(a1 + 64) = v4;
      *(_QWORD *)(a1 + 56) = v3;
      return 0LL;
    }
    return 1LL;
  }
  if ( (unsigned int)sub_DE40(0LL, a1 + 52, "/proc/sys/kernel/msgmni")
    || (unsigned int)sub_DE40(0LL, a1 + 64, "/proc/sys/kernel/msgmnb") )
  {
    return 1LL;
  }
  return (unsigned int)sub_DCF0(0LL, a1 + 56, "/proc/sys/kernel/msgmax") != 0;
}

__int64 __fastcall sub_77E0(_DWORD *a1)
{
  FILE *v1; // rax
  FILE *v2; // rbp
  int v3; // er12
  int v4; // eax
  unsigned int v5; // edx
  __int128 v7; // [rsp+0h] [rbp-48h]
  __int128 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  a1[12] = 0x7FFF;
  v10 = __readfsqword(0x28u);
  v1 = fopen("/proc/sys/kernel/sem", "r");
  if ( v1 )
  {
    v2 = v1;
    v3 = fscanf(v1, "%d\t%d\t%d\t%d", a1 + 9, a1 + 10, a1 + 11, a1 + 8);
    fclose(v2);
    if ( v3 == 4 )
      goto LABEL_5;
  }
  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v4 = semctl(0, 0, 3, &v7, 0LL);
  v5 = 1;
  if ( v4 >= 0 )
  {
    a1[8] = DWORD1(v7);
    a1[9] = v8;
    a1[10] = DWORD2(v7);
    a1[11] = DWORD1(v8);
LABEL_5:
    v5 = 0;
  }
  return v5;
}

__int64 __fastcall sub_78C0(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v3; // [rsp+0h] [rbp-98h]
  __int64 v4; // [rsp+10h] [rbp-88h]
  __int64 v5; // [rsp+20h] [rbp-78h]
  unsigned __int64 v6; // [rsp+78h] [rbp-20h]

  a1[3] = 1LL;
  v6 = __readfsqword(0x28u);
  if ( access("/proc/sys/kernel/shmall", 0)
    || access("/proc/sys/kernel/shmmax", 0)
    || (v1 = access("/proc/sys/kernel/shmmni", 0)) != 0 )
  {
    v1 = 1;
    if ( shmctl(0, 3, (struct shmid_ds *)&v3) >= 0 )
    {
      v1 = 0;
      *a1 = v4;
      a1[2] = v5;
      a1[1] = v3;
    }
  }
  else
  {
    sub_DCF0(0LL, a1 + 2, "/proc/sys/kernel/shmall");
    sub_DCF0(0LL, a1 + 1, "/proc/sys/kernel/shmmax");
    sub_DCF0(0LL, a1, "/proc/sys/kernel/shmmni");
  }
  return v1;
}

__int64 __fastcall sub_79B0(int a1, void **a2)
{
  void *v2; // rax
  _QWORD *v3; // r15
  FILE *v4; // r13
  unsigned int v5; // ebp
  _QWORD *v7; // rax
  int v8; // er14
  int v9; // er13
  int v10; // eax
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  _QWORD *v14; // rax
  struct shmid_ds *v15; // [rsp+0h] [rbp-2138h]
  struct shmid_ds buf; // [rsp+10h] [rbp-2128h]
  int v17; // [rsp+80h] [rbp-20B8h]
  int v18; // [rsp+84h] [rbp-20B4h]
  int v19; // [rsp+88h] [rbp-20B0h]
  int v20; // [rsp+8Ch] [rbp-20ACh]
  unsigned __int16 v21; // [rsp+94h] [rbp-20A4h]
  __int64 v22; // [rsp+B0h] [rbp-2088h]
  __int64 v23; // [rsp+B8h] [rbp-2080h]
  __int64 v24; // [rsp+C0h] [rbp-2078h]
  __int64 v25; // [rsp+C8h] [rbp-2070h]
  int v26; // [rsp+D0h] [rbp-2068h]
  int v27; // [rsp+D4h] [rbp-2064h]
  __int64 v28; // [rsp+D8h] [rbp-2060h]
  char s; // [rsp+F0h] [rbp-2048h]
  unsigned __int64 v30; // [rsp+20F8h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = calloc(1uLL, 0x68uLL);
  if ( !v2 )
LABEL_2:
    err(1, "cannot allocate %zu bytes", 104LL, v15);
  *a2 = v2;
  *((_QWORD *)v2 + 12) = 0LL;
  v3 = v2;
  v4 = fopen("/proc/sysvipc/shm", "r");
  if ( v4 )
  {
    while ( fgetc(v4) != 10 )
      ;
    v5 = 0;
    while ( fgets(&s, 0x2000, v4) )
    {
      v3[10] = 57005LL;
      v3[11] = 57005LL;
      if ( sscanf(
             &s,
             "%d %d  %o %lu %u %u  %lu %u %u %u %u %li %li %li %lu %lu\n",
             (char *)v3 + 4,
             v3,
             v3 + 3,
             v3 + 5,
             v3 + 9,
             (char *)v3 + 76,
             v3 + 4,
             v3 + 1,
             (char *)v3 + 12,
             v3 + 2,
             (char *)v3 + 20,
             v3 + 6,
             v3 + 7,
             v3 + 8,
             v3 + 10,
             v3 + 11) > 13 )
      {
        if ( a1 < 0 )
        {
          v7 = calloc(1uLL, 0x68uLL);
          if ( !v7 )
            goto LABEL_2;
          v3[12] = v7;
          ++v5;
          v7[12] = 0LL;
          v3 = v7;
        }
        else if ( *(_DWORD *)v3 == a1 )
        {
          v5 = 1;
          goto LABEL_11;
        }
      }
    }
    if ( !v5 )
      free(*a2);
LABEL_11:
    fclose(v4);
  }
  else
  {
    v8 = shmctl(0, 14, &buf);
    if ( v8 < 0 )
      goto LABEL_30;
    v9 = 0;
    v5 = 0;
    v15 = (struct shmid_ds *)&v17;
    do
    {
      v10 = shmctl(v9, 13, (struct shmid_ds *)&v17);
      if ( v10 >= 0 && (~a1 >= 0 || a1 == v10) )
      {
        *(_DWORD *)v3 = v10;
        v11 = v21;
        ++v5;
        v12 = v17;
        v3[10] = 57005LL;
        v3[11] = 57005LL;
        *((_DWORD *)v3 + 6) = v11;
        v13 = v22;
        *((_DWORD *)v3 + 1) = v12;
        v3[5] = v13;
        *((_DWORD *)v3 + 18) = v26;
        *((_DWORD *)v3 + 19) = v27;
        v3[4] = v28;
        *((_DWORD *)v3 + 2) = v18;
        *((_DWORD *)v3 + 3) = v19;
        LODWORD(v13) = v20;
        *((_DWORD *)v3 + 4) = v20;
        *((_DWORD *)v3 + 5) = v13;
        v3[6] = v23;
        v3[7] = v24;
        v3[8] = v25;
        if ( a1 >= 0 )
          return v5;
        v14 = calloc(1uLL, 0x68uLL);
        if ( !v14 )
          goto LABEL_2;
        v3[12] = v14;
        v14[12] = 0LL;
        v3 = v14;
      }
      ++v9;
    }
    while ( v8 >= v9 );
    if ( !v5 )
    {
LABEL_30:
      v5 = 0;
      free(*a2);
    }
  }
  return v5;
}

void __fastcall sub_7CE0(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)a1[12];
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_7D10(int a1, void **a2)
{
  void *v2; // rax
  __int64 v3; // r15
  FILE *v4; // r13
  unsigned int v5; // ebp
  _QWORD *v7; // rax
  int v8; // er14
  int v9; // er13
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rax
  int *v14; // [rsp+0h] [rbp-E8h]
  char v15; // [rsp+10h] [rbp-D8h]
  int v16; // [rsp+40h] [rbp-A8h]
  int v17; // [rsp+44h] [rbp-A4h]
  int v18; // [rsp+48h] [rbp-A0h]
  int v19; // [rsp+4Ch] [rbp-9Ch]
  unsigned __int16 v20; // [rsp+54h] [rbp-94h]
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+80h] [rbp-68h]
  __int64 v23; // [rsp+90h] [rbp-58h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = calloc(1uLL, 0x48uLL);
  if ( !v2 )
LABEL_2:
    err(1, "cannot allocate %zu bytes", 72LL);
  *a2 = v2;
  *((_QWORD *)v2 + 8) = 0LL;
  v3 = (__int64)v2;
  v4 = fopen("/proc/sysvipc/sem", "r");
  if ( v4 )
  {
    while ( fgetc(v4) != 10 )
      ;
    v5 = 0;
    while ( !feof(v4) )
    {
      if ( fscanf(
             v4,
             "%d %d  %o %lu %u %u %u %u %li %li\n",
             v3 + 4,
             v3,
             v3 + 24,
             v3 + 48,
             v3 + 8,
             v3 + 12,
             v3 + 16,
             v3 + 20,
             v3 + 40,
             v3 + 32) == 10 )
      {
        if ( a1 < 0 )
        {
          v7 = calloc(1uLL, 0x48uLL);
          if ( !v7 )
            goto LABEL_2;
          *(_QWORD *)(v3 + 64) = v7;
          ++v5;
          v7[8] = 0LL;
          v3 = (__int64)v7;
        }
        else if ( *(_DWORD *)v3 == a1 )
        {
          v5 = 1;
          sub_7520(v3);
          goto LABEL_11;
        }
      }
    }
    if ( !v5 )
      free(*a2);
LABEL_11:
    fclose(v4);
  }
  else
  {
    v8 = semctl(0, 0, 19, &v15);
    if ( v8 >= 0 )
    {
      v9 = 0;
      v5 = 0;
      v14 = &v16;
      do
      {
        v10 = semctl(v9, 0, 18, v14, v14);
        if ( v10 >= 0 && (~a1 >= 0 || a1 == v10) )
        {
          *(_DWORD *)v3 = v10;
          v11 = v16;
          *(_DWORD *)(v3 + 24) = v20;
          v12 = v23;
          *(_DWORD *)(v3 + 4) = v11;
          *(_QWORD *)(v3 + 48) = v12;
          *(_DWORD *)(v3 + 8) = v17;
          *(_DWORD *)(v3 + 12) = v18;
          LODWORD(v12) = v19;
          *(_DWORD *)(v3 + 16) = v19;
          *(_DWORD *)(v3 + 20) = v12;
          *(_QWORD *)(v3 + 40) = v21;
          *(_QWORD *)(v3 + 32) = v22;
          if ( a1 >= 0 )
          {
            ++v5;
            sub_7520(v3);
            return v5;
          }
          v13 = calloc(1uLL, 0x48uLL);
          if ( !v13 )
            goto LABEL_2;
          *(_QWORD *)(v3 + 64) = v13;
          v5 += 2;
          v13[8] = 0LL;
          v3 = (__int64)v13;
        }
        ++v9;
      }
      while ( v8 >= v9 );
      if ( v5 )
        return v5;
    }
    v5 = 0;
    free(*a2);
  }
  return v5;
}

void __fastcall sub_7FC0(void *ptr)
{
  void *v1; // rbx
  void *v2; // rbp
  void *v3; // rdi

  if ( ptr )
  {
    v1 = ptr;
    do
    {
      v2 = (void *)*((_QWORD *)v1 + 8);
      free(*((void **)v1 + 7));
      v3 = v1;
      v1 = v2;
      free(v3);
    }
    while ( v2 );
  }
}

__int64 __fastcall sub_8000(int msqid, void **a2)
{
  void *v2; // rax
  _QWORD *v3; // r15
  FILE *v4; // r13
  unsigned int v5; // ebp
  _QWORD *v7; // rax
  int v8; // er14
  int v9; // er13
  int v10; // eax
  __key_t v11; // edx
  __syscall_ulong_t v12; // rax
  _QWORD *v13; // rax
  struct msqid_ds *v14; // [rsp+0h] [rbp-148h]
  struct msqid_ds v15; // [rsp+10h] [rbp-138h]
  struct msqid_ds buf; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v17; // [rsp+108h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = calloc(1uLL, 0x60uLL);
  if ( !v2 )
LABEL_2:
    err(1, "cannot allocate %zu bytes", 96LL, v14);
  *a2 = v2;
  *((_QWORD *)v2 + 11) = 0LL;
  v3 = v2;
  v4 = fopen("/proc/sysvipc/msg", "r");
  if ( v4 )
  {
    while ( fgetc(v4) != 10 )
      ;
    v5 = 0;
    while ( !feof(v4) )
    {
      if ( fscanf(
             v4,
             "%d %d  %o  %lu %lu %u %u %u %u %u %u %li %li %li\n",
             (char *)v3 + 4,
             v3,
             v3 + 3,
             v3 + 7,
             v3 + 8,
             v3 + 10,
             (char *)v3 + 84,
             v3 + 1,
             (char *)v3 + 12,
             v3 + 2,
             (char *)v3 + 20,
             v3 + 4,
             v3 + 5,
             v3 + 6) == 14 )
      {
        if ( msqid < 0 )
        {
          v7 = calloc(1uLL, 0x60uLL);
          if ( !v7 )
            goto LABEL_2;
          v3[11] = v7;
          ++v5;
          v7[11] = 0LL;
          v3 = v7;
        }
        else if ( *(_DWORD *)v3 == msqid )
        {
          v5 = 1;
          if ( msgctl(msqid, 2, &buf) != -1 )
            v3[9] = buf.msg_qbytes;
          goto LABEL_12;
        }
      }
    }
    if ( !v5 )
      free(*a2);
LABEL_12:
    fclose(v4);
  }
  else
  {
    v8 = msgctl(0, 12, &v15);
    if ( v8 < 0 )
      goto LABEL_31;
    v9 = 0;
    v5 = 0;
    v14 = &buf;
    do
    {
      v10 = msgctl(v9, 11, &buf);
      if ( v10 >= 0 && (~msqid >= 0 || msqid == v10) )
      {
        *(_DWORD *)v3 = v10;
        ++v5;
        v11 = buf.msg_perm.__key;
        *((_DWORD *)v3 + 6) = buf.msg_perm.mode;
        v12 = buf.__msg_cbytes;
        *((_DWORD *)v3 + 1) = v11;
        v3[7] = v12;
        v3[8] = buf.msg_qnum;
        *((_DWORD *)v3 + 20) = buf.msg_lspid;
        *((_DWORD *)v3 + 21) = buf.msg_lrpid;
        *((_DWORD *)v3 + 2) = buf.msg_perm.uid;
        *((_DWORD *)v3 + 3) = buf.msg_perm.gid;
        *((_DWORD *)v3 + 4) = buf.msg_perm.cuid;
        *((_DWORD *)v3 + 5) = buf.msg_perm.cgid;
        v3[4] = buf.msg_stime;
        v3[5] = buf.msg_rtime;
        v3[6] = buf.msg_ctime;
        v3[9] = buf.msg_qbytes;
        if ( msqid >= 0 )
          return v5;
        v13 = calloc(1uLL, 0x60uLL);
        if ( !v13 )
          goto LABEL_2;
        v3[11] = v13;
        v13[11] = 0LL;
        v3 = v13;
      }
      ++v9;
    }
    while ( v8 >= v9 );
    if ( !v5 )
    {
LABEL_31:
      v5 = 0;
      free(*a2);
    }
  }
  return v5;
}

void __fastcall sub_8320(_QWORD *a1)
{
  _QWORD *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)a1[11];
      free(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}

__int64 __fastcall sub_8350(__int64 a1, __uid_t *a2)
{
  __uid_t v2; // er8
  struct passwd *v3; // rax
  struct group *v4; // rax
  struct passwd *v5; // rax
  struct group *v6; // rax
  __int64 result; // rax

  v2 = a2[6];
  __fprintf_chk(a1, 1LL, "%-10d %-10o", *a2);
  v3 = getpwuid(a2[4]);
  if ( v3 )
    __fprintf_chk(a1, 1LL, " %-10s", v3->pw_name);
  else
    __fprintf_chk(a1, 1LL, " %-10u", a2[4]);
  v4 = getgrgid(a2[5]);
  if ( v4 )
    __fprintf_chk(a1, 1LL, " %-10s", v4->gr_name);
  else
    __fprintf_chk(a1, 1LL, " %-10u", a2[5]);
  v5 = getpwuid(a2[2]);
  if ( v5 )
    __fprintf_chk(a1, 1LL, " %-10s", v5->pw_name);
  else
    __fprintf_chk(a1, 1LL, " %-10u", a2[2]);
  v6 = getgrgid(a2[3]);
  if ( v6 )
    result = __fprintf_chk(a1, 1LL, " %-10s\n", v6->gr_name);
  else
    result = __fprintf_chk(a1, 1LL, " %-10u\n", a2[3]);
  return result;
}

_BYTE *__fastcall sub_86D0(_BYTE *a1, signed __int64 *a2)
{
  _BYTE *result; // rax
  char v3; // dl
  signed __int64 v4; // rdx
  char v5; // cl

  *a2 = 0LL;
  if ( !a1 )
    return 0LL;
  while ( *a1 == 47 )
  {
    if ( a1[1] != 47 )
    {
      result = a1;
      goto LABEL_7;
    }
    if ( !++a1 )
      return 0LL;
  }
  result = a1;
  if ( !*a1 )
    return 0LL;
LABEL_7:
  *a2 = 1LL;
  v3 = a1[1];
  if ( v3 != 47 && v3 )
  {
    v4 = 2LL;
    do
    {
      *a2 = v4;
      v5 = a1[v4++];
    }
    while ( v5 && v5 != 47 );
  }
  return result;
}

__int64 __fastcall sub_8760(_BYTE *a1, const char *a2)
{
  const char *v2; // r12
  __int64 result; // rax
  int v4; // esi
  int v5; // ebx
  _BYTE *v6; // r13

  v2 = a2;
  result = 0LL;
  v4 = (char)*a1;
  if ( *a1 )
  {
    v5 = 0;
    while ( (_BYTE)v4 == 92 )
    {
LABEL_8:
      if ( !a1[v5 + 1] )
        goto LABEL_11;
      v5 += 2;
      result = v5;
      v4 = (char)a1[v5];
      if ( !a1[v5] )
        return result;
    }
    v6 = &a1[v5 + 1];
    while ( !strchr(v2, v4) )
    {
      v4 = (char)*v6;
      ++v5;
      if ( !*v6 )
        break;
      ++v6;
      if ( (_BYTE)v4 == 92 )
        goto LABEL_8;
    }
LABEL_11:
    result = v5;
  }
  return result;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

// write access to const memory has been detected, the output may be wrong!
__int64 __usercall sub_8D30@<rax>(char *nptr@<rdi>, __int64 a2@<rbx>, __int64 a3@<rbp>, unsigned __int64 *a4@<rsi>, __int64 a5@<r12>, __int64 a6@<r13>, __int64 a7@<r14>, __int64 a8@<r15>)
{
  unsigned __int64 *v8; // rbp
  int *v9; // rbx
  unsigned __int8 v10; // r14
  const unsigned __int16 **v11; // rax
  const unsigned __int16 **v12; // r13
  const unsigned __int16 *v13; // rcx
  char *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v18; // rax
  char *v19; // r14
  int v20; // ecx
  int v21; // er15
  char v22; // al
  struct lconv *v23; // rax
  size_t v24; // rax
  char *v25; // r8
  __int64 i; // rax
  signed int v27; // er13
  int v28; // er14
  char *v29; // rax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  int v33; // er8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  int v37; // esi
  char *v38; // ST08_8
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r9
  char *v45; // rax
  size_t v46; // [rsp+0h] [rbp-70h]
  char *s1; // [rsp+8h] [rbp-68h]
  unsigned __int64 v48; // [rsp+10h] [rbp-60h]
  unsigned __int64 v49; // [rsp+18h] [rbp-58h]
  char *endptr; // [rsp+28h] [rbp-48h]
  unsigned __int64 v51; // [rsp+30h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-30h]
  __int64 v53; // [rsp+48h] [rbp-28h]
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  __int64 v57; // [rsp+68h] [rbp-8h]

  v57 = a8;
  v56 = a7;
  v55 = a6;
  v54 = a5;
  v53 = a3;
  v52 = a2;
  v8 = a4;
  *a4 = 0LL;
  v51 = __readfsqword(0x28u);
  v9 = __errno_location();
  if ( !nptr )
    goto LABEL_7;
  v10 = *nptr;
  if ( !*nptr )
    goto LABEL_7;
  v11 = __ctype_b_loc();
  v12 = v11;
  v13 = *v11;
  v14 = nptr;
  while ( v13[v10] & 0x2000 )
    v10 = *++v14;
  if ( v10 == 45 )
    goto LABEL_7;
  *v9 = 0;
  endptr = 0LL;
  v18 = __strtoul_internal(nptr, &endptr, 0, 0);
  v19 = endptr;
  v48 = v18;
  v20 = *v9;
  if ( endptr == nptr )
  {
LABEL_33:
    if ( !v20 )
    {
LABEL_7:
      v15 = 22;
      v16 = -22;
      goto LABEL_8;
    }
LABEL_13:
    v16 = -v20;
    goto LABEL_14;
  }
  if ( v20 && v18 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_13;
  if ( !endptr || !*endptr )
  {
    v16 = 0;
    *a4 = v18;
    return v16;
  }
  v21 = 0;
  v49 = 0LL;
  while ( 1 )
  {
    v22 = v19[1];
    if ( v22 == 105 )
    {
      if ( (v19[2] & 0xDF) == 66 && !v19[3] )
      {
LABEL_37:
        v27 = 1024;
        goto LABEL_38;
      }
      goto LABEL_23;
    }
    if ( (v22 & 0xDF) == 66 && !v19[2] )
      break;
    if ( !v22 )
      goto LABEL_37;
LABEL_23:
    v23 = localeconv();
    if ( !v23 )
      goto LABEL_7;
    if ( !v23->decimal_point )
      goto LABEL_7;
    s1 = v23->decimal_point;
    v24 = strlen(v23->decimal_point);
    if ( v49 )
      goto LABEL_7;
    if ( !*v19 )
      goto LABEL_7;
    v46 = v24;
    if ( strncmp(s1, v19, v24) )
      goto LABEL_7;
    v25 = &v19[v46];
    for ( i = v19[v46]; (_BYTE)i == 48; ++v21 )
      i = *++v25;
    if ( (*v12)[i] & 0x800 )
    {
      *v9 = 0;
      v38 = v25;
      endptr = 0LL;
      v39 = __strtoul_internal(v25, &endptr, 0, 0);
      v19 = endptr;
      v49 = v39;
      v20 = *v9;
      if ( endptr == v38 )
        goto LABEL_33;
      if ( v20 )
      {
        if ( v39 - 1 > 0xFFFFFFFFFFFFFFFDLL )
          goto LABEL_13;
        goto LABEL_62;
      }
      if ( v39 )
      {
LABEL_62:
        if ( !endptr || !*endptr )
          goto LABEL_7;
      }
    }
    else
    {
      endptr = v25;
      v19 = v25;
    }
  }
  v27 = 1000;
LABEL_38:
  v28 = *v19;
  v29 = strchr("KMGTPEZY", v28);
  if ( v29 )
  {
    v30 = (unsigned __int64)(v29 - "KMGTPEZY") + 1;
    goto LABEL_40;
  }
  v45 = strchr("kmgtpezy", v28);
  if ( !v45 )
    goto LABEL_7;
  v30 = (unsigned __int64)(v45 - "kmgtpezy") + 1;
LABEL_40:
  if ( v30 )
  {
    if ( is_mul_ok(v27, v48) )
    {
      v31 = 0;
      while ( 1 )
      {
        v48 *= v27;
        if ( v30 - 1 == v31 )
          break;
        ++v31;
        if ( !is_mul_ok(v27, v48) )
          goto LABEL_77;
      }
      v16 = 0;
    }
    else
    {
LABEL_77:
      v16 = -34;
    }
    if ( v49 )
    {
      v32 = v30 - 1;
      v33 = 0;
      v34 = 1LL;
      do
      {
        v34 *= v27;
        if ( v33 == v32 )
          break;
        ++v33;
      }
      while ( is_mul_ok(v27, v34) );
      if ( v49 <= 0xA )
      {
        v36 = v49;
        v35 = 10LL;
      }
      else
      {
        v35 = 10LL;
        while ( 1 )
        {
          v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v49 >> 64) >> 3;
          if ( v35 > 0x1999999999999999LL )
            break;
          v35 *= 10LL;
          if ( v35 >= v49 )
          {
            v36 = v49;
            break;
          }
        }
      }
      if ( v21 )
      {
        v37 = 0;
        do
        {
          if ( v35 <= 0x1999999999999999LL )
            v35 *= 10LL;
          else
            v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
          ++v37;
        }
        while ( v21 != v37 );
      }
      v40 = 1LL;
      do
      {
        v41 = 10 * v40;
        v42 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        v43 = v36 - 10 * v42;
        v36 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)v36 >> 64) >> 3;
        if ( v43 )
        {
          v44 = v35 / v40 / v43;
          if ( v44 )
            v48 += v34 / v44;
        }
        v40 = v41;
      }
      while ( v42 );
    }
    *v8 = v48;
LABEL_14:
    if ( (v16 & 0x80000000) != 0 )
    {
      v15 = -v16;
LABEL_8:
      *v9 = v15;
    }
  }
  else
  {
    v16 = 0;
    *a4 = v48;
  }
  return v16;
}

__int64 __fastcall sub_8FC0(char *nptr, __int64 *a2, int a3)
{
  int v3; // er13
  int *v4; // rax
  int *v5; // rbp
  __int64 result; // rax
  char *v7; // [rsp+0h] [rbp-38h]
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v8 = __readfsqword(0x28u);
  v7 = 0LL;
  v4 = __errno_location();
  v5 = v4;
  if ( !nptr || !*nptr )
    goto LABEL_12;
  *v4 = 0;
  *a2 = __strtol_internal(nptr, &v7, v3, 0);
  result = (unsigned int)*v5;
  if ( (_DWORD)result )
    return (unsigned int)-(signed int)result;
  if ( v7 == nptr || v7 && *v7 )
  {
LABEL_12:
    *v5 = 22;
    result = 4294967274LL;
  }
  return result;
}

__int64 __fastcall sub_9070(char *nptr, unsigned __int64 *a2, int a3)
{
  int v3; // er12
  int *v4; // rax
  int *v5; // rbp
  __int64 result; // rax
  char *v7; // [rsp+0h] [rbp-38h]
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v8 = __readfsqword(0x28u);
  v7 = 0LL;
  v4 = __errno_location();
  v5 = v4;
  if ( nptr && *nptr )
  {
    *v4 = 0;
    if ( __strtol_internal(nptr, &v7, v3, 0) < 0 )
    {
      *v5 = 34;
      result = 4294967262LL;
      goto LABEL_5;
    }
    *v5 = 0;
    *a2 = __strtoul_internal(nptr, &v7, v3, 0);
    result = (unsigned int)*v5;
    if ( (_DWORD)result )
      goto LABEL_12;
    if ( v7 != nptr && (!v7 || !*v7) )
      goto LABEL_5;
  }
  *v5 = 22;
  result = 4294967274LL;
LABEL_5:
  while ( __readfsqword(0x28u) != v8 )
LABEL_12:
    result = (unsigned int)-(signed int)result;
  return result;
}

__int64 __fastcall sub_9150(char *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-18h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = sub_8FC0(a1, &v4, a3);
  if ( !(_DWORD)result )
  {
    if ( (unsigned __int64)(v4 + 0x80000000LL) > 0xFFFFFFFF )
    {
      *__errno_location() = 34;
      result = 4294967262LL;
    }
    else
    {
      *a2 = v4;
    }
  }
  return result;
}

__int64 __fastcall sub_91C0(char *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+0h] [rbp-18h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = sub_9070(a1, &v4, a3);
  if ( !(_DWORD)result )
  {
    if ( v4 > 0xFFFFFFFF )
    {
      *__errno_location() = 34;
      result = 4294967262LL;
    }
    else
    {
      *a2 = v4;
    }
  }
  return result;
}

__int64 __fastcall sub_9230(char *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  char *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  int *v9; // rax
  int v10; // edi
  __int64 result; // rax
  int *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h]
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v5 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a5;
  v13 = 0LL;
  v14 = __readfsqword(0x28u);
  if ( (unsigned int)sub_8FC0(a1, &v13, a2) )
  {
    v9 = __errno_location();
    v10 = status;
    if ( *v9 != 34 )
      errx(status, "%s: '%s'", v5, v6);
LABEL_7:
    err(v10, "%s: '%s'", v5, v6);
  }
  result = v13;
  if ( v7 && v7 > v13 || v8 && v8 < v13 )
  {
    v12 = __errno_location();
    v10 = status;
    *v12 = 34;
    goto LABEL_7;
  }
  return result;
}

unsigned __int64 __fastcall sub_93D0(char *nptr, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax
  int v4; // edi
  double v5; // xmm0_8
  int *v7; // [rsp+8h] [rbp-30h]
  char *endptr; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = nptr;
  v9 = __readfsqword(0x28u);
  endptr = 0LL;
  v3 = __errno_location();
  *v3 = 0;
  v4 = status;
  if ( !v2 || !*v2 )
    goto LABEL_3;
  v7 = v3;
  v5 = strtod(v2, &endptr);
  if ( *v7 )
  {
    v4 = status;
    if ( *v7 == 34 )
      err(status, "%s: '%s'", a2, v2, v5);
LABEL_3:
    errx(v4, "%s: '%s'", a2, v2);
  }
  if ( endptr == v2 || endptr && *endptr )
  {
    v4 = status;
    goto LABEL_3;
  }
  return __readfsqword(0x28u) ^ v9;
}

long double __fastcall sub_94A0(char *nptr, __int64 a2)
{
  char *v2; // rbx
  int *v3; // rax
  int v4; // edi
  long double v5; // fst7
  long double result; // fst7
  int *v7; // [rsp+0h] [rbp-38h]
  char *endptr; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = nptr;
  v9 = __readfsqword(0x28u);
  endptr = 0LL;
  v3 = __errno_location();
  *v3 = 0;
  v4 = status;
  if ( !v2 || !*v2 )
    goto LABEL_3;
  v7 = v3;
  v5 = strtold(v2, &endptr);
  if ( *v7 )
  {
    v4 = status;
    if ( *v7 == 34 )
      err(status, "%s: '%s'", a2, v2, v7);
LABEL_3:
    errx(v4, "%s: '%s'", a2, v2, v7);
  }
  if ( endptr == v2 || endptr && *endptr )
  {
    v4 = status;
    goto LABEL_3;
  }
  result = (double)v5;
  if ( __readfsqword(0x28u) != v9 )
    JUMPOUT(*(_QWORD *)algn_9594);
  return result;
}

__int64 __usercall sub_95A0@<rax>(char *a1@<rdi>, __int64 a2@<rsi>, __int64 a3@<r12>, __int64 a4@<r13>, __int64 a5@<r14>, __int64 a6@<r15>)
{
  __int64 v7; // [rsp+0h] [rbp-28h]
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (unsigned int)sub_8D30(a1, (__int64)a1, a2, (unsigned __int64 *)&v7, a3, a4, a5, a6) )
  {
    if ( *__errno_location() )
      err(status, "%s: '%s'", a2, a1);
    errx(status, "%s: '%s'", a2, a1);
  }
  return v7;
}

signed __int64 __fastcall sub_9620(char *a1, _QWORD *a2, __int64 a3)
{
  long double v3; // fst7
  signed __int64 result; // rax

  v3 = sub_94A0(a1, a3);
  result = (signed __int64)v3;
  *a2 = (signed __int64)v3;
  a2[1] = (signed __int64)((v3 - (long double)(signed __int64)v3) * 1000000.0);
  return result;
}

_BYTE *__fastcall sub_96A0(__int16 a1, _BYTE *a2)
{
  _BYTE *result; // rax
  int v3; // edx
  _BYTE *v4; // r13
  _BYTE *v5; // r12
  _BYTE *v6; // rbp
  _BYTE *v7; // rbx
  _BYTE *v8; // r11
  _BYTE *v9; // r10
  _BYTE *v10; // r8
  _BYTE *v11; // rsi
  _BYTE *v12; // rcx
  _BYTE *v13; // r9
  int v14; // edx
  unsigned int v15; // edx
  int v16; // edx
  unsigned int v17; // edx
  int v18; // edx
  unsigned int v19; // edx

  result = a2;
  v3 = a1 & 0xF000;
  v4 = a2 + 1;
  v5 = a2 + 2;
  v6 = a2 + 3;
  v7 = a2 + 4;
  v8 = a2 + 5;
  v9 = a2 + 6;
  v10 = a2 + 7;
  v11 = a2 + 8;
  v12 = result + 9;
  switch ( v3 )
  {
    case 16384:
      *result = 100;
      v13 = result + 10;
      break;
    case 40960:
      v13 = result + 10;
      *result = 108;
      break;
    case 8192:
      *result = 99;
      v13 = result + 10;
      break;
    case 24576:
      *result = 98;
      v13 = result + 10;
      break;
    case 49152:
      *result = 115;
      v13 = result + 10;
      break;
    case 4096:
      *result = 112;
      v13 = result + 10;
      break;
    case 32768:
      *result = 45;
      v13 = result + 10;
      break;
    default:
      v13 = result + 9;
      v12 = v11;
      v11 = v10;
      v10 = v9;
      v9 = v8;
      v8 = v7;
      v7 = v6;
      v6 = v5;
      v5 = v4;
      v4 = result;
      break;
  }
  *v4 = (a1 & 0x100u) < 1 ? 45 : 114;
  *v5 = (a1 & 0x80u) < 1 ? 45 : 119;
  v14 = -((a1 & 0x40u) < 1);
  if ( a1 & 0x800 )
    v15 = (v14 & 0xFFFFFFE0) + 115;
  else
    v15 = (v14 & 0xFFFFFFB5) + 120;
  *v6 = v15;
  *v7 = (a1 & 0x20u) < 1 ? 45 : 114;
  *v8 = (a1 & 0x10u) < 1 ? 45 : 119;
  v16 = -((a1 & 8u) < 1);
  if ( a1 & 0x400 )
    v17 = (v16 & 0xFFFFFFE0) + 115;
  else
    v17 = (v16 & 0xFFFFFFB5) + 120;
  *v9 = v17;
  *v10 = (a1 & 4u) < 1 ? 45 : 114;
  *v11 = (a1 & 2u) < 1 ? 45 : 119;
  v18 = -((a1 & 1u) < 1);
  if ( a1 & 0x200 )
    v19 = (v18 & 0xFFFFFFE0) + 116;
  else
    v19 = (v18 & 0xFFFFFFB5) + 120;
  *v12 = v19;
  *v13 = 0;
  return result;
}

char *__fastcall sub_98D0(char a1, unsigned __int64 a2)
{
  char *v2; // r8
  _BYTE *v3; // r11
  unsigned int v4; // ecx
  signed int v5; // er10
  unsigned __int64 v6; // r12
  __int64 v7; // r9
  char v8; // dl
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  struct lconv *v12; // rax
  char *v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  size_t v17; // rax
  char *v18; // rcx
  unsigned __int64 v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // r8
  char s[5]; // [rsp+Bh] [rbp-5Dh]
  char v24[5]; // [rsp+Ch] [rbp-5Ch]
  char v25[40]; // [rsp+10h] [rbp-58h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a1 & 2 )
  {
    s[0] = 32;
    v2 = v24;
  }
  else
  {
    v2 = s;
  }
  if ( a2 <= 0x3FF )
  {
    v7 = (unsigned int)a2;
    *(_WORD *)v2 = 66;
    goto LABEL_35;
  }
  if ( a2 <= 0xFFFFF )
  {
    v5 = 20;
LABEL_43:
    v4 = v5 - 10;
    v3 = v2 + 1;
    goto LABEL_9;
  }
  if ( a2 <= 0x3FFFFFFF )
  {
    v5 = 30;
    goto LABEL_43;
  }
  if ( a2 <= 0xFFFFFFFFFFLL )
  {
    v5 = 40;
    goto LABEL_43;
  }
  if ( a2 <= 0x3FFFFFFFFFFFFLL )
  {
    v5 = 50;
    goto LABEL_43;
  }
  v3 = v2 + 1;
  v4 = 60;
  LOBYTE(v5) = 70;
  if ( a2 <= 0xFFFFFFFFFFFFFFFLL )
  {
    v5 = 60;
    goto LABEL_43;
  }
LABEL_9:
  v6 = a2 >> v4;
  v7 = (unsigned int)(a2 >> v4);
  v8 = aBkmgtpe[v4 / 0xA];
  v9 = ~(-1LL << v4) & a2;
  *v2 = v8;
  if ( v8 != 66 && a1 & 1 )
  {
    v3 = v2 + 3;
    *(_WORD *)(v2 + 1) = 17001;
  }
  *v3 = 0;
  if ( !v9 )
    goto LABEL_35;
  if ( v9 > 0x4189374BC6A7EELL )
  {
    v10 = 1000 * (v9 >> 10) >> ((unsigned __int8)v5 - 20);
    if ( a1 & 4 )
      goto LABEL_15;
  }
  else
  {
    v10 = 1000 * v9 >> v4;
    if ( a1 & 4 )
    {
LABEL_15:
      v11 = (unsigned __int64)(0xCCCCCCCCCCCCCCCDLL * (unsigned __int128)(v10 + 5) >> 64) >> 3;
      goto LABEL_16;
    }
  }
  v11 = 10 * ((unsigned __int64)(0x28F5C28F5C28F5C3LL * (unsigned __int128)((v10 + 50) >> 2) >> 64) >> 2);
LABEL_16:
  if ( v11 == 100 )
  {
    v7 = (unsigned int)(v6 + 1);
    goto LABEL_35;
  }
  if ( !v11 )
  {
LABEL_35:
    __snprintf_chk(v25, 32LL, 1LL, 32LL, "%d%s", v7, s);
    return strdup(v25);
  }
  v12 = localeconv();
  v13 = ".";
  if ( v12 )
  {
    v13 = v12->decimal_point;
    if ( v12->decimal_point )
    {
      if ( !*v13 )
        v13 = ".";
    }
    else
    {
      v13 = ".";
    }
  }
  v14 = __snprintf_chk(v25, 32LL, 1LL, 32LL, "%d%s%02lu", (unsigned int)v6, v13);
  v15 = v14;
  v16 = v14 - 1;
  if ( (unsigned int)v16 > 0x1E )
  {
    v25[0] = 0;
  }
  else
  {
    if ( v25[v16] == 48 )
    {
      v25[v15] = 0;
      v15 = v16;
    }
    v17 = strlen(s);
    if ( v17 )
    {
      v18 = &v25[v15];
      if ( 31 - v15 <= v17 )
        v17 = 31 - v15;
      if ( (unsigned int)v17 >= 8 )
      {
        *(_QWORD *)v18 = *(_QWORD *)s;
        *(_QWORD *)&v18[(unsigned int)v17 - 8] = *(_QWORD *)&s[(unsigned int)v17 - 8];
        v20 = (unsigned __int64)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (((_DWORD)v17 + (_DWORD)v18 - (_DWORD)v20) & 0xFFFFFFF8) >= 8 )
        {
          v21 = 0;
          do
          {
            v22 = v21;
            v21 += 8;
            *(_QWORD *)(v20 + v22) = *(_QWORD *)(s - &v18[-v20] + v22);
          }
          while ( v21 < (((_DWORD)v17 + (_DWORD)v18 - (_DWORD)v20) & 0xFFFFFFF8) );
        }
      }
      else if ( v17 & 4 )
      {
        *(_DWORD *)v18 = *(_DWORD *)s;
        *(_DWORD *)&v18[(unsigned int)v17 - 4] = *(_DWORD *)&s[(unsigned int)v17 - 4];
      }
      else if ( (_DWORD)v17 )
      {
        *v18 = s[0];
        if ( v17 & 2 )
          *(_WORD *)&v18[(unsigned int)v17 - 2] = *(_WORD *)&s[(unsigned int)v17 - 2];
      }
      v18[v17] = 0;
    }
  }
  return strdup(v25);
}

signed __int64 __fastcall sub_9CA0(_BYTE *a1, __int64 a2, unsigned __int64 a3, __int64 (__fastcall *a4)(unsigned __int64, _BYTE *))
{
  _BYTE *v4; // rbx
  char v5; // al
  __int64 (__fastcall *v6)(unsigned __int64, _BYTE *); // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  char v10; // dl
  _BYTE *v11; // rdx
  _BYTE *v12; // r15
  int v13; // eax

  if ( a1 )
  {
    v4 = a1;
    v5 = *a1;
    if ( !*a1 )
      return 0xFFFFFFFFLL;
    v6 = a4;
    v7 = a3;
    if ( a3 == 0 || a2 == 0 || !a4 )
      return 0xFFFFFFFFLL;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v7 <= v9 )
        return 4294967294LL;
      v10 = v4[1];
      if ( !v8 )
        v8 = (unsigned __int64)v4;
      if ( v5 == 44 )
        break;
      if ( !v10 )
        goto LABEL_11;
LABEL_17:
      v11 = v4 + 1;
LABEL_18:
      v4 = v11;
      if ( v11 )
      {
        v5 = *v11;
        if ( *v11 )
          continue;
      }
      return (unsigned int)v9;
    }
    v12 = v4;
    if ( v10 )
    {
      if ( v8 >= (unsigned __int64)v4 )
        return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_11:
      v11 = v4 + 1;
      v12 = v4 + 1;
      if ( v4 == (_BYTE *)-1LL )
        goto LABEL_18;
      if ( v8 >= (unsigned __int64)v12 )
        return 0xFFFFFFFFLL;
    }
    v13 = v6(v8, &v12[-v8]);
    if ( v13 == -1 )
      return 0xFFFFFFFFLL;
    *(_DWORD *)(a2 + 4 * v9++) = v13;
    if ( v12 && !*v12 )
      return (unsigned int)v9;
    v8 = 0LL;
    goto LABEL_17;
  }
  return 0xFFFFFFFFLL;
}

signed __int64 __fastcall sub_9DB0(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4, __int64 (__fastcall *a5)(unsigned __int64, _BYTE *))
{
  char v5; // al
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r9
  signed __int64 result; // rax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v5 = *a1;
  v6 = a4;
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v7 = *a4;
  if ( *a4 > a3 )
    return 0xFFFFFFFFLL;
  if ( v5 == 43 )
  {
    ++a1;
    a3 -= v7;
    a2 += 4 * v7;
  }
  else
  {
    *a4 = 0LL;
  }
  result = sub_9CA0(a1, a2, a3, a5);
  if ( (signed int)result > 0 )
    *v6 += (signed int)result;
  return result;
}

__int64 __fastcall sub_9E10(_BYTE *a1, __int64 a2, __int64 (__fastcall *a3)(unsigned __int64, _BYTE *))
{
  __int64 (__fastcall *v3)(unsigned __int64, _BYTE *); // r12
  _BYTE *v4; // rbx
  char v5; // al
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rbp
  _BYTE *v8; // r15
  char v9; // dl
  __int64 result; // rax
  char v11; // al

  v3 = a3;
  if ( a2 == 0 || a3 == 0LL )
    return 4294967274LL;
  v4 = a1;
  if ( !a1 )
    return 4294967274LL;
  v5 = *a1;
  v6 = 0LL;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    if ( !v6 )
      v6 = (unsigned __int64)v4;
    v7 = ++v4 - 1;
    v8 = v4;
    v9 = *v4;
    if ( v5 == 44 )
      break;
LABEL_7:
    if ( !v9 )
    {
      v7 = v4;
      if ( v6 < (unsigned __int64)v4 )
        goto LABEL_9;
      return 0xFFFFFFFFLL;
    }
    if ( v4 )
    {
      v5 = v9;
      if ( v9 )
        continue;
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v9 )
      v7 = v4;
    if ( v6 >= (unsigned __int64)v7 )
      return 0xFFFFFFFFLL;
LABEL_9:
    result = v3(v6, &v7[-v6]);
    if ( (signed int)result < 0 )
      return result;
    *(_BYTE *)(a2 + ((signed int)result >> 3)) |= 1 << (result & 7);
    if ( v7 && !*v7 )
      return 0LL;
    v11 = *v4;
    if ( !*v4 )
      return 0LL;
    ++v4;
    v6 = (unsigned __int64)v8;
    v7 = v4 - 1;
    v8 = v4;
    v9 = *v4;
    if ( v11 != 44 )
      goto LABEL_7;
  }
}

__int64 __fastcall sub_9FF0(char *nptr, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rbp
  int v5; // er13
  int *v6; // rax
  int *v7; // r14
  int v8; // eax
  __int64 result; // rax
  const char *v10; // rbx
  char *v11; // [rsp+0h] [rbp-48h]
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v11 = 0LL;
  if ( !nptr )
    return 0LL;
  v4 = a3;
  *a2 = a4;
  *a3 = a4;
  v5 = a4;
  v6 = __errno_location();
  *v6 = 0;
  v7 = v6;
  if ( *nptr == 58 )
  {
    v10 = nptr + 1;
LABEL_11:
    *v4 = strtol(v10, &v11, 10);
    if ( !*v7 && v11 )
      return (unsigned int)-(v11 == v10 || *v11 != 0);
    return 0xFFFFFFFFLL;
  }
  v8 = strtol(nptr, &v11, 10);
  *a2 = v8;
  *v4 = v8;
  result = (unsigned int)*v7;
  if ( !(_DWORD)result && v11 != nptr && v11 )
  {
    if ( *v11 == 58 )
    {
      if ( !v11[1] )
      {
        *v4 = v5;
        return result;
      }
    }
    else if ( *v11 != 45 )
    {
      return 0LL;
    }
    v10 = v11 + 1;
    v11 = 0LL;
    *v7 = 0;
    goto LABEL_11;
  }
  return 0xFFFFFFFFLL;
}

signed __int64 __fastcall sub_A130(char *a1, char *a2)
{
  char *v2; // rbx
  const char *v3; // r12
  const char *v4; // rax
  size_t v5; // rbp
  __int64 v6; // r15
  const char *v7; // rbx
  size_t n; // [rsp+8h] [rbp-50h]
  __int64 v10; // [rsp+10h] [rbp-48h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( !a2 || !a1 )
    return 0LL;
  v2 = a2;
  while ( 1 )
  {
    v3 = sub_86D0(a1, (signed __int64 *)&n);
    v4 = sub_86D0(v2, &v10);
    v5 = n;
    v6 = v10;
    v7 = v4;
    if ( !(v10 + n) )
      break;
    if ( v10 + n == 1 )
    {
      if ( v3 && *v3 == 47 )
        break;
      if ( !v4 )
        return 0LL;
      if ( *v4 == 47 )
        break;
    }
    if ( v4 != 0LL && v3 != 0LL && n == v10 && !strncmp(v3, v4, n) )
    {
      v2 = (char *)&v7[v6];
      a1 = (char *)&v3[v5];
      if ( &v3[v5] )
      {
        if ( v2 )
          continue;
      }
    }
    return 0LL;
  }
  return 1LL;
}

char *__fastcall sub_A240(__int128 src, size_t n)
{
  size_t v2; // r12
  size_t v3; // rbp
  _BYTE *v4; // rax
  _BYTE *v5; // r15

  if ( src == 0 )
  {
    *(_QWORD *)&src = "";
    return strdup((const char *)src);
  }
  if ( !(_QWORD)src )
    return strndup(*((const char **)&src + 1), n);
  if ( !*((_QWORD *)&src + 1) )
    return strdup((const char *)src);
  v2 = n;
  v3 = strlen((const char *)src);
  if ( v2 > ~v3 )
    return 0LL;
  v4 = malloc(v2 + v3 + 1);
  v5 = v4;
  if ( v4 )
  {
    memcpy(v4, (const void *)src, v3);
    memcpy(&v5[v3], *((const void **)&src + 1), v2);
    v5[v2 + v3] = 0;
  }
  return v5;
}

char *__fastcall sub_A320(__int128 src)
{
  size_t v1; // rdx

  v1 = 0LL;
  if ( *((_QWORD *)&src + 1) )
    v1 = strlen(*((const char **)&src + 1));
  return sub_A240(src, v1);
}

char *sub_A360(__int128 src, ...)
{
  int v1; // eax
  char *v2; // rbx
  void *ptr; // [rsp+8h] [rbp-E0h]
  gcc_va_list va; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v6; // [rsp+28h] [rbp-C0h]

  va_start(va, src);
  v6 = __readfsqword(0x28u);
  v1 = __vasprintf_chk(&ptr, 1LL, *((_QWORD *)&src + 1), va);
  if ( v1 < 0 )
    return 0LL;
  *((_QWORD *)&src + 1) = ptr;
  v2 = sub_A240(src, v1);
  free(ptr);
  return v2;
}

size_t __fastcall sub_A500(const char **a1, _QWORD *a2, const char *a3, int a4)
{
  const char *v4; // rbx
  const char *v5; // r13
  int v6; // er15
  size_t v7; // rbx
  char v8; // r12
  __int64 v9; // rax
  char v10; // dl
  const char *v11; // r12
  size_t v12; // rax
  __int64 v14; // rax
  const char *v15; // r12
  char v16; // [rsp+6h] [rbp-42h]
  char v17; // [rsp+7h] [rbp-41h]
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v4 = *a1;
  v18 = __readfsqword(0x28u);
  if ( !*v4 )
    return 0LL;
  v5 = a3;
  v6 = a4;
  v7 = (size_t)&v4[strspn(v4, a3)];
  v8 = *(_BYTE *)v7;
  if ( !*(_BYTE *)v7 )
    goto LABEL_15;
  if ( !v6 )
  {
    v12 = strcspn((const char *)v7, v5);
    *a2 = v12;
    *a1 = (const char *)(v7 + v12);
    return v7;
  }
  if ( !strchr("'\"", v8) )
  {
    v14 = sub_8760((_BYTE *)v7, v5);
    v15 = (const char *)(v7 + v14);
    *a2 = v14;
    if ( !*(_BYTE *)(v7 + v14) || strchr(v5, *(char *)(v7 + v14)) )
    {
      *a1 = v15;
      return v7;
    }
LABEL_15:
    *a1 = (const char *)v7;
    return 0LL;
  }
  v16 = v8;
  v17 = 0;
  v9 = sub_8760((_BYTE *)(v7 + 1), &v16);
  *a2 = v9;
  v10 = *(_BYTE *)(v7 + v9 + 1);
  if ( !v10 )
    goto LABEL_15;
  if ( v8 != v10 )
    goto LABEL_15;
  v11 = (const char *)(v7 + v9 + 2);
  if ( *v11 )
  {
    if ( !strchr(v5, *v11) )
      goto LABEL_15;
  }
  *a1 = v11;
  ++v7;
  return v7;
}

__int64 __fastcall sub_A660(FILE *stream)
{
  int v1; // eax

  do
  {
    v1 = fgetc(stream);
    if ( v1 == -1 )
      return 1LL;
  }
  while ( v1 != 10 );
  return 0LL;
}

signed __int64 __fastcall sub_A770(_BYTE **a1, unsigned __int64 *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _BYTE *v5; // r9
  char v6; // r10
  signed __int64 result; // rax
  _BYTE *v8; // r11
  unsigned __int64 v9; // rbx
  _BYTE *v10; // r10
  _BYTE *v11; // rsi

  if ( !a1 )
    __assert_fail("optstr", "lib/strutils.c", 0x450u, "ul_optstr_next");
  v5 = *a1;
  if ( !*a1 )
    __assert_fail("*optstr", "lib/strutils.c", 0x451u, "ul_optstr_next");
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 != 44 )
      break;
    if ( !++v5 )
      return 1LL;
  }
  result = 0LL;
  v8 = 0LL;
  v9 = (unsigned __int64)v5;
  if ( !v6 )
    return 1LL;
  while ( 1 )
  {
    if ( v6 == 34 )
      result = (unsigned int)result ^ 1;
    if ( (_DWORD)result )
    {
      v10 = v5 + 1;
      goto LABEL_39;
    }
    if ( v8 || v9 >= (unsigned __int64)v5 || v6 != 61 )
    {
      if ( v6 == 44 )
        goto LABEL_26;
    }
    else
    {
      v8 = v5;
    }
    v10 = v5 + 1;
    if ( !v5[1] && v5 != (_BYTE *)-1LL )
      break;
LABEL_39:
    v5 = v10;
    if ( v10 )
    {
      v6 = *v10;
      if ( v6 )
        continue;
    }
    return 1LL;
  }
  ++v5;
LABEL_26:
  if ( v9 >= (unsigned __int64)v5 )
    return 4294967274LL;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
  {
    v11 = &v5[-v9];
    if ( v8 )
      v11 = &v8[-v9];
    *a3 = v11;
  }
  *a1 = &v5[-(*v5 < 1u) + 1];
  if ( v8 )
  {
    if ( a4 )
      *a4 = v8 + 1;
    if ( a5 )
      *a5 = v5 - v8 - 1;
  }
  return result;
}

__int64 __fastcall sub_A920(char *s, _QWORD *a2)
{
  char *v2; // rcx
  signed int v3; // ebx
  const char *v4; // rbp
  int *v5; // rax
  int *v6; // r14
  int v7; // eax
  char *v8; // rbx
  __int64 v9; // r14
  const char *v10; // r15
  char *v11; // rbx
  size_t v12; // rax
  size_t v13; // rbp
  char *v14; // rsi
  unsigned __int64 j; // rdx
  char *v17; // rbp
  int v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 i; // [rsp+20h] [rbp-58h]
  _QWORD *v22; // [rsp+28h] [rbp-50h]
  char *endptr; // [rsp+30h] [rbp-48h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v22 = a2;
  if ( !s )
    __assert_fail(off_12692, "lib/timeutils.c", 0x4Eu, "parse_sec");
  v2 = s;
  v3 = 0;
  for ( i = 0LL; ; i += (_QWORD)v14 * v19 + j )
  {
    v4 = &v2[strspn(v2, " \t\n\r")];
    if ( !*v4 )
      break;
    v5 = __errno_location();
    v6 = v5;
    *v5 = 0;
    v19 = strtoll(v4, &endptr, 10);
    v7 = *v6;
    if ( *v6 > 0 )
      return (unsigned int)-v7;
    if ( v19 < 0 )
      return 4294967262LL;
    v8 = endptr;
    if ( *endptr == 46 )
    {
      v17 = endptr + 1;
      *v6 = 0;
      v20 = strtoll(v8 + 1, &endptr, 10);
      v7 = *v6;
      if ( *v6 > 0 )
        return (unsigned int)-v7;
      if ( v20 < 0 )
        return 4294967262LL;
      v8 = endptr;
      if ( endptr == v17 )
        return 4294967274LL;
      v18 = (_DWORD)endptr - (_DWORD)v17;
    }
    else
    {
      if ( endptr == v4 )
        return 4294967274LL;
      v18 = 0;
      v20 = 0LL;
    }
    v9 = 0LL;
    v10 = "seconds";
    v11 = &v8[strspn(v8, " \t\n\r")];
    endptr = v11;
    while ( 1 )
    {
      if ( v10 )
      {
        v12 = strlen(v10);
        v13 = v12;
        if ( v11 )
        {
          if ( v12 )
          {
            if ( !strncmp(v11, v10, v12) )
            {
              v2 = &v11[v13];
              if ( &v11[v13] )
                break;
            }
          }
        }
      }
      if ( ++v9 == 28 )
        return 4294967274LL;
      v10 = off_2166A0[2 * v9];
    }
    v14 = off_2166A0[2 * (unsigned int)v9 + 1];
    for ( j = (_QWORD)v14 * v20; v18; --v18 )
      j = (unsigned __int64)(j * (unsigned __int128)0xCCCCCCCCCCCCCCCDLL >> 64) >> 3;
    v3 = 1;
  }
  if ( !v3 )
    return 4294967274LL;
  *v22 = i;
  return 0LL;
}

__int64 __fastcall sub_AB80(char *s1, __int64 *a2)
{
  __int64 *v2; // rbp
  char *v3; // r14
  bool v4; // cf
  bool v5; // zf
  const char *v6; // rdi
  signed __int64 v7; // rcx
  char *v8; // rsi
  char v9; // al
  bool v10; // cf
  bool v11; // zf
  const char *v12; // rdi
  signed __int64 v13; // rcx
  char *v14; // rsi
  char v15; // al
  bool v16; // cf
  bool v17; // zf
  time_t v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 result; // rax
  const char *v23; // rdi
  signed __int64 v24; // rcx
  char *v25; // rsi
  char v26; // al
  bool v27; // cf
  bool v28; // zf
  const char *v29; // rdi
  signed __int64 v30; // rcx
  char *v31; // rsi
  size_t v32; // rax
  char *v33; // rax
  char *v34; // r12
  unsigned int v35; // ST00_4
  __int64 v36; // r12
  const char *i; // rbx
  size_t v38; // rax
  size_t v39; // r15
  signed int v40; // er12
  int v41; // er15
  int v42; // er13
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  int v53; // [rsp+0h] [rbp-C8h]
  int v54; // [rsp+Ch] [rbp-BCh]
  int v55; // [rsp+10h] [rbp-B8h]
  int v56; // [rsp+14h] [rbp-B4h]
  int v57; // [rsp+18h] [rbp-B0h]
  int v58; // [rsp+1Ch] [rbp-ACh]
  __int64 v59; // [rsp+20h] [rbp-A8h]
  const char *v60; // [rsp+28h] [rbp-A0h]
  time_t timer; // [rsp+38h] [rbp-90h]
  __int64 v62; // [rsp+40h] [rbp-88h]
  unsigned __int64 v63; // [rsp+48h] [rbp-80h]
  struct tm tp; // [rsp+50h] [rbp-78h]
  unsigned __int64 v65; // [rsp+88h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v62 = 0LL;
  v63 = 0LL;
  if ( !s1 )
    __assert_fail(off_12692, "lib/timeutils.c", 0xC5u, "parse_timestamp");
  v2 = a2;
  if ( !a2 )
LABEL_76:
    __assert_fail("usec", "lib/timeutils.c", 0xC6u, "parse_timestamp");
  v3 = s1;
  timer = time(0LL);
  localtime_r(&timer, &tp);
  v6 = "now";
  v7 = 4LL;
  v8 = v3;
  tp.tm_isdst = -1;
  do
  {
    if ( !v7 )
      break;
    v4 = (unsigned __int8)*v8 < *v6;
    v5 = *v8++ == *v6++;
    --v7;
  }
  while ( v5 );
  v9 = (!v4 && !v5) - v4;
  v10 = 0;
  v11 = v9 == 0;
  if ( !v9 )
    goto LABEL_12;
  v12 = "today";
  v13 = 6LL;
  v14 = v3;
  do
  {
    if ( !v13 )
      break;
    v10 = (unsigned __int8)*v14 < *v12;
    v11 = *v14++ == *v12++;
    --v13;
  }
  while ( v11 );
  v15 = (!v10 && !v11) - v10;
  v16 = 0;
  v17 = v15 == 0;
  if ( !v15 )
    goto LABEL_11;
  v23 = "yesterday";
  v24 = 10LL;
  v25 = v3;
  do
  {
    if ( !v24 )
      break;
    v16 = (unsigned __int8)*v25 < *v23;
    v17 = *v25++ == *v23++;
    --v24;
  }
  while ( v17 );
  v26 = (!v16 && !v17) - v16;
  v27 = 0;
  v28 = v26 == 0;
  if ( !v26 )
  {
    --tp.tm_mday;
LABEL_11:
    *(_QWORD *)&tp.tm_sec = 0LL;
    tp.tm_hour = 0;
    goto LABEL_12;
  }
  v29 = "tomorrow";
  v30 = 9LL;
  v31 = v3;
  do
  {
    if ( !v30 )
      break;
    v27 = (unsigned __int8)*v31 < *v29;
    v28 = *v31++ == *v29++;
    --v30;
  }
  while ( v28 );
  if ( (!v27 && !v28) == v27 )
  {
    ++tp.tm_mday;
    *(_QWORD *)&tp.tm_sec = 0LL;
    tp.tm_hour = 0;
    goto LABEL_12;
  }
  if ( *v3 == 43 )
  {
    result = sub_A920(v3 + 1, &v62);
    if ( (signed int)result < 0 )
      goto LABEL_16;
    goto LABEL_12;
  }
  if ( *v3 == 45 )
  {
    result = sub_A920(v3 + 1, &v63);
    if ( (signed int)result < 0 )
      goto LABEL_16;
LABEL_12:
    v18 = mktime(&tp);
    timer = v18;
    if ( v18 != -1 )
      goto LABEL_13;
    goto LABEL_58;
  }
  v32 = strlen(v3);
  if ( v32 <= 3 || *(_DWORD *)&v3[v32 - 4] != 1869046048 )
  {
    v36 = 0LL;
    for ( i = "Sunday"; ; i = (&off_216860)[2 * v36] )
    {
      if ( i )
      {
        v38 = strlen(i);
        v39 = v38;
        if ( v38 )
        {
          if ( !strncasecmp(v3, i, v38) && &v3[v39] && v3[v39] == 32 )
          {
            v3 += v39 + 1;
            v40 = (signed int)(&off_216860)[2 * (unsigned int)v36 + 1];
            goto LABEL_42;
          }
        }
      }
      if ( ++v36 == 14 )
        break;
    }
    v40 = -1;
LABEL_42:
    v41 = tp.tm_sec;
    v42 = tp.tm_hour;
    v53 = tp.tm_min;
    v54 = tp.tm_mday;
    v55 = tp.tm_mon;
    v56 = tp.tm_year;
    v57 = tp.tm_wday;
    v58 = tp.tm_yday;
    v59 = tp.tm_gmtoff;
    v60 = tp.tm_zone;
    v43 = strptime(v3, "%y-%m-%d %H:%M:%S", &tp);
    if ( !v43 || *v43 )
    {
      tp.tm_sec = v41;
      tp.tm_hour = v42;
      tp.tm_isdst = -1;
      tp.tm_min = v53;
      tp.tm_mday = v54;
      tp.tm_mon = v55;
      tp.tm_year = v56;
      tp.tm_wday = v57;
      tp.tm_yday = v58;
      tp.tm_gmtoff = v59;
      tp.tm_zone = v60;
      v44 = strptime(v3, "%Y-%m-%d %H:%M:%S", &tp);
      if ( !v44 || *v44 )
      {
        tp.tm_sec = v41;
        tp.tm_hour = v42;
        tp.tm_isdst = -1;
        tp.tm_min = v53;
        tp.tm_mday = v54;
        tp.tm_mon = v55;
        tp.tm_year = v56;
        tp.tm_wday = v57;
        tp.tm_yday = v58;
        tp.tm_gmtoff = v59;
        tp.tm_zone = v60;
        v45 = strptime(v3, "%Y-%m-%dT%H:%M:%S", &tp);
        if ( !v45 || *v45 )
        {
          tp.tm_sec = v41;
          tp.tm_hour = v42;
          tp.tm_isdst = -1;
          tp.tm_min = v53;
          tp.tm_mday = v54;
          tp.tm_mon = v55;
          tp.tm_year = v56;
          tp.tm_wday = v57;
          tp.tm_yday = v58;
          tp.tm_gmtoff = v59;
          tp.tm_zone = v60;
          v46 = strptime(v3, "%y-%m-%d %H:%M", &tp);
          if ( v46 && !*v46 )
            goto LABEL_74;
          tp.tm_sec = v41;
          tp.tm_hour = v42;
          tp.tm_isdst = -1;
          tp.tm_min = v53;
          tp.tm_mday = v54;
          tp.tm_mon = v55;
          tp.tm_year = v56;
          tp.tm_wday = v57;
          tp.tm_yday = v58;
          tp.tm_gmtoff = v59;
          tp.tm_zone = v60;
          v47 = strptime(v3, "%Y-%m-%d %H:%M", &tp);
          if ( v47 )
          {
            if ( !*v47 )
            {
LABEL_74:
              tp.tm_sec = 0;
              goto LABEL_55;
            }
          }
          tp.tm_sec = v41;
          tp.tm_hour = v42;
          tp.tm_isdst = -1;
          tp.tm_min = v53;
          tp.tm_mday = v54;
          tp.tm_mon = v55;
          tp.tm_year = v56;
          tp.tm_wday = v57;
          tp.tm_yday = v58;
          tp.tm_gmtoff = v59;
          tp.tm_zone = v60;
          v48 = strptime(v3, "%y-%m-%d", &tp);
          if ( v48 && !*v48 )
            goto LABEL_80;
          tp.tm_sec = v41;
          tp.tm_hour = v42;
          tp.tm_isdst = -1;
          tp.tm_min = v53;
          tp.tm_mday = v54;
          tp.tm_mon = v55;
          tp.tm_year = v56;
          tp.tm_wday = v57;
          tp.tm_yday = v58;
          tp.tm_gmtoff = v59;
          tp.tm_zone = v60;
          v49 = strptime(v3, "%Y-%m-%d", &tp);
          if ( !v49 )
            goto LABEL_81;
          if ( !*v49 )
          {
LABEL_80:
            *(_QWORD *)&tp.tm_sec = 0LL;
            tp.tm_hour = 0;
          }
          else
          {
LABEL_81:
            tp.tm_sec = v41;
            tp.tm_hour = v42;
            tp.tm_isdst = -1;
            tp.tm_min = v53;
            tp.tm_mday = v54;
            tp.tm_mon = v55;
            tp.tm_year = v56;
            tp.tm_wday = v57;
            tp.tm_yday = v58;
            tp.tm_gmtoff = v59;
            tp.tm_zone = v60;
            v50 = strptime(v3, "%H:%M:%S", &tp);
            if ( !v50 || *v50 )
            {
              tp.tm_sec = v41;
              tp.tm_hour = v42;
              tp.tm_isdst = -1;
              tp.tm_min = v53;
              tp.tm_mday = v54;
              tp.tm_mon = v55;
              tp.tm_year = v56;
              tp.tm_wday = v57;
              tp.tm_yday = v58;
              tp.tm_gmtoff = v59;
              tp.tm_zone = v60;
              v51 = strptime(v3, "%H:%M", &tp);
              if ( !v51 || *v51 )
              {
                tp.tm_sec = v41;
                tp.tm_hour = v42;
                tp.tm_isdst = -1;
                tp.tm_min = v53;
                tp.tm_mday = v54;
                tp.tm_mon = v55;
                tp.tm_year = v56;
                tp.tm_wday = v57;
                tp.tm_yday = v58;
                tp.tm_gmtoff = v59;
                tp.tm_zone = v60;
                v52 = strptime(v3, "%Y%m%d%H%M%S", &tp);
                if ( !v52 || *v52 )
                  goto LABEL_58;
              }
              goto LABEL_74;
            }
          }
        }
      }
    }
LABEL_55:
    v18 = mktime(&tp);
    timer = v18;
    if ( v18 != -1 && (v40 < 0 || tp.tm_wday == v40) )
    {
LABEL_13:
      v19 = v62 + 1000000 * v18;
      v20 = v19 - v63;
      v4 = v63 < v19;
      v21 = 0LL;
      if ( v4 )
        v21 = v20;
      *v2 = v21;
      result = 0LL;
      goto LABEL_16;
    }
LABEL_58:
    result = 4294967274LL;
    goto LABEL_16;
  }
  v33 = strndup(v3, v32 - 4);
  v34 = v33;
  if ( !v33 )
  {
    result = 4294967284LL;
    goto LABEL_16;
  }
  v35 = sub_A920(v33, &v63);
  free(v34);
  result = v35;
  if ( (v35 & 0x80000000) == 0 )
    goto LABEL_12;
LABEL_16:
  if ( __readfsqword(0x28u) != v65 )
    goto LABEL_76;
  return result;
}

__int64 __fastcall sub_B3C0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 32) >= 0 )
    result = *(unsigned int *)(a1 + 40);
  return result;
}

signed __int64 __fastcall sub_B3D0(unsigned int *a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5)
{
  char v5; // bp
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  int v9; // eax
  char *v10; // rax
  const char *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // ST08_8
  __int64 v15; // ST00_8
  __int64 v16; // rax
  __int64 v17; // ST08_8
  __int64 v18; // ST00_8
  __int64 v19; // rax

  v5 = a3;
  v6 = a4;
  v7 = a5;
  if ( a3 & 1 )
  {
    v17 = a1[3];
    v18 = a1[4] + 1;
    v19 = (signed int)__snprintf_chk(a4, a5, 1LL, -1LL, "%4ld-%.2d-%.2d", (signed int)a1[5] + 1900LL);
    if ( (signed int)v19 > v7 )
      goto LABEL_10;
    v7 -= v19;
    v6 += v19;
  }
  if ( (v5 & 3) != 3 )
  {
    if ( !(v5 & 2) )
      goto LABEL_4;
LABEL_17:
    v14 = *a1;
    v15 = a1[1];
    v16 = (signed int)__snprintf_chk(v6, v7, 1LL, -1LL, "%02d:%02d:%02d", a1[2]);
    if ( (signed int)v16 > v7 )
      goto LABEL_10;
    v7 -= v16;
    v6 += v16;
    if ( !(v5 & 8) )
      goto LABEL_5;
LABEL_19:
    v12 = a2;
    v11 = ".%06ld";
    goto LABEL_12;
  }
  if ( !v7 )
    goto LABEL_10;
  --v7;
  *(_BYTE *)(++v6 - 1) = (v5 & 0x20u) < 1 ? 32 : 84;
  if ( v5 & 2 )
    goto LABEL_17;
LABEL_4:
  if ( v5 & 8 )
    goto LABEL_19;
LABEL_5:
  if ( !(v5 & 0x10) )
  {
    if ( !(v5 & 4) )
      return 0LL;
    goto LABEL_9;
  }
  v11 = ",%06ld";
  v12 = a2;
LABEL_12:
  v13 = (signed int)__snprintf_chk(v6, v7, 1LL, -1LL, v11, v12);
  if ( (signed int)v13 > v7 )
    goto LABEL_10;
  v7 -= v13;
  v6 += v13;
  if ( !(v5 & 4) )
    return 0LL;
LABEL_9:
  v9 = sub_B3C0((__int64)a1);
  if ( (signed int)__snprintf_chk(v6, v7, 1LL, -1LL, "%+03d:%02d", v9 / 3600) <= v7 )
    return 0LL;
LABEL_10:
  v10 = dcgettext(0LL, "format_iso_time: buffer overflow.", 5);
  warnx(v10, "format_iso_time: buffer overflow.");
  return 0xFFFFFFFFLL;
}

signed __int64 __fastcall sub_B6C0(const time_t *a1, char a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  struct tm *v6; // rax
  time_t v8; // rbx
  char *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-68h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v4 = a4;
  v5 = a3;
  v11 = __readfsqword(0x28u);
  if ( a2 & 0x40 )
    v6 = gmtime_r(a1, (struct tm *)&v10);
  else
    v6 = localtime_r(a1, (struct tm *)&v10);
  if ( v6 )
    return sub_B3D0((unsigned int *)&v10, 0LL, a2, v5, v4);
  v8 = *a1;
  v9 = dcgettext(0LL, "time %ld is out of range.", 5);
  warnx(v9, v8);
  return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_B770(time_t *timer, struct timeval *tv, char a3, char *a4, size_t a5)
{
  char v5; // r14
  char *v6; // r13
  size_t v7; // r12
  int v8; // eax
  __int64 v10; // [rsp+0h] [rbp-B8h]
  unsigned int v11; // [rsp+8h] [rbp-B0h]
  int v12; // [rsp+14h] [rbp-A4h]
  int v13; // [rsp+1Ch] [rbp-9Ch]
  struct tm tp; // [rsp+40h] [rbp-78h]
  unsigned __int64 v15; // [rsp+78h] [rbp-40h]

  v5 = a3;
  v6 = a4;
  v7 = a5;
  v15 = __readfsqword(0x28u);
  if ( !tv->tv_sec )
    gettimeofday(tv, 0LL);
  localtime_r(timer, (struct tm *)&v10);
  localtime_r(&tv->tv_sec, &tp);
  if ( v13 != tp.tm_yday )
  {
    if ( v12 == tp.tm_year )
    {
      if ( v5 & 2 )
        v8 = strftime(v6, v7, "%b%d/%H:%M", (const struct tm *)&v10);
      else
        v8 = strftime(v6, v7, "%b%d", (const struct tm *)&v10);
      return (unsigned int)-(v8 <= 0);
    }
LABEL_10:
    v8 = strftime(v6, v7, "%Y-%b%d", (const struct tm *)&v10);
    return (unsigned int)-(v8 <= 0);
  }
  if ( v12 != tp.tm_year )
    goto LABEL_10;
  return (unsigned int)-((signed int)__snprintf_chk(v6, v7, 1LL, -1LL, "%02d:%02d", v11) > v7);
}

unsigned __int64 sub_B8C0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v4; // [rsp+18h] [rbp-D0h]

  v4 = __readfsqword(0x28u);
  if ( a1 && !(dword_2171C0 & 0x1000000) )
    __fprintf_chk(stderr, 1LL, "[%p]: ", a1);
  va_start(va, a2);
  __vfprintf_chk(stderr, 1LL, a2, va);
  fputc(10, stderr);
  return __readfsqword(0x28u) ^ v4;
}

unsigned __int64 sub_B9C0(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]

  va_start(va, a1);
  v3 = __readfsqword(0x28u);
  __vfprintf_chk(stderr, 1LL, a1, va);
  fputc(10, stderr);
  return __readfsqword(0x28u) ^ v3;
}

signed __int64 __fastcall sub_BAA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  signed __int64 v4; // rbx
  int *v5; // rax
  int *v6; // rbp
  signed int v7; // eax

  v3 = a3;
  v4 = a1 + 32;
  v5 = __errno_location();
  *v5 = 0;
  v6 = v5;
  v7 = __vsnprintf_chk(a1 + 32, 4096LL, 1LL, 4096LL, a2, v3);
  if ( v7 >= 0 )
  {
    if ( v7 > 4095 )
    {
      *v6 = 36;
      v4 = 0LL;
    }
    return v4;
  }
  v4 = 0LL;
  if ( *v6 )
    return v4;
  *v6 = 22;
  return 0LL;
}

_BYTE *__fastcall sub_BB30(__int64 a1)
{
  __int64 v1; // r9
  _BYTE *v2; // rbx
  _BYTE *v3; // rax
  signed int v4; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_BYTE **)(a1 + 8);
  if ( !v1 )
    return v2;
  if ( v2 )
  {
    v3 = &v2[*v2 == 47];
    v2 = (_BYTE *)(a1 + 32);
    v4 = __snprintf_chk(a1 + 32, 4096LL, 1LL, 4096LL, "%s/%s", v1);
    if ( v4 < 0 )
      return 0LL;
    if ( v4 > 4095 )
    {
      v2 = 0LL;
      *__errno_location() = 36;
    }
    return v2;
  }
  return *(_BYTE **)(a1 + 24);
}

unsigned __int64 sub_BBC0()
{
  char *v1; // rax
  int v2; // edx
  int v3; // eax
  _BYTE *v4; // rsi
  signed int v5; // ebx
  bool v6; // cf
  bool v7; // zf
  char *v8; // rdi
  signed __int64 v9; // rcx
  __uid_t v10; // ebp
  unsigned int v11; // eax
  __gid_t v12; // ebp
  _BYTE *v13; // [rsp+0h] [rbp-28h]
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !dword_2171C0 )
  {
    v1 = getenv("ULPATH_DEBUG");
    v2 = 2;
    if ( v1 )
    {
      v3 = strtoul(v1, &v13, 0);
      v4 = v13;
      v5 = v3;
      v6 = 0;
      v7 = v13 == 0LL;
      if ( v13 )
      {
        v8 = "all";
        v9 = 4LL;
        do
        {
          if ( !v9 )
            break;
          v6 = *v4 < (unsigned __int8)*v8;
          v7 = *v4++ == *v8++;
          --v9;
        }
        while ( v7 );
        if ( (!v6 && !v7) == v6 )
        {
          dword_2171C0 = 0xFFFF;
          v5 = 0xFFFF;
          goto LABEL_10;
        }
      }
      dword_2171C0 = v3;
      v2 = 2;
      if ( v3 )
      {
LABEL_10:
        v10 = getuid();
        if ( v10 != geteuid() || (v12 = getgid(), v12 != getegid()) )
        {
          dword_2171C0 = v5 | 0x1000000;
          v11 = getpid();
          __fprintf_chk(stderr, 1LL, "%d: %s: don't print memory addresses (SUID executable).\n", v11);
          v2 = dword_2171C0 | 2;
        }
        else
        {
          v2 = v5 | 2;
        }
        goto LABEL_12;
      }
    }
LABEL_12:
    dword_2171C0 = v2;
  }
  return __readfsqword(0x28u) ^ v14;
}

signed __int64 __fastcall sub_BD00(__int64 a1, const char *a2)
{
  char *v2; // rbp
  char v3; // al
  signed __int64 result; // rax
  unsigned int v5; // eax

  if ( *(_DWORD *)a1 >= 0 )
    __assert_fail("pc->dir_fd < 0", "lib/path.c", 0x6Du, "ul_path_set_prefix");
  if ( a2 )
  {
    v2 = strdup(a2);
    if ( !v2 )
      return 4294967284LL;
  }
  else
  {
    v2 = 0LL;
  }
  free(*(void **)(a1 + 24));
  v3 = dword_2171C0;
  *(_QWORD *)(a1 + 24) = v2;
  result = v3 & 4;
  if ( (_DWORD)result )
  {
    v5 = getpid();
    __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v5);
    sub_B8C0(a1, (__int64)"new prefix: '%s'", v2);
    result = 0LL;
  }
  return result;
}

signed __int64 __fastcall sub_BDE0(int *a1, const char *a2)
{
  __int64 v2; // rbx
  char *v3; // rbp
  int v4; // edi
  char v5; // al
  signed __int64 result; // rax
  unsigned int v7; // eax

  v2 = (__int64)a1;
  if ( a2 )
  {
    v3 = strdup(a2);
    if ( !v3 )
      return 4294967284LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *a1;
  if ( *(_DWORD *)v2 >= 0 )
  {
    close(v4);
    *(_DWORD *)v2 = -1;
  }
  free(*(void **)(v2 + 8));
  v5 = dword_2171C0;
  *(_QWORD *)(v2 + 8) = v3;
  result = v5 & 4;
  if ( (_DWORD)result )
  {
    v7 = getpid();
    __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v7);
    sub_B8C0(v2, (__int64)"new dir: '%s'", v3);
    result = 0LL;
  }
  return result;
}

__int64 __usercall sub_BEB0@<rax>(__int64 a1@<rdx>, __int64 a2@<rbx>, __int64 a3@<rdi>, __int64 a4@<rsi>)
{
  bool v4; // zf
  unsigned int v6; // eax

  v4 = (dword_2171C0 & 4) == 0;
  *(_QWORD *)(a3 + 4128) = a4;
  *(_QWORD *)(a3 + 4136) = a1;
  if ( !v4 )
  {
    v6 = getpid();
    __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v6);
    sub_B8C0(a3, (__int64)"(re)set dialect", a2);
  }
  return 0LL;
}

__int64 __fastcall sub_BF20(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    result = *(_QWORD *)(a1 + 4128);
  else
    result = 0LL;
  return result;
}

_BOOL8 __fastcall sub_BF50(_DWORD *a1)
{
  _BOOL8 result; // rax
  const char *v2; // rdi

  if ( !a1 )
    __assert_fail("pc", "lib/path.c", 0xC9u, "ul_path_is_accessible");
  result = 1LL;
  if ( *a1 < 0 )
  {
    v2 = sub_BB30((__int64)a1);
    result = 0LL;
    if ( v2 )
      result = access(v2, 0) == 0;
  }
  return result;
}

int __fastcall sub_BFC0(__int64 a1)
{
  int result; // eax
  const char *v2; // rbp
  unsigned int v3; // eax

  if ( !a1 )
    __assert_fail("pc", "lib/path.c", 0xD6u, "ul_path_get_dirfd");
  if ( !*(_QWORD *)(a1 + 8) )
    __assert_fail("pc->dir_path", "lib/path.c", 0xD7u, "ul_path_get_dirfd");
  result = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 < 0 )
  {
    v2 = sub_BB30(a1);
    if ( v2 )
    {
      if ( dword_2171C0 & 4 )
      {
        v3 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v3);
        sub_B8C0(a1, (__int64)"opening dir: '%s'", v2);
      }
      result = open(v2, 0x80000);
      *(_DWORD *)a1 = result;
    }
    else
    {
      result = -*__errno_location();
    }
  }
  return result;
}

void __fastcall sub_C0C0(int *a1)
{
  int *v1; // rbx
  int v2; // edi
  unsigned int v3; // eax

  if ( !a1 )
    __assert_fail("pc", "lib/path.c", 0xE8u, "ul_path_close_dirfd");
  v1 = a1;
  v2 = *a1;
  if ( v2 >= 0 )
  {
    if ( dword_2171C0 & 4 )
    {
      v3 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v3);
      sub_B8C0((__int64)v1, (__int64)"closing dir");
      close(*v1);
    }
    else
    {
      close(v2);
    }
    *v1 = -1;
  }
}

void __usercall sub_C160(void *ptr@<rdi>, __int64 a2@<rbx>)
{
  int v2; // eax
  bool v3; // zf
  unsigned int v4; // eax

  if ( ptr )
  {
    v2 = *((_DWORD *)ptr + 4) - 1;
    v3 = *((_DWORD *)ptr + 4) == 1;
    *((_DWORD *)ptr + 4) = v2;
    if ( v2 < 0 || v3 )
    {
      if ( dword_2171C0 & 4 )
      {
        v4 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v4);
        sub_B8C0((__int64)ptr, (__int64)&unk_12784, a2);
      }
      if ( *((_QWORD *)ptr + 516) )
        (*((void (__fastcall **)(void *))ptr + 517))(ptr);
      sub_C0C0((int *)ptr);
      free(*((void **)ptr + 1));
      free(*((void **)ptr + 3));
      free(ptr);
    }
  }
}

_DWORD *sub_C210(__int64 a1, ...)
{
  _DWORD *v1; // rbx
  unsigned int v3; // eax
  void *v4; // rdi
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  v6 = __readfsqword(0x28u);
  v1 = calloc(1uLL, 0x1038uLL);
  if ( v1 )
  {
    if ( dword_2171C0 & 4 )
    {
      v3 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v3);
      sub_B8C0((__int64)v1, (__int64)"alloc");
    }
    v1[4] = 1;
    *v1 = -1;
    if ( a1 )
    {
      va_start(va, a1);
      if ( (signed int)__vasprintf_chk(v1 + 2, 1LL, a1, va) < 0 || !*((_QWORD *)v1 + 1) )
      {
        v4 = v1;
        v1 = 0LL;
        sub_C160(v4, 0LL);
      }
    }
  }
  return v1;
}

__int64 __fastcall sub_C5D0(__int64 a1, int a2, const char *a3)
{
  const char *v3; // rbp
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // rbp
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int (__fastcall *v10)(__int64, const char *, int *); // rax
  int fd; // [rsp+4h] [rbp-34h]
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v12 = __readfsqword(0x28u);
  if ( a1 )
  {
    v4 = sub_BFC0(a1);
    v5 = v4;
    fd = v4;
    if ( v4 >= 0 )
    {
      v6 = &v3[*v3 == 47];
      v5 = faccessat(v4, v6, a2, 0);
      if ( v5 )
      {
        if ( *__errno_location() == 2 )
        {
          v10 = *(unsigned int (__fastcall **)(__int64, const char *, int *))(a1 + 4144);
          if ( v10 )
          {
            if ( !v10(a1, v6, &fd) )
              v5 = faccessat(fd, v6, a2, 0);
          }
        }
      }
      if ( dword_2171C0 & 4 )
      {
        v9 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v9);
        sub_B8C0(a1, (__int64)"access: '%s' [rc=%d]", v6, v5);
      }
    }
  }
  else
  {
    v5 = access(a3, a2);
    if ( dword_2171C0 & 4 )
    {
      v8 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v8);
      sub_B9C0((__int64)"access '%s' [no context, rc=%d]", v3, v5);
    }
  }
  return v5;
}

__int64 sub_C760(__int64 a1, int a2, __int64 a3, ...)
{
  const char *v3; // rax
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (const char *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_C5D0(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 __fastcall sub_C840(__int64 a1, struct stat *a2, int a3, const char *a4)
{
  const char *v4; // rbp
  int v5; // er14
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int (__fastcall *v11)(__int64, const char *, int *); // rax
  int fildes; // [rsp+4h] [rbp-34h]
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v4 = a4;
  v13 = __readfsqword(0x28u);
  if ( a1 )
  {
    v5 = a3;
    v6 = sub_BFC0(a1);
    v7 = v6;
    fildes = v6;
    if ( v6 >= 0 )
    {
      if ( v4 )
      {
        v4 += *v4 == 47;
        v7 = __fxstatat(1, v6, v4, a2, v5);
        if ( v7 )
        {
          if ( *__errno_location() == 2 )
          {
            if ( v4 )
            {
              v11 = *(unsigned int (__fastcall **)(__int64, const char *, int *))(a1 + 4144);
              if ( v11 )
              {
                if ( !v11(a1, v4, &fildes) )
                  v7 = __fxstatat(1, fildes, v4, a2, 0);
              }
            }
          }
        }
      }
      else
      {
        v7 = __fxstat(1, v6, a2);
      }
      if ( dword_2171C0 & 4 )
      {
        v10 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v10);
        sub_B8C0(a1, (__int64)"stat '%s' [rc=%d]", v4, v7);
      }
    }
  }
  else
  {
    v7 = -22;
    if ( a4 )
      v7 = __xstat(1, a4, a2);
    if ( dword_2171C0 & 4 )
    {
      v9 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v9);
      sub_B9C0((__int64)"stat '%s' [no context, rc=%d]", v4, v7);
    }
  }
  return v7;
}

__int64 __fastcall sub_CA30(__int64 a1, unsigned int a2, _BYTE *a3)
{
  _BYTE *v3; // rbp
  int v4; // eax
  signed int v5; // ebx
  _BYTE *v6; // rbp
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned int (__fastcall *v9)(__int64, _BYTE *, unsigned int *); // rax
  signed int v10; // er13
  unsigned int v11; // eax
  char *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // [rsp+4h] [rbp-34h]
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = a3;
    if ( a1 )
    {
      v4 = sub_BFC0(a1);
      v5 = v4;
      v14 = v4;
      if ( v4 < 0 )
        goto LABEL_6;
      v6 = &v3[*v3 == 47];
      v5 = __openat_2((unsigned int)v4, v6, a2);
      if ( v5 >= 0
        || *__errno_location() != 2
        || (v9 = *(unsigned int (__fastcall **)(__int64, _BYTE *, unsigned int *))(a1 + 4144)) == 0LL
        || v9(a1, v6, &v14) )
      {
        if ( !(dword_2171C0 & 4) )
          goto LABEL_6;
        v13 = getpid();
        v10 = v5;
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v13);
        v12 = "";
      }
      else
      {
        LODWORD(result) = __openat_2(v14, v6, a2);
        v10 = result;
        if ( !(dword_2171C0 & 4) )
          goto LABEL_19;
        v11 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v11);
        v12 = " [redirected]";
        if ( v5 == v10 )
          v12 = "";
      }
      v5 = v10;
      sub_B8C0(a1, (__int64)"opening '%s'%s", v6, v12);
    }
    else
    {
      v5 = __open_2(a3);
      if ( dword_2171C0 & 4 )
      {
        v8 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v8);
        sub_B9C0((__int64)"opening '%s' [no context]", v3);
      }
    }
  }
  else
  {
    v5 = -22;
  }
LABEL_6:
  while ( 1 )
  {
    result = (unsigned int)v5;
    if ( __readfsqword(0x28u) == v15 )
      break;
LABEL_19:
    v5 = result;
  }
  return result;
}

__int64 __fastcall sub_CC40(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rax
  __int64 result; // rax

  v4 = (_BYTE *)sub_BAA0(a1, a3, a4);
  if ( v4 )
    result = sub_CA30(a1, a2, v4);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 sub_CC80(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return sub_CC40(a1, a2, a3, (__int64)va);
}

FILE *__fastcall sub_CD30(__int64 a1, const char *a2, _BYTE *a3)
{
  const char *v3; // rbx
  char v4; // cl
  char *v5; // rax
  unsigned int v6; // esi
  int v7; // eax

  v3 = a2;
  if ( a2 )
  {
    v4 = *a2;
    if ( *a2 )
    {
      v5 = (char *)a2;
      v6 = 0;
      while ( v4 == 114 )
      {
        if ( v5[1] != 43 )
          goto LABEL_8;
        v6 |= 2u;
        if ( !++v5 )
        {
LABEL_13:
          v7 = sub_CA30(a1, v6, a3);
          if ( v7 >= 0 )
            return fdopen(v7, v3);
          return 0LL;
        }
LABEL_9:
        v4 = *v5;
        if ( !*v5 )
          goto LABEL_13;
      }
      switch ( v4 )
      {
        case 119:
          if ( v5[1] == 43 )
            v6 |= 0x202u;
          else
            v6 |= 0x201u;
          break;
        case 97:
          if ( v5[1] == 43 )
            v6 |= 0x402u;
          else
            v6 |= 0x401u;
          break;
        case 101:
          v6 |= 0x80000u;
          break;
      }
LABEL_8:
      if ( !++v5 )
        goto LABEL_13;
      goto LABEL_9;
    }
  }
  v7 = sub_CA30(a1, 0, a3);
  if ( v7 < 0 )
    return 0LL;
  return fdopen(v7, v3);
}

FILE *__fastcall sub_CE00(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rax
  FILE *result; // rax

  v4 = (_BYTE *)sub_BAA0(a1, a3, a4);
  if ( v4 )
    result = sub_CD30(a1, a2, v4);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_CE40(__int64 a1, cpu_set_t **a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v7; // er14
  void *v8; // rsp
  FILE *v9; // rax
  FILE *v10; // r13
  size_t v11; // rax
  cpu_set_t *v12; // rax
  unsigned int v13; // er14
  int v15; // er14
  __int64 v16; // [rsp+0h] [rbp-50h]
  int v17; // [rsp+8h] [rbp-48h]
  int v18; // [rsp+Ch] [rbp-44h]
  __int64 v19; // [rsp+10h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-38h]

  v6 = a3;
  v7 = 7 * a3;
  *a2 = 0LL;
  v20 = __readfsqword(0x28u);
  v18 = a4;
  v8 = alloca((signed int)(7 * a3));
  v9 = sub_CE00(a1, "re", a5, a6);
  if ( !v9 )
    return (unsigned int)-*__errno_location();
  v10 = v9;
  if ( fgets((char *)&v16, v7, v9) )
  {
    fclose(v10);
  }
  else
  {
    v17 = *__errno_location();
    v15 = v17;
    fclose(v10);
    v13 = -v15;
    if ( v17 )
      return v13;
  }
  v11 = strlen((const char *)&v16);
  if ( *((_BYTE *)&v16 + v11 - 1) == 10 )
    *((_BYTE *)&v16 + v11 - 1) = 0;
  v12 = (cpu_set_t *)sub_104D0(v6, &v19, 0LL);
  *a2 = v12;
  if ( !v12 )
    return (unsigned int)-12;
  if ( v18 )
  {
    if ( !(unsigned int)sub_10B30((char *)&v16, v12) )
      return 0;
LABEL_15:
    v13 = -22;
    j____sched_cpufree(*a2);
    return v13;
  }
  if ( (unsigned int)sub_109A0(&v16, v12, v19) )
    goto LABEL_15;
  return 0;
}

FILE *sub_CFC0(__int64 a1, const char *a2, __int64 a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  return sub_CE00(a1, a2, a3, (__int64)va);
}

DIR *__fastcall sub_D070(__int64 a1, _BYTE *a2)
{
  int v2; // er12
  DIR *v3; // rax
  DIR *v4; // rbp
  int v6; // eax
  unsigned int v7; // eax

  if ( a2 )
  {
    v2 = sub_CA30(a1, 0x80000u, a2);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8) )
      return 0LL;
    if ( dword_2171C0 & 4 )
    {
      v7 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v7);
      sub_B8C0(a1, (__int64)"duplicate dir path");
    }
    v6 = sub_BFC0(a1);
    if ( v6 < 0 )
      return 0LL;
    v2 = sub_FE80(v6);
  }
  if ( v2 < 0 )
    return 0LL;
  v3 = fdopendir(v2);
  v4 = v3;
  if ( !v3 )
  {
    close(v2);
    return v4;
  }
  if ( a2 )
    return v4;
  rewinddir(v3);
  return v4;
}

DIR *__fastcall sub_D170(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rax
  DIR *result; // rax

  v3 = (_BYTE *)sub_BAA0(a1, a2, a3);
  if ( v3 )
    result = sub_D070(a1, v3);
  else
    result = 0LL;
  return result;
}

DIR *sub_D1A0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return sub_D170(a1, a2, (__int64)va);
}

ssize_t __fastcall sub_D260(__int64 a1, char *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbp
  _BYTE *v5; // rbx
  ssize_t result; // rax
  const char *v7; // rax

  v4 = a3;
  if ( a4 )
  {
    v5 = a4;
    LODWORD(result) = sub_BFC0(a1);
    if ( (signed int)result < 0 )
      return (signed int)result;
    result = readlinkat(result, &v5[*v5 == 47], a2, v4 - 1);
  }
  else
  {
    v7 = sub_BB30(a1);
    if ( !v7 )
      return -*__errno_location();
    result = readlink(v7, a2, v4 - 1);
  }
  if ( result >= 0 )
    a2[result] = 0;
  return result;
}

__int64 __fastcall sub_D3E0(__int64 a1, char *a2, size_t a3, _BYTE *a4)
{
  char *v4; // r12
  size_t v5; // rbx
  _BYTE *v6; // rbp
  int v7; // er13
  int *v8; // rax
  int *v9; // r14
  __int64 v10; // rbp
  signed int v11; // er15
  ssize_t v12; // rax
  int v13; // edx
  int requested_time; // ST08_4
  unsigned int v16; // eax
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v19 = __readfsqword(0x28u);
  v7 = sub_CA30(a1, 0x80000u, a4);
  v8 = __errno_location();
  v9 = v8;
  if ( v7 < 0 )
  {
    LODWORD(v10) = -*v8;
  }
  else
  {
    if ( dword_2171C0 & 4 )
    {
      v16 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v16);
      sub_B9C0((__int64)" reading '%s'", v6);
    }
    memset(a2, 0, v5);
    v10 = 0LL;
    v11 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = read(v7, v4, v5);
          if ( v12 < 0 )
            break;
          if ( !v12 || (v4 += v12, v10 += v12, (v5 -= v12) == 0) )
          {
            v13 = *v9;
            goto LABEL_14;
          }
          v11 = 0;
        }
        v13 = *v9;
        if ( *v9 != 11 && v13 != 4 )
          break;
        if ( v11 > 4 )
          break;
        ++v11;
        v17 = 0LL;
        v18 = 250000000LL;
        nanosleep((const struct timespec *)&v17, 0LL);
      }
      if ( !v10 )
        LODWORD(v10) = -1;
    }
    else
    {
      v13 = *v9;
      LODWORD(v10) = 0;
    }
LABEL_14:
    requested_time = v13;
    close(v7);
    *v9 = requested_time;
  }
  return (unsigned int)v10;
}

__int64 __fastcall sub_D5A0(__int64 a1, char *a2, size_t a3, __int64 a4, __int64 a5)
{
  size_t v5; // r12
  _BYTE *v6; // rax
  __int64 result; // rax

  v5 = a3;
  v6 = (_BYTE *)sub_BAA0(a1, a4, a5);
  if ( v6 )
    result = sub_D3E0(a1, a2, v5, v6);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 sub_D5F0(__int64 a1, char *a2, size_t a3, __int64 a4, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a4);
  v6 = __readfsqword(0x28u);
  return sub_D5A0(a1, a2, a3, a4, (__int64)va);
}

__int64 __fastcall sub_D6A0(__int64 a1, char **a2, _BYTE *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  char *v5; // rax
  char v7; // [rsp+1h] [rbp-2029h]
  char v8[8200]; // [rsp+2h] [rbp-2028h]
  unsigned __int64 v9; // [rsp+200Ah] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-22;
  *a2 = 0LL;
  LODWORD(v3) = sub_D3E0(a1, v8, 0x1FFFuLL, a3);
  v4 = v3;
  if ( (signed int)v3 >= 0 && (_DWORD)v3 )
  {
    v3 = (signed int)v3;
    if ( *(&v7 + (signed int)v3) == 10 )
    {
      v4 = v3 - 1;
      if ( (_DWORD)v3 == 1 )
        return v4;
      v3 = (signed int)v4;
    }
    v8[v3] = 0;
    v5 = strdup(v8);
    *a2 = v5;
    if ( !v5 )
      v4 = -12;
  }
  return v4;
}

__int64 sub_D750(__int64 a1, char **a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_D6A0(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 __fastcall sub_D830(__int64 a1, char *a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  char *v5; // rdx

  result = sub_D3E0(a1, a2, a3 - 1, a4);
  if ( (_DWORD)result )
  {
    if ( (signed int)result > 0 )
    {
      v5 = &a2[(signed int)result - 1];
      if ( *v5 == 10 )
      {
        result = (unsigned int)(result - 1);
        a2[(signed int)result] = 0;
      }
      else
      {
        *v5 = 0;
      }
    }
  }
  else
  {
    *a2 = 0;
  }
  return result;
}

__int64 sub_D960(__int64 a1, _BYTE *a2, const char *a3, ...)
{
  const char *v3; // r12
  FILE *v4; // rbx
  unsigned int v5; // ebp
  unsigned int v7; // eax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v9; // [rsp+18h] [rbp-D0h]

  v3 = a3;
  v9 = __readfsqword(0x28u);
  v4 = sub_CD30(a1, "re", a2);
  if ( v4 )
  {
    if ( dword_2171C0 & 4 )
    {
      v7 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v7);
      sub_B9C0((__int64)" fscanf [%s] '%s'", v3, a2);
    }
    va_start(va, a3);
    v5 = vfscanf(v4, v3, va);
    fclose(v4);
  }
  else
  {
    v5 = -22;
  }
  return v5;
}

__int64 sub_DAB0(__int64 a1, __int64 a2, __int64 a3, const char *a4, ...)
{
  const char *v4; // rbp
  FILE *v5; // rax
  FILE *v6; // rbx
  unsigned int v7; // ebp
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v10; // [rsp+18h] [rbp-D0h]

  v4 = a4;
  v10 = __readfsqword(0x28u);
  v5 = sub_CE00(a1, "re", a2, a3);
  v6 = v5;
  if ( v5 )
  {
    va_start(va, a4);
    v7 = vfscanf(v5, v4, va);
    fclose(v6);
  }
  else
  {
    v7 = -22;
  }
  return v7;
}

signed __int64 __fastcall sub_DBA0(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  signed __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-18h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0LL;
  if ( (unsigned int)sub_D960(a1, a3, "%ld", &v4, 0LL) != 1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( a2 )
    *a2 = v4;
  return result;
}

signed __int64 sub_DC10(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  signed __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_DBA0(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

signed __int64 __fastcall sub_DCF0(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  signed __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-18h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0LL;
  if ( (unsigned int)sub_D960(a1, a3, "%lu", &v4, 0LL) != 1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( a2 )
    *a2 = v4;
  return result;
}

signed __int64 sub_DD60(__int64 a1, _QWORD *a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  signed __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_DCF0(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

signed __int64 __fastcall sub_DE40(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  signed __int64 result; // rax
  int v4; // [rsp+4h] [rbp-14h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  if ( (unsigned int)sub_D960(a1, a3, "%d", &v4) != 1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( a2 )
    *a2 = v4;
  return result;
}

signed __int64 sub_DEB0(__int64 a1, _DWORD *a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  signed __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_DE40(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

signed __int64 __fastcall sub_DF90(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  signed __int64 result; // rax
  int v4; // [rsp+4h] [rbp-14h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  if ( (unsigned int)sub_D960(a1, a3, "%u", &v4) != 1 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( a2 )
    *a2 = v4;
  return result;
}

signed __int64 sub_E000(__int64 a1, _DWORD *a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  signed __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_DF90(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

signed __int64 __fastcall sub_E0E0(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  signed __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-18h]
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0LL;
  if ( (unsigned int)sub_D960(a1, a3, "%d:%d", &v4, (char *)&v4 + 4, 0LL) != 2 )
    return 0xFFFFFFFFLL;
  result = 0LL;
  if ( a2 )
    *a2 = BYTE4(v4) | ((_DWORD)v4 << 8) & 0xFFF00 | ((unsigned __int64)(unsigned int)v4 << 32) & 0xFFFFF00000000000LL | ((unsigned __int64)HIDWORD(v4) << 12) & 0xFFFFFF00000LL;
  return result;
}

signed __int64 sub_E1A0(__int64 a1, unsigned __int64 *a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  signed __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_E0E0(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 __fastcall sub_E280(__int64 a1, const char *a2, _BYTE *a3)
{
  const char *v3; // r12
  int v4; // er13
  int *v5; // rax
  int *v6; // rbp
  size_t v7; // rbx
  ssize_t v8; // rax
  int v9; // er15
  __int64 v11; // [rsp+0h] [rbp-58h]
  __int64 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v3 = a2;
  v13 = __readfsqword(0x28u);
  v4 = sub_CA30(a1, 0x80001u, a3);
  v5 = __errno_location();
  v6 = v5;
  if ( v4 < 0 )
  {
    LODWORD(v7) = -*v5;
  }
  else
  {
    v7 = strlen(a2);
    if ( v7 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          *v6 = 0;
          v8 = write(v4, v3, v7);
          v9 = *v6;
          if ( v8 > 0 )
            break;
          if ( v9 != 4 && v9 != 11 )
          {
            LODWORD(v7) = -1;
            goto LABEL_10;
          }
          if ( v9 == 11 )
            goto LABEL_6;
        }
        v7 -= v8;
        if ( !v7 )
        {
          LODWORD(v7) = 0;
          if ( v9 != 11 )
            goto LABEL_10;
          v11 = 0LL;
          v12 = 250000000LL;
          nanosleep((const struct timespec *)&v11, 0LL);
          break;
        }
        v3 += v8;
        if ( v9 == 11 )
        {
LABEL_6:
          v11 = 0LL;
          v12 = 250000000LL;
          nanosleep((const struct timespec *)&v11, 0LL);
        }
      }
    }
    v9 = *v6;
LABEL_10:
    close(v4);
    *v6 = v9;
  }
  return (unsigned int)v7;
}

__int64 sub_E3C0(__int64 a1, const char *a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_E280(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 __fastcall sub_E600(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // er13
  int *v4; // rax
  int *v5; // rbp
  char *v6; // r12
  size_t v7; // rbx
  ssize_t v8; // rax
  int v9; // er15
  unsigned int v10; // ebx
  __int64 v12; // [rsp+0h] [rbp-78h]
  __int64 v13; // [rsp+8h] [rbp-70h]
  char buf; // [rsp+10h] [rbp-68h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = sub_CA30(a1, 0x80001u, a3);
  v4 = __errno_location();
  v5 = v4;
  if ( v3 < 0 )
    return (unsigned int)-*v4;
  v6 = &buf;
  v7 = (signed int)__snprintf_chk(&buf, 37LL, 1LL, 37LL, "%lu", a2);
  while ( 1 )
  {
    while ( 1 )
    {
      *v5 = 0;
      v8 = write(v3, v6, v7);
      v9 = *v5;
      if ( v8 > 0 )
        break;
      if ( v9 != 4 && v9 != 11 )
      {
        v10 = -1;
        goto LABEL_7;
      }
      if ( v9 == 11 )
      {
LABEL_12:
        v12 = 0LL;
        v13 = 250000000LL;
        nanosleep((const struct timespec *)&v12, 0LL);
      }
    }
    v7 -= v8;
    if ( !v7 )
      break;
    v6 += v8;
    if ( v9 == 11 )
      goto LABEL_12;
  }
  v10 = 0;
  if ( v9 == 11 )
  {
    v12 = 0LL;
    v13 = 250000000LL;
    nanosleep((const struct timespec *)&v12, 0LL);
    v9 = *v5;
  }
LABEL_7:
  close(v3);
  *v5 = v9;
  return v10;
}

__int64 sub_E760(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _BYTE *v3; // rax
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-D0h]

  va_start(va, a3);
  v6 = __readfsqword(0x28u);
  v3 = (_BYTE *)sub_BAA0(a1, a3, (__int64)va);
  if ( v3 )
    result = sub_E600(a1, a2, v3);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

__int64 __fastcall sub_E840(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  DIR *v3; // rax
  DIR *v4; // rbp
  struct dirent *v5; // rax
  bool v6; // cf
  bool v7; // zf
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  char *v10; // rdi
  _BYTE *v11; // rsi
  char v12; // dl
  bool v13; // cf
  bool v14; // zf
  _BYTE *v15; // rsi
  signed __int64 v16; // rcx
  const char *v17; // rdi

  v2 = 0;
  v3 = sub_D070(a1, a2);
  if ( v3 )
  {
    v4 = v3;
    while ( 1 )
    {
      v5 = readdir(v4);
      if ( !v5 )
        break;
      while ( 1 )
      {
        v6 = __CFADD__(v5, 19LL);
        v7 = v5->d_name == 0LL;
        v8 = (signed __int64)v5->d_name;
        v9 = 2LL;
        v10 = ".";
        v11 = (_BYTE *)v8;
        do
        {
          if ( !v9 )
            break;
          v6 = *v11 < (unsigned __int8)*v10;
          v7 = *v11++ == *v10++;
          --v9;
        }
        while ( v7 );
        v12 = (!v6 && !v7) - v6;
        v13 = 0;
        v14 = v12 == 0;
        if ( !v12 )
          break;
        v15 = (_BYTE *)v8;
        v16 = 3LL;
        v17 = "..";
        do
        {
          if ( !v16 )
            break;
          v13 = *v15 < (const unsigned __int8)*v17;
          v14 = *v15++ == *v17++;
          --v16;
        }
        while ( v14 );
        v2 -= ((unsigned __int8)((!v13 && !v14) - v13) < 1u) - 1;
        v5 = readdir(v4);
        if ( !v5 )
          goto LABEL_12;
      }
    }
LABEL_12:
    closedir(v4);
  }
  return v2;
}

__int64 sub_E8E0(__int64 a1, __int64 a2, ...)
{
  _BYTE *v2; // rax
  __int64 result; // rax
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  v2 = (_BYTE *)sub_BAA0(a1, a2, (__int64)va);
  if ( v2 )
    result = sub_E840(a1, v2);
  else
    result = (unsigned int)-*__errno_location();
  return result;
}

FILE *__fastcall sub_EAB0(__int64 a1, const char *a2, const char *a3)
{
  const char *v3; // rbp
  const char *v4; // ST00_8
  __int64 v6; // [rsp+0h] [rbp-1028h]
  unsigned __int64 v7; // [rsp+1008h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( !a2 )
    return 0LL;
  v3 = a3;
  if ( !a1 )
    return fopen(a2, a3);
  v4 = &a2[*a2 == 47];
  __snprintf_chk(&v6, 4096LL, 1LL, 4096LL, "%s/%s", a1);
  return fopen((const char *)&v6, v3);
}

__int64 sub_EB60(__int64 a1, cpu_set_t **a2, unsigned int a3, __int64 a4, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a4);
  v6 = __readfsqword(0x28u);
  return sub_CE40(a1, a2, a3, 0, a4, (__int64)va);
}

__int64 sub_EC10(__int64 a1, cpu_set_t **a2, unsigned int a3, __int64 a4, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v6; // [rsp+18h] [rbp-C0h]

  va_start(va, a4);
  v6 = __readfsqword(0x28u);
  return sub_CE40(a1, a2, a3, 1, a4, (__int64)va);
}

unsigned __int64 sub_ECC0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v4; // [rsp+18h] [rbp-D0h]

  v4 = __readfsqword(0x28u);
  if ( a1 && !(dword_2171C4 & 0x1000000) )
    __fprintf_chk(stderr, 1LL, "[%p]: ", a1);
  va_start(va, a2);
  __vfprintf_chk(stderr, 1LL, a2, va);
  fputc(10, stderr);
  return __readfsqword(0x28u) ^ v4;
}

void __usercall sub_EDC0(__int64 a1@<rbx>, __int64 a2@<rdi>)
{
  void *v2; // rax
  unsigned int v3; // eax
  __int64 v4; // [rsp-8h] [rbp-8h]

  if ( a2 )
  {
    v4 = a1;
    if ( dword_2171C4 & 4 )
    {
      v3 = getpid();
      __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v3);
      sub_ECC0(a2, (__int64)"deinit", a1);
      v2 = (void *)sub_BF20(a2);
      if ( v2 )
        goto LABEL_4;
    }
    else
    {
      v2 = (void *)sub_BF20(a2);
      if ( v2 )
      {
LABEL_4:
        free(v2);
        sub_BEB0(0LL, v4, a2, 0LL);
        return;
      }
    }
  }
}

__int64 __fastcall sub_EE70(int fd, void *buf, size_t nbytes)
{
  size_t v3; // rbx
  __int64 v4; // rbp
  signed int v5; // er15
  char *v6; // r12
  ssize_t v7; // rax
  int v8; // eax
  _BYTE *v9; // rax
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( fd < 0 )
    return -22LL;
  v3 = nbytes;
  v4 = 0LL;
  memset(buf, 0, nbytes);
  v5 = 0;
  v6 = (char *)buf;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = read(fd, v6, v3);
      if ( v7 < 0 )
        break;
      if ( !v7 || (v6 += v7, v4 += v7, (v3 -= v7) == 0) )
      {
        if ( !v4 )
          return 0LL;
        goto LABEL_11;
      }
      v5 = 0;
    }
    v8 = *__errno_location();
    if ( v8 != 11 && v8 != 4 )
      break;
    if ( v5 > 4 )
      break;
    ++v5;
    v11 = 0LL;
    v12 = 250000000LL;
    nanosleep((const struct timespec *)&v11, 0LL);
  }
  if ( !v4 )
    return -1LL;
LABEL_11:
  v9 = buf;
  do
  {
    if ( !*v9 )
      *v9 = 32;
    ++v9;
  }
  while ( v9 != (char *)buf + v4 );
  *((char *)buf + v4 - 1) = 0;
  return v4;
}

void sub_F070()
{
  JUMPOUT(&loc_F03C);
}

unsigned __int64 sub_F0E0()
{
  char *v1; // rax
  int v2; // edx
  int v3; // eax
  _BYTE *v4; // rsi
  signed int v5; // ebx
  bool v6; // cf
  bool v7; // zf
  char *v8; // rdi
  signed __int64 v9; // rcx
  __uid_t v10; // ebp
  unsigned int v11; // eax
  __gid_t v12; // ebp
  _BYTE *v13; // [rsp+0h] [rbp-28h]
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !dword_2171C4 )
  {
    v1 = getenv("ULPROCFS_DEBUG");
    v2 = 2;
    if ( v1 )
    {
      v3 = strtoul(v1, &v13, 0);
      v4 = v13;
      v5 = v3;
      v6 = 0;
      v7 = v13 == 0LL;
      if ( v13 )
      {
        v8 = "all";
        v9 = 4LL;
        do
        {
          if ( !v9 )
            break;
          v6 = *v4 < (unsigned __int8)*v8;
          v7 = *v4++ == *v8++;
          --v9;
        }
        while ( v7 );
        if ( (!v6 && !v7) == v6 )
        {
          dword_2171C4 = 0xFFFF;
          v5 = 0xFFFF;
          goto LABEL_10;
        }
      }
      dword_2171C4 = v3;
      v2 = 2;
      if ( v3 )
      {
LABEL_10:
        v10 = getuid();
        if ( v10 != geteuid() || (v12 = getgid(), v12 != getegid()) )
        {
          dword_2171C4 = v5 | 0x1000000;
          v11 = getpid();
          __fprintf_chk(stderr, 1LL, "%d: %s: don't print memory addresses (SUID executable).\n", v11);
          v2 = dword_2171C4 | 2;
        }
        else
        {
          v2 = v5 | 2;
        }
        goto LABEL_12;
      }
    }
LABEL_12:
    dword_2171C4 = v2;
  }
  return __readfsqword(0x28u) ^ v14;
}

__int64 __fastcall sub_F210(int *a1, int a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  int v5; // eax
  _DWORD *v6; // r13
  unsigned int v7; // eax
  _DWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-48h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  __snprintf_chk(&v10, 22LL, 1LL, 22LL, "/proc/%zu", a2);
  v2 = sub_BDE0(a1, (const char *)&v10);
  v3 = v2;
  if ( !v2 )
  {
    v5 = sub_BFC0((__int64)a1);
    if ( v5 < 0 )
    {
      LODWORD(v3) = v5;
    }
    else
    {
      v6 = (_DWORD *)sub_BF20((__int64)a1);
      if ( !v6 )
      {
        if ( dword_2171C4 & 4 )
        {
          v9 = getpid();
          __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v9);
          sub_ECC0((__int64)a1, (__int64)"alloc new procfs handler");
        }
        v8 = calloc(1uLL, 4uLL);
        v6 = v8;
        if ( !v8 )
        {
          LODWORD(v3) = -12;
          return (unsigned int)v3;
        }
        sub_BEB0((__int64)sub_EDC0, v3, (__int64)a1, (__int64)v8);
      }
      if ( dword_2171C4 & 4 )
      {
        v7 = getpid();
        __fprintf_chk(stderr, 1LL, "%d: %s: %8s: ", v7);
        sub_ECC0((__int64)a1, (__int64)"init procfs stuff");
      }
      *v6 = a2;
    }
  }
  return (unsigned int)v3;
}

__int64 __fastcall sub_F480(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-A8h]
  int v4; // [rsp+1Ch] [rbp-8Ch]
  unsigned __int64 v5; // [rsp+98h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = sub_C840(a1, (struct stat *)&v3, 0, 0LL);
  if ( !(_DWORD)result )
    *a2 = v4;
  return result;
}

signed __int64 __fastcall sub_F4E0(__int64 a1, DIR **a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  DIR *v4; // rbx
  DIR **v5; // r12
  struct dirent *v6; // rax
  bool v7; // cf
  bool v8; // zf
  char *v9; // r8
  signed __int64 v10; // rcx
  char *v11; // rdi
  char *v12; // rsi
  char v13; // dl
  bool v14; // cf
  bool v15; // zf
  signed __int64 v16; // rcx
  char *v17; // rsi
  const char *v18; // rdi
  unsigned __int8 v19; // al
  __int64 v21; // [rsp+0h] [rbp-48h]
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v3 = a3;
  v22 = __readfsqword(0x28u);
  if ( a3 == 0LL || a2 == 0LL || !a1 )
    return 4294967274LL;
  v4 = *a2;
  v5 = a2;
  if ( !*a2 )
  {
    v4 = sub_D070(a1, "fd");
    *a2 = v4;
    if ( !v4 )
      return (unsigned int)-*__errno_location();
  }
  while ( 1 )
  {
    v6 = readdir(v4);
    v7 = 0;
    v8 = v6 == 0LL;
    if ( !v6 )
      break;
    while ( 1 )
    {
      v9 = v6->d_name;
      v10 = 2LL;
      v11 = ".";
      v12 = v6->d_name;
      do
      {
        if ( !v10 )
          break;
        v7 = (unsigned __int8)*v12 < (unsigned __int8)*v11;
        v8 = *v12++ == *v11++;
        --v10;
      }
      while ( v8 );
      v13 = (!v7 && !v8) - v7;
      v14 = 0;
      v15 = v13 == 0;
      if ( !v13 )
        break;
      v16 = 3LL;
      v17 = v6->d_name;
      v18 = "..";
      do
      {
        if ( !v16 )
          break;
        v14 = (unsigned __int8)*v17 < *v18;
        v15 = *v17++ == *v18++;
        --v16;
      }
      while ( v15 );
      if ( (!v14 && !v15) == v14 )
        break;
      v19 = v6->d_type;
      if ( (v19 == 10 || !v19) && (signed int)sub_9070(v9, (unsigned __int64 *)&v21, 10) >= 0 )
      {
        *v3 = v21;
        return 0LL;
      }
      v4 = *v5;
      v6 = readdir(*v5);
      v7 = 0;
      v8 = v6 == 0LL;
      if ( !v6 )
        goto LABEL_16;
    }
  }
LABEL_16:
  closedir(*v5);
  *v5 = 0LL;
  return 1LL;
}

__int64 __fastcall sub_F630(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 18) & 0xFB )
    result = 0LL;
  else
    result = ((*__ctype_b_loc())[*(unsigned __int8 *)(a1 + 19)] >> 11) & 1;
  return result;
}

signed __int64 __fastcall sub_F660(__int64 a1, _DWORD *a2)
{
  __int64 v3; // [rsp+0h] [rbp-28h]
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_F630(a1) || (signed int)sub_9070((char *)(a1 + 19), (unsigned __int64 *)&v3, 10) < 0 )
    return 4294967274LL;
  *a2 = v3;
  return 0LL;
}

int __fastcall sub_F7D0(DIR *dirp, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  int v4; // eax
  int result; // eax
  __int64 v6; // [rsp+0h] [rbp-B8h]
  int v7; // [rsp+1Ch] [rbp-9Ch]
  unsigned __int64 v8; // [rsp+98h] [rbp-20h]

  v3 = a3;
  v8 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_F630(a2) )
    return -22;
  v4 = dirfd(dirp);
  result = __fxstatat(1, v4, (const char *)(a2 + 19), (struct stat *)&v6, 0);
  if ( result )
    return -22;
  *v3 = v7;
  return result;
}

__int64 __fastcall sub_F860(DIR *a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  _BOOL4 v5; // edx
  int v7; // [rsp+4h] [rbp-14h]
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v3 = a3;
  v8 = __readfsqword(0x28u);
  v4 = sub_F7D0(a1, a2, &v7);
  v5 = 0;
  if ( !v4 )
    v5 = v7 == v3;
  return (unsigned int)v5;
}

__int64 __fastcall sub_F8B0(DIR *dirp, __int64 a2, void *a3, unsigned __int64 a4)
{
  void *v4; // r13
  unsigned __int64 v5; // r12
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  FILE *v9; // rax
  FILE *v10; // r14
  char *v11; // rbx
  char v12; // al
  char *v13; // rdx
  size_t v14; // rbp
  __int64 v16; // [rsp+0h] [rbp-438h]
  unsigned __int64 v17; // [rsp+408h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a4 <= 0x1F )
    return 4294967274LL;
  v4 = a3;
  v5 = a4;
  if ( !(unsigned int)sub_F630(a2) )
    return 4294967274LL;
  __snprintf_chk(&v16, 1024LL, 1LL, 1024LL, "%s/stat", a2 + 19);
  v6 = dirfd(dirp);
  v7 = openat(v6, (const char *)&v16, 0x80000);
  v8 = v7;
  if ( v7 < 0 )
    return (unsigned int)-*__errno_location();
  v9 = fdopen(v7, "r");
  v10 = v9;
  if ( !v9 )
  {
    close(v8);
    return (unsigned int)-*__errno_location();
  }
  v11 = fgets((char *)&v16, 1024, v9);
  fclose(v10);
  if ( !v11 )
    return (unsigned int)-*__errno_location();
  v12 = *v11;
  if ( *v11 != 40 && v12 )
  {
    while ( 1 )
    {
      v12 = *++v11;
      if ( !*v11 )
        break;
      if ( v12 == 40 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    while ( v12 == 40 )
      v12 = *++v11;
  }
  if ( v12 != 41 && v12 )
  {
    v13 = v11;
    do
      ++v13;
    while ( *v13 && *v13 != 41 );
    v14 = v13 - v11;
    if ( v5 < v13 - v11 )
      v14 = v5 - 1;
  }
  else
  {
    v14 = 0LL;
  }
  memcpy(v4, v11, v14);
  *((_BYTE *)v4 + v14) = 0;
  return 0LL;
}

__int64 __fastcall sub_FA60(DIR *a1, __int64 a2, const char *a3)
{
  const char *v3; // rbp
  int v4; // eax
  _BOOL4 v5; // edx
  __int64 v7; // [rsp+0h] [rbp-48h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v3 = a3;
  v8 = __readfsqword(0x28u);
  v4 = sub_F8B0(a1, a2, &v7, 0x21uLL);
  v5 = 0;
  if ( !v4 )
    v5 = strcmp(v3, (const char *)&v7) == 0;
  return (unsigned int)v5;
}

char *__usercall sub_FB90@<rax>(__int64 a1@<rbx>, __int64 a2@<rbp>, unsigned int a3@<edi>, __int64 a4@<r12>)
{
  int v4; // eax
  int v5; // ebp
  char *v6; // r12
  char *result; // rax
  __int64 v8; // [rsp-2008h] [rbp-2028h]
  unsigned __int64 v9; // [rsp+0h] [rbp-20h]
  __int64 v10; // [rsp+8h] [rbp-18h]
  __int64 v11; // [rsp+10h] [rbp-10h]
  __int64 v12; // [rsp+18h] [rbp-8h]

  v12 = a4;
  v11 = a2;
  v10 = a1;
  v9 = __readfsqword(0x28u);
  __snprintf_chk(&v8, 0x2000LL, 1LL, 0x2000LL, "/proc/%d/%s", a3);
  v4 = open((const char *)&v8, 0x80000, "cmdline");
  JUMPOUT(v4, 0, sub_F070);
  v5 = v4;
  v6 = 0LL;
  if ( sub_EE70(v4, &v8, 0x2000uLL) > 0 )
    v6 = strdup((const char *)&v8);
  close(v5);
  result = v6;
  __readfsqword(0x28u);
  return result;
}

char *__usercall sub_FB90@<rax>(__int64 a1@<rbx>, __int64 a2@<rbp>, unsigned int a3@<edi>, __int64 a4@<r12>)
{
  int v4; // eax
  int v5; // ebp
  char *v6; // r12
  char *result; // rax
  __int64 v8; // [rsp-2008h] [rbp-2028h]
  unsigned __int64 v9; // [rsp+0h] [rbp-20h]
  __int64 v10; // [rsp+8h] [rbp-18h]
  __int64 v11; // [rsp+10h] [rbp-10h]
  __int64 v12; // [rsp+18h] [rbp-8h]

  v12 = a4;
  v11 = a2;
  v10 = a1;
  v9 = __readfsqword(0x28u);
  __snprintf_chk(&v8, 0x2000LL, 1LL, 0x2000LL, "/proc/%d/%s", a3);
  v4 = open((const char *)&v8, 0x80000, "cmdline");
  JUMPOUT(v4, 0, sub_F070);
  v5 = v4;
  v6 = 0LL;
  if ( sub_EE70(v4, &v8, 0x2000uLL) > 0 )
    v6 = strdup((const char *)&v8);
  close(v5);
  result = v6;
  __readfsqword(0x28u);
  return result;
}

char *__usercall sub_FB90@<rax>(__int64 a1@<rbx>, __int64 a2@<rbp>, unsigned int a3@<edi>, __int64 a4@<r12>)
{
  int v4; // eax
  int v5; // ebp
  char *v6; // r12
  char *result; // rax
  __int64 v8; // [rsp-2008h] [rbp-2028h]
  unsigned __int64 v9; // [rsp+0h] [rbp-20h]
  __int64 v10; // [rsp+8h] [rbp-18h]
  __int64 v11; // [rsp+10h] [rbp-10h]
  __int64 v12; // [rsp+18h] [rbp-8h]

  v12 = a4;
  v11 = a2;
  v10 = a1;
  v9 = __readfsqword(0x28u);
  __snprintf_chk(&v8, 0x2000LL, 1LL, 0x2000LL, "/proc/%d/%s", a3);
  v4 = open((const char *)&v8, 0x80000, "cmdline");
  JUMPOUT(v4, 0, sub_F070);
  v5 = v4;
  v6 = 0LL;
  if ( sub_EE70(v4, &v8, 0x2000uLL) > 0 )
    v6 = strdup((const char *)&v8);
  close(v5);
  result = v6;
  __readfsqword(0x28u);
  return result;
}

char *__usercall sub_FB90@<rax>(__int64 a1@<rbx>, __int64 a2@<rbp>, unsigned int a3@<edi>, __int64 a4@<r12>)
{
  int v4; // eax
  int v5; // ebp
  char *v6; // r12
  char *result; // rax
  __int64 v8; // [rsp-2008h] [rbp-2028h]
  unsigned __int64 v9; // [rsp+0h] [rbp-20h]
  __int64 v10; // [rsp+8h] [rbp-18h]
  __int64 v11; // [rsp+10h] [rbp-10h]
  __int64 v12; // [rsp+18h] [rbp-8h]

  v12 = a4;
  v11 = a2;
  v10 = a1;
  v9 = __readfsqword(0x28u);
  __snprintf_chk(&v8, 0x2000LL, 1LL, 0x2000LL, "/proc/%d/%s", a3);
  v4 = open((const char *)&v8, 0x80000, "cmdline");
  JUMPOUT(v4, 0, sub_F070);
  v5 = v4;
  v6 = 0LL;
  if ( sub_EE70(v4, &v8, 0x2000uLL) > 0 )
    v6 = strdup((const char *)&v8);
  close(v5);
  result = v6;
  __readfsqword(0x28u);
  return result;
}

signed __int64 __fastcall sub_FBA0(int a1, int a2)
{
  char *v2; // r13
  size_t v3; // rbx
  signed int v4; // er14
  size_t v5; // rbp
  ssize_t v6; // rax
  int *v7; // rax
  int *v8; // r15
  int v9; // eax
  char *v10; // rbp
  ssize_t v11; // rax
  int v12; // edx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-2058h]
  __int64 v16; // [rsp+28h] [rbp-2050h]
  char v17; // [rsp+30h] [rbp-2048h]
  unsigned __int64 v18; // [rsp+2038h] [rbp-40h]

  v18 = __readfsqword(0x28u);
LABEL_2:
  v2 = &v17;
  v3 = 0LL;
  v4 = 0;
  v5 = 0x2000LL;
  memset(&v17, 0, 0x2000uLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = read(a1, v2, v5);
      if ( v6 < 0 )
        break;
      if ( !v6 || (v2 += v6, v3 += v6, (v5 -= v6) == 0) )
      {
        if ( !v3 )
        {
          __explicit_bzero_chk(&v17, 0x2000LL, 0x2000LL);
          return 0LL;
        }
        v8 = __errno_location();
LABEL_11:
        v10 = &v17;
        while ( 1 )
        {
          while ( 1 )
          {
            *v8 = 0;
            v11 = write(a2, v10, v3);
            if ( v11 > 0 )
              break;
            v13 = *v8;
            if ( *v8 != 4 && v13 != 11 )
              return 4294967294LL;
            if ( v13 == 11 )
              goto LABEL_15;
          }
          v3 -= v11;
          v12 = *v8;
          if ( !v3 )
          {
            if ( v12 == 11 )
            {
              v15 = 0LL;
              v16 = 250000000LL;
              nanosleep((const struct timespec *)&v15, 0LL);
            }
            goto LABEL_2;
          }
          v10 += v11;
          if ( v12 == 11 )
          {
LABEL_15:
            v15 = 0LL;
            v16 = 250000000LL;
            nanosleep((const struct timespec *)&v15, 0LL);
          }
        }
      }
      v4 = 0;
    }
    v7 = __errno_location();
    v8 = v7;
    v9 = *v7;
    if ( v9 != 11 && v9 != 4 )
      break;
    if ( v4 > 4 )
      break;
    ++v4;
    v15 = 0LL;
    v16 = 250000000LL;
    nanosleep((const struct timespec *)&v15, 0LL);
  }
  if ( v3 )
    goto LABEL_11;
  return 0xFFFFFFFFLL;
}

int __fastcall sub_FD90(char *a1)
{
  return mkostemp(a1, 524482);
}

__int64 __fastcall sub_FE80(int fd, unsigned int a2)
{
  signed int v2; // ebx
  int v4; // eax
  int v5; // eax
  int *v6; // rax
  int v7; // er12
  int *v8; // rbp

  v2 = fcntl(fd, 1030, a2);
  if ( v2 < 0 )
  {
    v4 = dup(fd);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v5 = fcntl(v4, 1);
      if ( v5 < 0 || fcntl(v2, 2, v5 | 1u) < 0 )
      {
        v6 = __errno_location();
        v7 = *v6;
        v8 = v6;
        close(v2);
        v2 = -1;
        *v8 = v7;
      }
    }
  }
  return (unsigned int)v2;
}

int j__getdtablesize(void)
{
  return getdtablesize();
}

unsigned __int64 __fastcall sub_FF10(unsigned int a1, unsigned int a2)
{
  DIR *v2; // rax
  DIR *v3; // rbx
  struct dirent *v4; // rax
  bool v5; // cf
  bool v6; // zf
  const char *v7; // r14
  signed __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // rsi
  char v11; // al
  bool v12; // cf
  bool v13; // zf
  signed __int64 v14; // rcx
  const char *v15; // rsi
  const char *v16; // rdi
  int *v17; // r15
  unsigned int v18; // edx
  int v19; // eax
  int v21; // ebp
  unsigned int v22; // ebx
  unsigned int fd; // [rsp+0h] [rbp-58h]
  unsigned int v24; // [rsp+8h] [rbp-50h]
  unsigned int v25; // [rsp+Ch] [rbp-4Ch]
  char *endptr; // [rsp+10h] [rbp-48h]
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v24 = a1;
  v25 = a2;
  v27 = __readfsqword(0x28u);
  v2 = opendir("/proc/self/fd");
  if ( v2 )
  {
    v3 = v2;
    while ( 1 )
    {
      v4 = readdir(v3);
      v5 = 0;
      v6 = v4 == 0LL;
      if ( !v4 )
        break;
      while ( 1 )
      {
        v7 = v4->d_name;
        v8 = 2LL;
        v9 = ".";
        v10 = v4->d_name;
        do
        {
          if ( !v8 )
            break;
          v5 = (unsigned __int8)*v10 < (unsigned __int8)*v9;
          v6 = *v10++ == *v9++;
          --v8;
        }
        while ( v6 );
        v11 = (!v5 && !v6) - v5;
        v12 = 0;
        v13 = v11 == 0;
        if ( !v11 )
          break;
        v14 = 3LL;
        v15 = v7;
        v16 = "..";
        do
        {
          if ( !v14 )
            break;
          v12 = (const unsigned __int8)*v15 < *v16;
          v13 = *v15++ == *v16++;
          --v14;
        }
        while ( v13 );
        if ( (!v12 && !v13) == v12 )
          break;
        v17 = __errno_location();
        *v17 = 0;
        v18 = strtoul(v7, &endptr, 10);
        if ( *v17 )
          break;
        fd = v18;
        if ( endptr == v7 )
          break;
        if ( !endptr )
          break;
        if ( *endptr )
          break;
        v19 = dirfd(v3);
        if ( v19 < 0 || v19 == fd || v24 > fd || v25 < fd )
          break;
        close(fd);
        v4 = readdir(v3);
        v5 = 0;
        v6 = v4 == 0LL;
        if ( !v4 )
          goto LABEL_21;
      }
    }
LABEL_21:
    closedir(v3);
  }
  else
  {
    v21 = j__getdtablesize();
    if ( v21 )
    {
      v22 = 0;
      do
      {
        if ( a1 <= v22 && a2 >= v22 )
          close(v22);
        ++v22;
      }
      while ( v21 != v22 );
    }
  }
  return __readfsqword(0x28u) ^ v27;
}

__int64 __fastcall sub_10440(char *nptr, char **endptr, _DWORD *a3)
{
  _DWORD *v3; // r14
  int *v4; // rax
  __int64 v5; // rbx
  int *v6; // r12
  __int64 result; // rax

  v3 = a3;
  v4 = __errno_location();
  *v4 = 0;
  if ( !nptr )
    return 4294967274LL;
  v5 = *nptr;
  if ( !(_BYTE)v5 )
    return 4294967274LL;
  v6 = v4;
  if ( !((*__ctype_b_loc())[v5] & 0x800) )
    return 4294967274LL;
  *v3 = strtoul(nptr, endptr, 10);
  result = (unsigned int)*v6;
  if ( (_DWORD)result )
    return (unsigned int)-(signed int)result;
  if ( *endptr == nptr )
    return 4294967274LL;
  return result;
}

cpu_set_t *__fastcall sub_104D0(int a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rbp
  cpu_set_t *result; // rax

  v3 = a3;
  result = __sched_cpualloc(a1);
  if ( result )
  {
    if ( a2 )
      *a2 = 8 * ((unsigned __int64)(a1 + 63LL) >> 6);
    if ( v3 )
      *v3 = (a1 + 63LL) & 0xFFFFFFFFFFFFFFC0LL;
  }
  return result;
}

void j____sched_cpufree(cpu_set_t *set)
{
  __sched_cpufree(set);
}

signed __int64 __fastcall sub_109A0(const char *a1, void *a2, size_t a3)
{
  unsigned __int64 v3; // r15
  size_t v4; // r13
  signed int v5; // eax
  const char *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  __int32_t v9; // edx
  unsigned int v10; // eax
  char v11; // dl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax

  v3 = (unsigned __int64)a1;
  v4 = a3;
  v5 = strlen(a1);
  v6 = &a1[v5 - 1];
  if ( v5 > 1 && *(_WORD *)a1 == 30768 )
    v3 = (unsigned __int64)(a1 + 2);
  memset(a2, 0, v4);
  if ( v3 > (unsigned __int64)v6 )
    return 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = *v6;
    if ( (_BYTE)v8 == 44 )
      v8 = *(v6-- - 1);
    v9 = (char)v8;
    v10 = (char)v8 - 48;
    if ( v10 > 9 )
      break;
LABEL_13:
    v11 = v10;
    if ( (_BYTE)v10 == -1 )
      return 0xFFFFFFFFLL;
    if ( v10 & 1 && v7 >> 3 < v4 )
      *((_QWORD *)a2 + (v7 >> 6)) |= 1LL << v7;
    if ( v10 & 2 )
    {
      v12 = (unsigned int)(v7 + 1);
      if ( v12 >> 3 < v4 )
        *((_QWORD *)a2 + (v12 >> 6)) |= 1LL << ((unsigned __int8)v7 + 1);
    }
    if ( v11 & 4 )
    {
      v13 = (unsigned int)(v7 + 2);
      if ( v13 >> 3 < v4 )
        *((_QWORD *)a2 + (v13 >> 6)) |= 1LL << ((unsigned __int8)v7 + 2);
    }
    if ( v11 & 8 )
    {
      v14 = (unsigned int)(v7 + 3);
      if ( v14 >> 3 < v4 )
        *((_QWORD *)a2 + (v14 >> 6)) |= 1LL << ((unsigned __int8)v7 + 3);
    }
    --v6;
    v7 += 4LL;
    if ( v3 > (unsigned __int64)v6 )
      return 0LL;
  }
  if ( (unsigned int)((char)v8 + 128) <= 0x17F )
    v9 = (*__ctype_tolower_loc())[v8];
  if ( (unsigned int)(v9 - 97) <= 5 )
  {
    LOBYTE(v10) = v9 - 87;
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_10B30(char *nptr, void *s, size_t a3, int a4)
{
  _QWORD *v4; // r15
  char *v5; // r13
  unsigned __int64 v6; // rbx
  int v7; // er14
  unsigned __int64 v8; // rbp
  char *v9; // rax
  signed __int64 v10; // r12
  unsigned int v11; // er13
  char *v12; // rax
  char *v13; // rax
  signed __int64 v14; // r11
  bool v15; // cl
  unsigned int v16; // esi
  signed int v17; // edx
  __int64 result; // rax
  unsigned int v19; // eax
  char *v20; // rdi
  bool v21; // ST10_1
  int v22; // eax
  bool v23; // cl
  char *v24; // rax
  char *v25; // rax
  char *nptra; // [rsp+10h] [rbp-78h]
  char *nptrb; // [rsp+10h] [rbp-78h]
  const char *v28; // [rsp+18h] [rbp-70h]
  char *v29; // [rsp+18h] [rbp-70h]
  bool v30; // [rsp+18h] [rbp-70h]
  unsigned int v31; // [rsp+34h] [rbp-54h]
  unsigned int v32; // [rsp+38h] [rbp-50h]
  int v33; // [rsp+3Ch] [rbp-4Ch]
  char *sa; // [rsp+40h] [rbp-48h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v4 = s;
  v5 = nptr;
  v6 = a3;
  v7 = a4;
  v8 = 8 * a3;
  v35 = __readfsqword(0x28u);
  sa = 0LL;
  memset(s, 0, a3);
  if ( nptr )
  {
    while ( 1 )
    {
      v9 = strchr(v5, 44);
      v10 = (signed __int64)v9;
      if ( v9 )
        v10 = (signed __int64)(v9 + 1);
      if ( (unsigned int)sub_10440(v5, &sa, &v31) )
        return 1LL;
      v11 = v31;
      v33 = 1;
      v32 = v31;
      if ( !sa )
        break;
      v28 = sa;
      v12 = strchr(sa, 45);
      if ( !v12 )
        goto LABEL_33;
      nptra = v12 + 1;
      v13 = strchr(v28, 44);
      v14 = (signed __int64)v13;
      if ( !v13 )
      {
        v15 = 1;
        if ( !nptra )
        {
LABEL_33:
          v16 = v11;
          v17 = 1;
          goto LABEL_11;
        }
LABEL_24:
        v20 = nptra;
        v29 = (char *)v14;
        v21 = v15;
        v22 = sub_10440(v20, &sa, &v32);
        v23 = v21;
        if ( v22 )
          return 1LL;
        if ( sa )
        {
          nptrb = v29;
          v30 = v23;
          if ( *sa )
          {
            v24 = strchr(sa, 58);
            if ( v24 )
            {
              v25 = v24 + 1;
              if ( v25 )
              {
                if ( (v25 < nptrb || v30) && ((unsigned int)sub_10440(v25, &sa, &v33) || !v33) )
                  return 1LL;
              }
            }
          }
        }
        v19 = v31;
        v11 = v32;
        if ( v32 < v31 )
          return 1LL;
LABEL_22:
        v16 = v11;
        v17 = v33;
        v11 = v19;
        goto LABEL_11;
      }
      if ( !nptra )
        goto LABEL_33;
      v14 = (signed __int64)(v13 + 1);
      v15 = v13 + 1 == 0LL;
      if ( v13 + 1 > nptra )
        goto LABEL_24;
      v16 = v11;
      v17 = 1;
      if ( v15 )
        goto LABEL_24;
      do
      {
LABEL_11:
        if ( v7 && v8 <= v11 )
          return 2LL;
        if ( (unsigned __int64)v11 >> 3 < v6 )
          v4[(unsigned __int64)v11 >> 6] |= 1LL << v11;
        v11 += v17;
      }
      while ( v11 <= v16 );
      v5 = (char *)v10;
      if ( !v10 )
        goto LABEL_17;
    }
    v19 = v31;
    goto LABEL_22;
  }
LABEL_17:
  result = (__int64)sa;
  if ( sa )
    result = *sa != 0;
  return result;
}

void __fastcall init(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  signed __int64 v4; // rbp
  __int64 v5; // rbx

  v3 = a3;
  v4 = &off_215E38 - off_215E30;
  init_proc();
  if ( v4 )
  {
    v5 = 0LL;
    do
      ((void (__fastcall *)(_QWORD, __int64, __int64))off_215E30[v5++])(a1, a2, v3);
    while ( v4 != v5 );
  }
}

void fini(void)
{
  ;
}

__int64 __fastcall sub_10E60(__int64 a1)
{
  return __cxa_atexit(a1, 0LL, off_217008);
}
