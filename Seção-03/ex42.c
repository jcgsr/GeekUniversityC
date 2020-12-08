// 07.12.2020
// Susi foi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main(void)
{
   float sal;
   float gratif_valor = 0.05;
   float imposto_valor = 0.07;
   puts("Salário");

   printf("Salário base: ");
   scanf("%F", &sal);
   float sal_gratific;
   sal_gratific = sal * gratif_valor;
   float sal_gratific_valor;
   sal_gratific_valor = sal_gratific + sal;
   printf("%.2f", sal_gratific_valor);

   float sal_desc;
   sal_desc = sal * imposto_valor;
   float sal_desc_valor = sal_gratific_valor - sal_desc;
   printf("\n%.2f", sal_desc_valor);
}