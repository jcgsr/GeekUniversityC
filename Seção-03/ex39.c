// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(


#include <stdio.h>

int main (void)
{
   puts("Divisão de prêmio 780 mil");

   float premio = 780000.00;
   float A = premio*0.46;
   printf("Prêmio ganhador 1: %.2f", A);
   float B = premio*0.32;
   printf("\nPrêmio ganhador 2: %.2f", B);
  float resto = premio - (A + B);
   printf("\nPrêmio ganhador 3: %.2f", resto);

}