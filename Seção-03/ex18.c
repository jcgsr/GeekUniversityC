// 06.12.2020

#include <stdio.h>

int main (void)
{
   float l, m;
   puts("M³ para L");

   printf("M³: ");
   scanf("%f", &m);

   l = 1000*m;

   printf("%.2fm³ correspondem a %.2fl", m, l);
}