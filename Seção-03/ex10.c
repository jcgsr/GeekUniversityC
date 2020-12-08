// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("K/h - M/s");

   float velocidade_km;
   float velocidade_m;

   printf("Digite os km/h: ");
   scanf("%f", &velocidade_km);

   velocidade_m = velocidade_km / 3.6;

   printf("%.2f k/h = %.2f m/s", velocidade_km, velocidade_m);

}