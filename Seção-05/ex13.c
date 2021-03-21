// 17.03.2021

#include <stdio.h>

int main(void) {

  int i;
  puts("Ordem Crescente Par");
  
  printf("Digite um número: ");
  scanf("%d", &i);

  for (int j = 0; j <= i; j++) {
    if (j % 2 == 0) {
      
      printf("%d ", j);
    }
  }
}
