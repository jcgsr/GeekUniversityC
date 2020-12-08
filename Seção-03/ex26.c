// 06.12.2020

#include <stdio.h>

int main (void)
{

   float m, h;
   puts("M² para Hectare");

   printf("M²: ");
   scanf("%f", &m);

   h = m*0.0001;

   printf("%.2f m² = %.2f hectares", m, h);
}