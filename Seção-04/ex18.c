// 25.01.2021
// C no Vim!

#include <stdio.h>

int main(void) {
  puts("Escolha das Operações Básicas\n");
 
  int op;
  float number1;
  float number2;
  float result;

  puts("Escolha uma operação:\n");

  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  
  scanf("%d", &op);
  
  printf("Agora digite um número: ");
  scanf("%f", &number1);
  
  printf("Agora digite outro número: ");
  scanf("%f", &number2);


  if (op == 1) {
    result = number1 + number2;
    printf("Você esolheu Soma: %.2f + %.2f = %.2f ", number1, number2, result);
  }
  if (op == 2) {
    result = number1 - number2;
    printf("Você esolheu Subtração: %.2f - %.2f = %.2f ", number1, number2, result);
  }
  if (op == 3) {
    result = number1 * number2;
    printf("Você esolheu Multiplicação: %.2f x %.2f = %.2f ", number1, number2, result);
  }
  if (op == 4) {
    result = number1 / number2;
    printf("Você esolheu Divisão: %.2f /  %.2f = %.2f ", number1, number2, result);
  }

}
