// 06.12.2020

#include <stdio.h>

int main (void)
{

   float m, a;
   puts("M² para Acre");

   printf("M²: ");
   scanf("%f", &m);

   a = m*0.000247;

   printf("%.2f m² = %.2f acres", m, a);
}