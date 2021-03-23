// 22.01.2021

#include <stdio.h>

int main (void)
{
  puts("Ponteiros");
  int n1;
  int n2;

  printf("Valor 1: ");
  scanf("%d", &n1);

  printf("Valor 2: ");
  scanf("%d", &n2);

  if (&n1 > &n2)
  {
    printf("O endereço de %d (%d) é maior que %d (%d)", n1, &n1, n2, &n2);
  }
  else {
    printf("O endereço de %d (%d) é maior que %d (%d)", n2, &n2, n1, &n1);
  }
  
}