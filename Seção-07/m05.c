// 21.03.2021
#include <stdio.h>

int main (void)
{
  puts("\t\tBusca por valor em  uma Matriz");
  int matriz[5][5];
  int i, j;
  int x = 8;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      matriz[i][j] = (i + 1) * (j + 1);
      printf("%d\t", matriz[i][j]);    
    }    
    printf("\n");
  }
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (matriz[i][j] == x)
      {
        x = matriz[i][j];  
         printf("O valor, %d, se encontra na matriz linha[%d] coluna[%d].\n", x, i, j);      
      }                
    }     
  }     
}