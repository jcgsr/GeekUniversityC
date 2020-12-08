// 06.12.2020

#include <stdio.h>

int main (void)
{
   float c, p;
   
   puts("Polegadas para Cm");

   printf("Informe as polegadas: ");
   scanf("%f", &p);

   c = p*2.54;

   printf("%.2fpol. correspondem a %.2fcm ", p, c);
}