// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("°C - °F");

   float c, f;

   printf("Digite o grau em Celsius: ");
   scanf("%f", &c);

   f = c * (9.0 / 5.0) + 32.0;

   printf("%.2f°C  = %.2f°F", c, f);
}