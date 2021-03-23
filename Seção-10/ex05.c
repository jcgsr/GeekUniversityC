// 22.03.2021

#include <stdio.h>
  
int maior(int n1, int n2);

int main (void)
{
  puts("Função maior variável");

  int n1;
  int n2;

  printf("Valor 1: ");
  scanf("%d", &n1);

  printf("Valor 2: ");
  scanf("%d", &n2);

  maior(n1, n2);
}

maior(int n1, int n2)
{
  if (n1 > n2)
  {
    n1 = n1;
    printf("N1 = %d.\n", n1);
    printf("N2 = %d.", n2);
  }
 if (n1 < n2)
  {
    printf("N1 = %d\n", n2);
    printf("N2 = %d", n1);
  }
  return n1;
}