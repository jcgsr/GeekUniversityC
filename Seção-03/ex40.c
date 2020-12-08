// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main(void)
{
   puts("Encanador");
   float dia = 30;
   float ir = 0.08;
   int dias_trab;

   printf("Dias trabalhados: ");
   scanf("%d", &dias_trab);
   float total = dias_trab*dia;
   printf("Valor bruto: %.2f", total);
   float desconto_ir = total*ir;
   float total_liq = total-desconto_ir;
   printf("\nValor líquido: %.2f", total_liq);
}
