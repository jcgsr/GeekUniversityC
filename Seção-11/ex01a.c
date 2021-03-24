// 23.03.2021

#include <stdio.h>

int main()
{
  FILE *arq;
  char c;

  arq = fopen("infotext.txt", "r");
  
  if (arq) 
  {
    while((c = getc(arq)) != EOF)
    {
      printf("%c", c);
    }
  }
  else 
  {
    printf("Arquivo não encontrado.");
  }

  return 0;
}
