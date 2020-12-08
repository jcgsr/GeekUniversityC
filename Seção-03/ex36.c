// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main (void)
{
   puts("Cilindro");

   float a, r, volume;
   float pi = 3.141592;
   printf("Altura: ");
   scanf("%f", &a);
   printf("Raio: ");
   scanf("%f", &r);

   volume = pi*(r*r)*a;

   printf("O volume do cilindro é %f", volume);

}