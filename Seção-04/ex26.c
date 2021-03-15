// 14.03.2021

#include <stdio.h>

int main(void) {
  float km, l;

  puts("Consumo de Combustível");

  printf("Distância em Km: ");
  scanf("%f", &km);

  printf("Quantidade de litros: ");
  scanf("%f", &l);

  float total;

  total = km / l;
  printf("Consumo total: %.2fl por km.", total);

  if (total < 8) {
    printf("\nVenda o carro!");
  } else if (total >= 8 && total <= 14) {
    printf("\nEconômico!");
  } else {
    printf("\nSuper Econômico!");
  }
}
