// 08.12.2020

#include <stdio.h>

int main (void)
{
   float valor;
   float desc_10 = 0.1;

   puts("Vendedores");

   printf("Valor: ");
   scanf("%f", &valor);
   float total_des = valor*desc_10;
   printf("Total com desconto: %.2f", valor-total_des);
   float parcela = valor/3;
   printf("\nDividido pra 3x sem juros: %.2f", parcela);
   float comissao = 0.05;
   printf("\nComissão à vista: %.2f", (valor-total_des)*comissao);
   printf("\nComissão parcelado: %.2f", valor*comissao);

}