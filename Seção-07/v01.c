// 18.03.2021

#include <stdio.h>

int main(void)
{
  puts("**Vetores**");

  int a[6];
  a[0] = 1;
  a[1] = 0;
  a[2] = 5;
  a[3] = -2;
  a[4] = -5;
  a[5] = 7;

  int b = a[0] + a[1] + a[5];
  printf("%d\n", b);
  a[4] = 100;

  for (int i = 0; i <= 5; i++) {
    printf("%d\n", a[i]);
  }

  return 0;
}
