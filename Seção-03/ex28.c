// 06.12.2020

#include <stdio.h>

int main (void)
{
   int a, b, c, soma;
   puts("Quadrado dos Valores");

   printf("A: ");
   scanf("%d", &a);
   printf("B: ");
   scanf("%d", &b);
   printf("C: ");
   scanf("%d", &c);

   soma = a*a+b*b+c*c;
   printf("A soma dos quadrados de %d, %d e %d = %d", a, b, c, soma);
}