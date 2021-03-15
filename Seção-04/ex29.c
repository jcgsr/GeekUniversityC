// 14.03.2021

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int a, b, total, resposta, tentativa;

  puts("Prova de Matemática");

  srand(time(NULL));

  for (int i = 0; i < 2; i++) {

    a = rand() % 100;
    b = rand() % 100;
  }

  total = a + b;

  printf("Qual a soma de %d + %d?", a, b);
  printf("\nSua resposta: ");
  scanf("%d", &resposta);

  if (resposta == total) {
    printf("Correto!\n");
    printf("Total = %d\n", total);
  } else {
    printf("Tente novamente!\n");
    printf("Total = %d\n", total);
  }
  for (int k = 0; k < 8; k++) {
    printf("%d\n", k);
  }
}
