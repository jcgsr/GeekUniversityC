// 17.03.2021

#include <stdio.h>

int main(void) {

  int n;
  int flag = -1;
  puts("Par ou Ímpar?");
  
  printf("Digite um número: ");
  scanf("%d", &n);
  if (n % 2 == 0) {
      printf("\n%d é PAR!", n);
    } else if (n % 2 != 0) {
      printf("\n%d é ÍMPAR!", n);
    } 
  while (n != flag) 
  {
    printf("\nDigite um número (-1 sair): ");
    scanf("\n%d", &n);
    if (n % 2 == 0) {
      printf("\n%d é PAR!", n);
    } else if (n % 2 != 0) {
      printf("\n%d é ÍMPAR!", n);
    } 
  }
  return 0;
}
