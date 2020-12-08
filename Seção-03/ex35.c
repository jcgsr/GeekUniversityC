// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>
#include <math.h>

int main (void)
{
   float a, b, hipotenusa;
   puts("Hipotenusa");

   printf("Cateto A: ");
   scanf("%f", &a);
   printf("Cateto B: ");
   scanf("%f", &b);

   hipotenusa = sqrt(a*a + b*b);

   printf("A hipotenusa é %f", hipotenusa);

}