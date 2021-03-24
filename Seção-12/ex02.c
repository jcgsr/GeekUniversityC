// 24.03.2021

#include <stdio.h>
#include <string.h>

struct st_dados 
{
  char nome[50];
  char endereco[100];
  int idade;
} pessoa;

int main() 
{
  printf("Nome: ");
  fgets(pessoa.nome, 50, stdin);
  printf("Endereço: ");
  fgets(pessoa.endereco, 100, stdin);
  printf("Idade: ");
  scanf("%d", &pessoa.idade);

  printf("====Dados===\n");
  printf("Nome: %s", pessoa.nome);
  printf("Endereço: %s", pessoa.endereco);
  printf("Idade: %d", pessoa.idade);

  return 0;
}
