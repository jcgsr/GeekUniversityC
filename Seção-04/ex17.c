// 16.12.2020

#include <stdio.h>

int main(void)
{
   puts("Base do Trapézio");
   float b_maior, b_menor, altura;

   printf("Base maior: ");
   scanf("%f", &b_maior);
   printf("Base menor: ");
   scanf("%f", &b_menor);
   printf("Altura: ");
   scanf("%f", &altura);

   if (b_maior <= 0 || b_menor <= 0)
   {
      printf("As bases têm que ser maior que 0!");
   }
   else
   {
      float base = (b_maior + b_menor) * altura / 2;
      printf("A base do trapézio é: %.2f", base);
   }
}
