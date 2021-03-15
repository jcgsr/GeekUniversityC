// 08.12.2020
//Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...

#include <stdio.h>

int main(void)
{
   puts("Maior número");

   int a, b;

   printf("Digite um número: ");
   scanf("%d", &a);
   printf("Digite outro número: ");
   scanf("%d", &b);

   if (a > b)
   {
      printf("%d > %d", a, b);
   }
   else if (b > a)
   {
      printf("%d > %d", b, a);
   }

   else if (a == b)
   {
      printf("Números iguais");
   }
   
}