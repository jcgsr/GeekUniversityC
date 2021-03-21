// 17.03.2021

#include <stdio.h>

int main(void)
{
  puts("Número Harmônico H");
  float Hn;
  int n, k;

  printf("Digite um número: ");
  scanf("%d", &n);

  Hn = 0;

  for (k = 1; k <= n; k++) {
    Hn += (float)1/k;
  }
  printf("O valor de harmônico de %d → %f\n", n, Hn);

  return 0;
}
