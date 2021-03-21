// 16.03.2021

#include <stdio.h>

int main(void) {

  int i, n;
  int soma = 0;
  float media;
  printf("Média de 10 números\n");

  for (i = 1; i <= 10; i++) {
    printf("\nDigite número %d: ", i);
    scanf("%d", &n);
    soma += n;
  }
  media = (float)soma / 10;
  printf("A média dos 10 números foi: %.2f\n", media);
  return 0;
}
