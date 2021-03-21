// 21.03.2021
// Diana 3 anos e 4 meses hoje

#include <stdio.h>

int verificador(int n);

int main (void)
{
  int n;
  puts("Verificador de Número");
  printf("Digite um número: ");
  scanf("%d", &n);

  int res = verificador(n);
  printf("O número %d é: %d.", n, res);
}

int verificador(n) 
{
  if (n < 0)
  {
    n = -1;
  }
  else if (n > 0)
  {
    n = 1;
  }
  else
  {
    n = 0;
  }
  return n;  
}