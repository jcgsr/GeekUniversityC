// 08.12.2020
//Susi foi dormir no hospital (saiu pouco antes das 21h)
// Simone bem ruim :(((( respiração fraca, alimentação sendo recusada...

#include <stdio.h>

int main(void)
{
   puts("Peso ideal");

   float altura;
   char s;

   printf("Digite sua altura: ");
   scanf("%f", &altura);

   printf("Digite seu sexo (m ou f): ");
   scanf("%s", &s);

   if (s == 'm')
   {
      printf("Peso ideal masculino %.2f", (72.7 * altura) - 58);
   }
   else if (s == 'f')
   {
      printf("Peso ideal feminino %.2f", (62.1 * altura) - 44.7);
   }
   else
   {
      printf("Inválido");
   }
}