// 221.03.2021
#include <stdio.h>
#include <stdlib.h>

void extenso(int dia, int mes, int ano);

int main(void)
{
  int dia, mes, ano;
  puts("Função Data Impressa");

  printf("Dia: ");
  scanf("%i", &dia);

  // limpa buffer de entrada
  while (getchar()  != '\n');

  printf("Mês: ");
  scanf("%i", &mes);

  while (getchar()  != '\n');

  printf("Ano: ");
  scanf("%i", &ano);

  extenso(dia, mes, ano);
  
  return 0;
}

void extenso(int dia, int mes, int ano)
{
  const char* meses[] = 
  {
    "Jan", "Fev", "Mar", "Abr", "Maio",
    "Jun", "Jul", "Ago", "Set"," Out","Nov", "Dez"
  };
  printf("A data é: %i de %s de %i.\n", dia, meses[mes - 1], ano);
}

