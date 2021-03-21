// 21.03.2021
#include <stdio.h>

int main (void)
{
  puts("\t\tMaior valor de uma Matriz");
  int matriz[4][4];
  int maior, i, j;

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      matriz[i][j] = (i + 1) * (j + 1);
      printf("%d\t", matriz[i][j]);    
    }    
    printf("\n");
  }
  maior = matriz[0][0];
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (matriz[i][j] > maior)
      {
        maior = matriz[i][j];
      }
    }
  }
  printf("O maior valor, %d, se encontra na matriz linha[%d] coluna[%d].", maior, i, j);  
}