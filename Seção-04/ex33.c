// 15.03.2021

#include <stdio.h>

int main(void) {

  float price_old, price_new, total;
  float cinco = 0.05;
  float dez = 0.1;
  float quinze = 0.15;

  puts("Aumento de Preço");

  printf("\naté R$ 50");
  printf("\nentre R$ 50 e R$ 100");
  printf("\nacima de 100");

  printf("\nInforme o preço antigo de acordo com a tabela acima: \n");

  scanf("%f", &price_old);

  if (price_old <= 50) {
    price_new = price_old * cinco;
    printf("\nAumento de 5 por cento: %.2f", price_new);
    total = price_old + price_new;
    printf("\nTotal: %.2f", total);
  } else if (price_old > 50 && price_old <= 100) {
    price_new = price_old * dez;
    printf("\nAumento de 10 por cento: %.2f", price_new);
    total = price_old + price_new;
    printf("\nTotal: %.2f", total);
  } else if (price_old > 100) {
    price_new = price_old * quinze;
    printf("\nAumento de 15 por cento: %.2f", price_new);
    total = price_old + price_new;
    printf("\nTotal: %.2f", total);
  }
  return 0;
}
