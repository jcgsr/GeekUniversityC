// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main(void)
{
   int n;

   puts("Antecessor e Sucessor");

   printf("Número: ");
   scanf("%d", &n);

   int ant = n - 1;
   int suc = n + 1;
   int dobro = ant * 2;
   int triplo = suc * 3;

   int soma = dobro + triplo;

   printf("Número: %d", n);
   printf("\nAntecessor: %d", ant);
   printf("\nSucessor: %d", suc);
   printf("\nTriplo do sucessor: %d", triplo);
   printf("\nDobro do antecessor: %d", dobro);
   printf("\nSoma de %d com %d é %d", triplo, dobro, soma);
}