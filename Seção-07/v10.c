// 18.03.2021

#include <stdio.h>

int main (void)
{
  puts("\t\tMédia Geral - 10 alunos");

  int alunos[10];
  int i, soma = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Informe a nota %d: ", i + 1);
    scanf("%d", &alunos[i]);
    soma += alunos[i];
  }
    printf("A média geral dos 10 alunos é: %d\n", soma / 10);
}
