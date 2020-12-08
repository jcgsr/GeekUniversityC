// 06.12.2020

#include <stdio.h>

int main (void)
{
   int n;
   puts("Antecessor s Sucessor");
   
   printf("Número: ");
   scanf("%d", &n);

   printf("O antecessor de %d é %d e o sucessor é %d", n, n-1, n+1);
}