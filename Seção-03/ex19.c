// 06.12.2020

#include <stdio.h>

int main (void)
{
   float l, m;
   puts("L para M³");

   printf("L: ");
   scanf("%f", &l);

   m = l/1000;

   printf("%.2f l correspondem a %.2fm³", l, m);
}