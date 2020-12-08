// 06.12.2020

#include <stdio.h>

int main (void)
{
   float a, b, c, d, media;
   puts("Média Aritmética");

   printf("A: ");
   scanf("%f", &a);
   printf("B: ");
   scanf("%f", &b);
   printf("C: ");
   scanf("%f", &c);
   printf("D: ");
   scanf("%f", &d);

   media = (a+b+c+d)/4;
   printf("A média de %.2f, %.2f, %.2f e %.2f = %.2f", a, b, c, d, media);
}