// 17.03.2021

#include <stdio.h>

int main(void) {

  int i;
  puts("Ordem Decrescente");
  
  printf("Digite um número: ");
  scanf("%d", &i);

  for (int j = i; j >= 0; j--) {
    printf("%d ", j);
  }
}
