// 06.12.2020

#include <stdio.h>

int main (void)
{
   float c, p;
   
   puts("Cm para Polegadas");

   printf("Informe os cm: ");
   scanf("%f", &c);

   p = c/2.54;

   printf("%.2fcm correspondem a %.2fpol. ", c, p);
}