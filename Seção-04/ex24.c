// 26.01.2021

#include <stdio.h>

int main(void) {
  float mg = 0.07;
  float sp = 0.12;
  float rj = 0.15;
  float ms = 0.08;
  float valor;
  float res;
  float total;
  int estado;

  puts("Estado e Imposto");

  printf("\nInforme o valor do produto: R$ ");
  scanf("%f", &valor);
  printf("\nAgora escolha o Estado: \n");

  printf("1 - Minas Gerais\n");
  printf("2 - São Paulo\n");
  printf("3 - Rio de Janeiro\n");
  printf("4 - Mato Grosso do Sul\n");

  scanf("%d", &estado);

  if (estado == 1) {
    res = valor * mg;
    total = valor + res;
    printf("Estado: MG; Valor do Produto: R$ %.2f; \nImposto (0.07) sobre valor: R$ %.2f; \nTotal: R$ %.2f", valor, res, total);
  } else if (estado == 2) {
    res = valor * sp;
    total = valor + res;
    printf("Estado: SP; Valor do Produto: R$ %.2f; \nImposto (0.12) sobre valor: R$ %.2f; \nTotal: R$ %.2f", valor, res, total);
  } else if (estado == 3) {
    res = valor * rj;
    total = valor + res;
    printf("Estado: RJ; Valor do Produto: R$ %.2f; \nImposto (0.15) sobre valor: R$ %.2f; \nTotal: R$ %.2f", valor, res, total);
  } else if (estado == 4) {
    res = valor * ms;
    total = valor + res;
    printf("Estado: MS; Valor do Produto: R$ %.2f; \nImposto (0.08) sobre valor: R$ %.2f; \nTotal: R$ %.2f", valor, res, total);
  } else {
    printf("Estado não existe.");
  }
}
