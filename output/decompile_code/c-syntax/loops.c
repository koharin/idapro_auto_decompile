int __cdecl main(int argc, const char **argv, const char **envp)
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
  return 0;
}
