// 24.03.2021

#include <stdio.h>
int fat(int n) {
  if (n)
    return n * fat(n - 1);
  else
    return 1;
}

int main() {
  puts("FATORIAL");
  int n;
  printf("\n\nDigite um valor para n: ");
  scanf("%d", &n);
  printf("\nO fatorial de %d é %d", n, fat(n));
  return 0;
}
