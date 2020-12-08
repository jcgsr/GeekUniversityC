// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main (void)
{
   puts("Desconto 12%");

   float valor;

   printf("Valor: ");
   scanf("%f", &valor);
   float desconto = valor*0.12;
   float total = valor - desconto;

   printf("Valor com desconto %.2f", total);

}