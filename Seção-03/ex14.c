// 06.12.2020

#include <stdio.h>

int main (void)
{
   float r, g;
   float pi = 3.14;
   puts("Ângulo para Radiano");

   printf("Informe um ângulo: ");
   scanf("%f", &g);

   r = g*pi/180;

   printf("O ângulo %.2f corresponde a %.2f em radianos", g, r);
}