// 16.12.2020

#include <stdio.h>

int main(void)
{
   puts("Dias da Semana");
   int n;
   printf("Digite um número (1-7): ");
   scanf("%d", &n);

   switch (n)
   {
   case 1:
      printf("Domingo");
      break;
   case 2:
      printf("Segunda");
      break;
   case 3:
      printf("Terça");
      break;
   case 4:
      printf("Quarta");
      break;
   case 5:
      printf("Quinta");
      break;
   case 6:
      printf("Sexta");
      break;
   case 7:
      printf("Sábado");
      break;
   default:
      printf("Número inválido.");
      break;
   }
}