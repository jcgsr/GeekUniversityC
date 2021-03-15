// 10.12.2020
// Susi foi dormir no hospital

#include <stdio.h>
#include <math.h>

int main(void)
{
   puts("Logaritmo");

   double a;

   printf("Número: ");
   scanf("%lf", &a); // double %lf

   if (a < 0)
   {
      printf("Número inválido!");
   }
   else
   {
      printf("O logaritmo de %.2f é %.2f", a, log(a));
   }
}