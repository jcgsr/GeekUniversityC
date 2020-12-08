// 06.12.2020

#include <stdio.h>

int main (void)
{
   float dolar = 5.16;
   float real, cambio;

   printf("R$: ");
   scanf("%f", &real);
   
   cambio = real*dolar;

   printf("R$ %.2f valia(m) US$ %.2f em 06.12.2020!", real, cambio);

}