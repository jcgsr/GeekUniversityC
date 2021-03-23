// 22.03.21

#include <stdio.h>

int dobro(int n1, int n2);

int main (void)
{
  puts("Função Dobro");

  int n1, n2;

  printf("Valor 1: ");
  scanf("%d", &n1);
  
  printf("Valor 2: ");
  scanf("%d", &n2);

  dobro(n1, n2);
}

dobro(int n1, int n2)
{
  int dobro_n1 = n1 * 2;
  int dobro_n2 = n2 * 2;

  int soma = dobro_n1 + dobro_n2;

  return printf("A soma do dobro de %d e de %d = %d", n1, n2, soma);
}