// 21.03.2021
// Diana 3 anos e 4 meses hoje

#include <stdio.h>
#include <math.h>

void perfeito(unsigned int S);

int main (void)
{
  puts("Quadrado Perfeito");
  unsigned int num, raiz;
  printf("Digite um número: ");
  scanf("%u", &num);
  perfeito(num);
  return 0;
}

void perfeito(unsigned int S)
{
  unsigned int tmp = sqrt(S);
  if (tmp * tmp == S)
  {
    puts("É Quadrado Perfeito!");
  }
  else
  {
    puts("Não é Quadrado Perfeito");
  }
}
