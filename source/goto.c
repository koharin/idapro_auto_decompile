#include <stdio.h>

int main(void) {
  int a;

  scanf("%d", &a);

  if (a == 1)
    goto out;

  if (a % 2 == 0)
    goto even;

  else
    goto odd;

out:
  printf("Always result will be : %d", a);
  return 0;

even:
  a /= 2;

  if (a == 1)
    goto out;

  if (a % 2 == 0)
    goto even;

  else
    goto odd;

odd:
  a = a * 3 + 1;

  goto even;
}
