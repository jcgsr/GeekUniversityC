// 22.03.2021

#include <stdio.h>

int main (void)
{
  puts("Endereço de Matriz");
  float f[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      f[0][0] = 1;
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Endereço matrix: %d", f[i][j]);
    }
    printf("\n");
  }
}