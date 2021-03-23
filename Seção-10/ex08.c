// 22.03.2021

#include <stdio.h>

float main (void)
{
  puts("Endereço de Array");

  float f[10];

  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", &f[i]);
  }
}