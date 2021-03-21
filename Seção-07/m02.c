// 20.03.2021
#include <stdio.h>

int main (void)
{
  puts("Matriz diagonal");
  int matriz[5][5];

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Informe o valor da matriz [%d][%d]: ", i + 1, j +1);
      scanf("%d", &matriz[i][j]);
    }    
  }
   for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d\t", matriz[i][j]);
    }    
    printf("\n");
  }
}