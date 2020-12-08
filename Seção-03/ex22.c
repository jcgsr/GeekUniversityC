// 06.12.2020

#include <stdio.h>

int main (void)
{
   float j, m;
   puts("Jardas para M");

   printf("Jardas: ");
   scanf("%f", &j);

   m = 0.91*j;

   printf("%.2f jardas correspondem a %.2fm", j, m);
}