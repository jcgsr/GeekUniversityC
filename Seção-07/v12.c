// 19.03.2021

#include <stdio.h>

int main (void)
{
  puts("\t\t5 valores, maior, menor, média");

  int valor[5];
  int i, soma = 0;
  int maior, menor;

  for (i = 0; i < 5; i++)
  {
    printf("Informe o valor %d: ", i + 1);
    scanf("%d", &valor[i]);
    soma += valor[i];
  }
  maior = valor[0];
  menor = valor[0];
    for (i = 0; i < 5; i++) 
    {
      if (valor[i] > maior) 
      {
        maior = valor[i];
      }
      if (valor[i] < menor)
      {
        menor = valor[i];
      }
      printf("valor %d - %d\n", i + 1, valor[i]);

    }
      printf("O maior elemento nos vetores é: %d", maior);
      printf("\nO menor elemento nos vetores é: %d", menor);
 
      printf("\nA média geral dos valores é: %d\n", soma / 5);
}
