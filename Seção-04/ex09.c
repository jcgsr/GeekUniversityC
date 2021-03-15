// 08.12.2020
//Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...

#include <stdio.h>

int main(void)
{
   puts("Concessão Empréstimo");

   float sal, prestacao;

   printf("Salário: ");
   scanf("%f", &sal);

   printf("Prestação: ");
   scanf("%f", &prestacao);

   float vinte = sal * 0.2;
   
   if (prestacao > vinte)
   {
      printf("Empréstimo não concedido");
   }
   else
   {
      printf("Empréstimo concedido");
   }
   
   
}