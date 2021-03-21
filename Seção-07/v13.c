// 20.03.2021

#include <stdio.h>

int main(void) {
  int i;
  int maior, maiorPos;
  int menor, menorPos;
  int n[5];

  puts("\t\tMaior e Menor elemento dos Vetores");

  for (i = 0; i < 5; i++) 
  {
    printf("Digite um valor: ");
    scanf("%d", &n[i]);
  }
  maior = n[0];
  menor = n[0];
  for (i = 0; i < 5; i++) 
  {
    printf("vetor[%d]: %d\n", i + 1, n[i]);
    if (n[i] > maior) 
    {
      maior = n[i];
      maiorPos = i;
    }
    if (n[i] < menor)
    {
      menor = n[i];
      menorPos = i;
    }
  }
  printf("O maior elemento nos vetores é: %d", maior);
  printf("\nE ele se encontra no vetor: %d", maiorPos + 1);
  printf("\nO menor elemento nos vetores é: %d", menor);
  printf("\nE ele se encontra no vetor: %d", menorPos + 1);
  return 0;
}
