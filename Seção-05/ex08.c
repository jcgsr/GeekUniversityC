// 16.03.2021

#include <stdio.h>

int main(void) {

  puts("Maior e Menor de 10 números");
  int i, n, x;
  int big;
  int small;
  for (i = 1; i <= 10; i++) {
    printf("\nDigite o número %d: ", i);
    scanf("%d", &x);
    if (x > big) {
      big = x;
    }
    if (x < small) {
      small = x;
    }
  }
  printf("O maior número é: %d", big);
  printf("\nO menor número é: %d", small);
  return 0;
}
