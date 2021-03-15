// 09.12.2020
// Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...
#include <stdio.h>

int main(void)
{
   int n;
   printf("número: ");
   scanf("%d", &n);

   if (n < 0)
   {
      printf("Número inválido!");
   }
   else
   {
      int cent = (n / 100) % 10;
      printf("cent: %d", cent);

      int dez = (n / 10 % 10);
      printf("\ndezena: %d", dez);

      int unid = n % 10;
      printf("\nunidade: %d", unid);

      int soma = cent + dez + unid;

      printf("\nsoma: %d", soma);
   }
}