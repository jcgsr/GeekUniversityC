// 06.12.2020

#include <stdio.h>

int main (void)
{
   float l, k;
   puts("Libras para Kg");

   printf("Libras: ");
   scanf("%f", &l);

   k = l*0.45;

   printf("%.2f libras correspondem a %.2fkg", l, k);
}