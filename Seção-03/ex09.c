// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("°C - °K");

   float c, k;

   printf("Digite o grau em Celsius: ");
   scanf("%f", &c);

   k = c + 273.15;

   printf("%.2f°C  = %.2f°K", c, k);
}