// 18.03.2021

#include <stdio.h>

int main(void) {
  int i;
  int big, bigPos;
  int n[10];

  puts("\t\tMaior elemento dos Vetores");

  for (i = 0; i < 10; i++) {
    printf("Digite um número: ");
    scanf("%d", &n[i]);
  }
  big = n[0];

  for (i = 0; i < 10; i++) {

    printf("vetor[%d] - %d\n", i, n[i]);
    if (n[i] > big) {
      big = n[i];
      bigPos = i;
    }
  }
  printf("O maior elemento nos vetores é: %d", big);
  printf("O maior elemnto se encontra no vetor: %d", bigPos);
  return 0;
}
