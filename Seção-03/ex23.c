// 06.12.2020
#include <stdio.h>

int main (void)
{
   float j, m;
   puts("M para Jardas");

   printf("Metros: ");
   scanf("%f", &m);

   j = m/0.91;

   printf("%.2f m correspondem a %.2f jardas", m, j);
}