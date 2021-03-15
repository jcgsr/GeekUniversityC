// 16.12.2020
#include <stdio.h>

int main(void)
{
   float n1, n2, n3;
   puts("Média Ponderada");

   printf("Laboratório: ");
   scanf("%f", &n1);

   printf("Avaliação Semestral: ");
   scanf("%f", &n2);

   printf("Exame Final: ");
   scanf("%f", &n3);

   float media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);

   printf("A média foi %.2f", media);

   if (media < 3)
   {
      printf("\nReprovado!");
   }
   else if (media >= 3 && media < 5)
   {
      printf("\nRecuperação!");
   }
   else
   {
      printf("\nAprovado!");
   }
}