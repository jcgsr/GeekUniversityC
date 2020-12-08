// 06.12.2020

#include <stdio.h>

int main (void)
{
   float r, g;
   float pi = 3.14;
   puts("Radiano para Ângulo");

   printf("Informe um radiano: ");
   scanf("%f", &r);

   g = r*180/pi;

   printf("O radiano %.2f corresponde ao ângulo %.2f ", r, g);
}