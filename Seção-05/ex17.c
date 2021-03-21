// 17.03.2021

#include <stdio.h>

int main(void) {

  int i, n, s;
  puts("Soma N Números Naturais");
  
  printf("Digite um número: ");
  scanf("%d", &n);
  s = 0;
  i = 0;

  while (i < n) {
    i = i + 1;
    s = s + i;
  }
  printf("\nA soma de 1 até %d é %d.", n, s);
  return 0;
}
