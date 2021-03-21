// 16.03.2021

#include <stdio.h>

int main(void) {

  int i, n;
  int soma = 0;
  printf("Soma 10 números\n");

  for (i = 1; i <= 10; i++) {
    printf("\nDigite número %d: ", i);
    scanf("%d", &n);
    soma += n;
  }
  printf("A soma dos 10 números foi: %d", soma);
  return 0;
}
