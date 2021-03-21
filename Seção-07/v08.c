// 18.03.2021

#include <stdio.h>

int main(void) {
  int i;
  int n[6];

  puts("\t\tVetores Inversos");

  for (i = 0; i <= 6; i++) {
    printf("Digite um número: ");
    scanf("%d", &n[i]);
  }
  for (i = 6; i >= 0; i--) {
    printf("vetor [%d], %d\n", i, n[i]);
  }
  return 0;
}
