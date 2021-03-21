// 18.03.2021

#include <stdio.h>

int main (void)
{
  puts("Vetores");

  int n[4];
  for (int i = 0; i < 4; i++) {
    printf("Digite um valor: ");
    scanf("%d", &n[i]);
  }
  int x, y, total;
  printf("Escolha uma posição do vetor (0 - 3)");
  scanf("%d", &x);
  if (x == 0)
  {
    x = n[0];
  } else if (x == 1)
  {
    x = n[1];
  } else if (x == 2)
  {
    x = n[2];
  }
  else if (x == 3)
  {
    x = n[3];
  }

   printf("Escolha outra posição do vetor (0 - 3)");
  scanf("%d", &y);
  if (y == 0)
  {
    y = n[0];
  } else if (y == 1)
  {
    y = n[1];
  } else if (y == 2)
  {
    y = n[2];
  }
  else if (y == 3)
  {
    y = n[3];
  } 
  total = x + y;
  printf("\nA soma dos valores dos dois vetores %d e %d foi: %d\n", x, y, total);
  return 0;

}
