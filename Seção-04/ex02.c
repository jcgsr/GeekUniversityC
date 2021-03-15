// 08.12.2020
//Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...

#include <stdio.h>
#include <math.h>

int main(void)
{
   puts("Número positivo");

   float a;

   printf("Digite um número: ");
   scanf("%f", &a);

   if (a >= 0)
   {
      printf("A raiz quadrada de %.2f é %.2f", a, sqrt(a));
   }
   else {
      printf("%.2f não é positivo.", a);
   }
}