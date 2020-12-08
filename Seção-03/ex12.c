// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("Milhas - Km");

   float milhas;
   float km;

   printf("Digite as milhas: ");
   scanf("%f", &milhas);

   km = 1.61 * milhas;

   printf("%.2f milhas = %.2f km", milhas, km);

}