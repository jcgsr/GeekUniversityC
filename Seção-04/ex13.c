// 15.12.2020
// Susi ainda no hospital

#include <stdio.h>

int main (void)
{
   float n1, n2, n3;
   puts("Média Ponderada");

   printf("Nota 1: ");
   scanf("%f", &n1);

   printf("Nota 2: ");
   scanf("%f", &n2);

   printf("Nota 3: ");
   scanf("%f", &n3);

   float media = (n1*1 + n2*1 + n3*2) / (1 + 1 + 2);

   printf("A média foi %.2f", media);

   if (media < 6)
   {
      printf("\nReprovado!");
   }
   else
   {
      printf("\nAprovado!");
   }
   
   
}