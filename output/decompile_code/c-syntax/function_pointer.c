__int64 __fastcall sum(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}

int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // eax

  v3 = sum(2, 2);
  printf("%d", v3);
  return 0;
}
