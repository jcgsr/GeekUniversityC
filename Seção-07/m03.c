// 21.03.2021
#include <stdio.h>

int main (void)
{
  puts("\t\tProduto da Matriz");
  int matriz[4][4];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      matriz[i][j] = (i + 1) * (j + 1);
      printf("%d\t", matriz[i][j]);    
    }    
    printf("\n");
  }
}