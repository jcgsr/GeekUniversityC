// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("°K - °C");

   float c, k;

   printf("Digite o grau em Kelvin: ");
   scanf("%f", &k);

   c = k - 273.15;

   printf("%.2f°K  = %.2f°C", k, c);
}