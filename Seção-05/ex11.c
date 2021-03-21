// 16.03.2021

#include <stdio.h>

int main(void) {

  int i;
  puts("Ordem Crescente");
  
  printf("Digite um número: ");
  scanf("%d", &i);

  for (int j = 0; j <= i; j++) {
    printf("%d ", j);
  }
}
