// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   int a, b, c;
   puts("Soma de três valores");

   printf("Valor a: ");
   scanf("%d", &a);

   printf("Valor b: ");
   scanf("%d", &b);
   
   printf("Valor c: ");
   scanf("%d", &c);

   int total;
   total = a + b + c;

   printf("A soma de %d, %d, %d é igual a %d", a, b, c, total);
}