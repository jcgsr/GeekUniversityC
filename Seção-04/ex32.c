// 14.03.2021

#include <stdio.h>

int main(void) {
  int cod, qnt;
  float price, total;

  puts("Preços do Lanche");

  printf("Informe o código: ");
  scanf("%d", &cod);

  printf("Informe a quantidade: ");
  scanf("%d", &qnt);

  switch (cod) {
  case 100:
    price = 1.20;
    break;
  case 101:
    price = 1.30;
    break;
  case 102:
    price = 1.50;
    break;
  case 103:
    price = 1.20;
    break;
  case 104:
    price = 1.70;
    break;
  case 105:
    price = 2.2;
    break;
  case 106:
    price = 1.00;
    break;
  default:
    printf("Informe um número válido.");
    break;
  }
  total = price * qnt;
  printf("\nTOTAL: %.2f", total);
}
