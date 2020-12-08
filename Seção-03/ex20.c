// 06.12.2020

#include <stdio.h>

int main (void)
{
   float l, k;
   puts("Kg para Libras");

   printf("Kg: ");
   scanf("%f", &k);

   l = k/0.45;

   printf("%.2f kg correspondem a %.2f libras", k, l);
}