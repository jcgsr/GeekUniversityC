// 07.12.2020
// Susi foi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main (void)
{
   puts("Pagamento + 10%");
   float valor_hora;
   float adic = 0.1;
   int qtd_hora;

   printf("Valor da hora: ");
   scanf("%f", &valor_hora);
   printf("Quantas horas: ");
   scanf("%d", &qtd_hora);
   float total = valor_hora*qtd_hora;
   float valor_adic = total*adic;
   float valor_total_adic = valor_adic + total;

   printf("Valor a ser pago: %.2f", valor_total_adic);
}