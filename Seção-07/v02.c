// 18.03.2021

#include <stdio.h>

int main (void)
{
  puts("Vetores - 6");

  int n[6];
  for (int i = 0; i < 6; i++) {
    printf("Digite um valor: ");
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 6; i++) {
    printf("%d\n", n[i]);
  }

  return 0;
}
