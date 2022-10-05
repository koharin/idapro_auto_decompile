#define __int64 long long
int main(int argc, const char **argv, const char **envp)
{
  int v4; // [rsp+4h] [rbp-Ch] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  __isoc99_scanf(&unk_2004, &v4, envp);
  switch ( v4 / 10 )
  {
    case 5:
      puts("E");
      break;
    case 6:
      puts("D");
      break;
    case 7:
      puts("C");
      break;
    case 8:
      puts("B");
      break;
    case 9:
      puts("A");
      break;
    default:
      puts("F");
      break;
  }
  return 0;
}
