// 24.03.2021

#include <stdio.h>

int soma(int valor, int max);

int main() {
  int n = 0;
  int total = 0;
  puts("Função Recursiva");
  printf("Número: ");
  scanf("%d", &n);
  total = soma(total, n);
  printf("A soma dos números números até %d é: %d", n, total);
  return 0;
}
int soma(int valor, int max) 
{
  if (valor < max) 
  {
    return valor + soma(++valor, max);
  }
  return 0;
}
