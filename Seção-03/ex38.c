// 07.12.2020
// Susi doi dormir no hospital... Parece que Simone vai partir... :(

#include <stdio.h>

int main (void)
{
   puts("Salário 25%");

   float sal;

   printf("Valor: ");
   scanf("%f", &sal);
   float aumento = sal*0.25;
   float total = sal + aumento;

   printf("Salário com aumento %.2f", total);

}