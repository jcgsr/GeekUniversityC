// 08.12.2020
//Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...

#include <stdio.h>

int main(void)
{
   puts("Média");

   float a, b;

   printf("Digite uma nota: ");
   scanf("%f", &a);
   printf("Digite outra nota: ");
   scanf("%f", &b);

   if (a >= 0 && a <= 10 && b >= 0 && b <= 10)
   {
      printf("A média de %.2f e %.2f = %.2f", a, b, (a + b) / 2);
   }
   if (a < 0 || b < 0)
   {
      printf("Número não válido.");
   }
}