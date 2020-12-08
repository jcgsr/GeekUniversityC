// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("Km - Milhas");

   float milhas;
   float km;

   printf("Digite os km: ");
   scanf("%f", &km);

   milhas = km / 1.61;

   printf("%.2f km = %.2f milhas", km, milhas);

}