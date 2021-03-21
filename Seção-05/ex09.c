// 16.03.2021

#include <stdio.h>

int main(void) {

  puts("N Números Ímpares\n");
  int i;
  printf("Digite um número: ");
  scanf("%d", &i);
  for (int j = 1;j <= i; j++) {
    if (j % 2 != 0) {
    printf("\n %d ", j);
    }
  }
  return 0;
}
