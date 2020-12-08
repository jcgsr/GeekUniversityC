// 06.12.2020

#include <stdio.h>

int main (void)
{

   float m, a;
   puts("Acre para M²");

   printf("Acre: ");
   scanf("%f", &a);

   m = a*4048.58;
   printf("%.2f acres = %.2f m²", a, m);
}