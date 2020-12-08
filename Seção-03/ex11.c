// 05.12.2020
// Susi foi ao hospital agora de manhã

#include <stdio.h>

int main (void)
{
   puts("M/s - K/h");

   float velocidade_km;
   float velocidade_m;

   printf("Digite os m/s: ");
   scanf("%f", &velocidade_m);

   velocidade_km = velocidade_m * 3.6;

   printf("%.2f m/s = %.2f k/h", velocidade_m, velocidade_km);

}