// 08.12.2020

#include <stdio.h>

int main(void)
{
   int alt_degrau, alt_desejo;
   puts("Altura degrau");

   printf("Altura degrau: ");
   scanf("%d", &alt_degrau);
   printf("Altura desejada: ");
   scanf("%d", &alt_desejo);

   int total = alt_desejo / alt_degrau;
   printf("Total de degraus: %d", total);
}