// 15.03.2021

#include <stdio.h>

int main(void) {

  int i;
  printf("1 a 100");

  printf("FOR\n");
  for (i = 1; i <= 100; i++) {
    printf("%d\n", i);
  }

  printf("WHILE\n");
  int j = 1;

  while (j <= 100) {
    printf("%d\n", j);
    j++;
  }

  printf("DO...WHILE\n");
  int k = 1;
  do {
    printf("%d\n", k);
    k++;
  } while (k <= 100);

  return 0;
}
