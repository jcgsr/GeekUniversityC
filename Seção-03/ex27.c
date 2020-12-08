// 06.12.2020

#include <stdio.h>

int main (void)
{

   float m, h;
   puts("Hectare para M2");

   printf("Hectare: ");
   scanf("%f", &h);

   m = h*10000;

   printf("%.2f hectares = %.2f m²", h, m);
}