// 22.01.2021

#include <stdio.h>

int main (void)
{
  puts("Ponteiros");
  int n1 = 8;
  int n2 = 28;

  printf("Endereço de %d - %d\n", n1, &n1);
  printf("Endereço de %d - %d\n", n2, &n2);

  if (&n1 > &n2)
  {
    printf("%d é maior que %d", &n1, &n2);
  }
  else {
    printf("%d é maior que %d", &n2, &n1);
  }
  
}