// 23.03.2021

#include <stdio.h>

int main()
{
  FILE *arq;
  char info[10];

  arq = fopen("infotext.txt", "a");
  
  if (arq) 
  {
    printf("\t\t**Criação Arquivo em C**\n\n");
    printf("Escreva qq informação (0 - sair): ");
    fgets(info, 10, stdin);
    while (info[0] != '0') {
      fputs(info, arq);
      printf("Escreva qq informação (0 - sair): ");
      fgets(info, 10, stdin);
    }
  }
  else
    {
      printf("Erro!");
    }
  fclose(arq);
  return 0;
}
