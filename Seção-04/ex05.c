// 08.12.2020
//Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...

#include <stdio.h>

int main(void)
{
   puts("Par ou Ímpar");

   int a;

   printf("Digite um número: ");
   scanf("%d", &a);

   if (a % 2 == 0)
   {
      printf("%d é PAR!", a);
   }
   else
   {
      printf("%d é ÍMPAR!", a);
   }
}