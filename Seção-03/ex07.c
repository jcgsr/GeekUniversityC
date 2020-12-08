// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("°F - °C");

   float c, f;

   printf("Digite o grau em Fahrenheit: ");
   scanf("%f", &f);

   c = 5.0 * (f - 32.0) / 9.0;

   printf("%.2f°F  = %.2f°C", f, c);
}