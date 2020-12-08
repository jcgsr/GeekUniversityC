// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main (void)
{
   puts("Área do Círculo");

   float n;
   float pi = 3.141592;
   printf("Raio do circulo: ");
   scanf("%f", &n);

   float area = pi*n*n;

   printf("Área do círculo de raio %f é %f", n, area);
}