// 21.03.2021

#include <stdio.h>

int main (void)
{
  puts("\t**Ponteiros**\n\n");
  
  puts("Inteiros");
  int* n;
  int valor_n = 8;
  n = &valor_n;
  printf("Antes de modificar ↓\n");
  printf("Variável - %d\n", (*n));
  printf("Endereço - %d\n", n);
  printf("Depois de modificar ↓\n");
  printf("Variável - %d\n", ++(*n));
  printf("Endereço - %d\n\n", n);

  puts("Inteiros 2");
  int nn = 1981;
  printf("Antes de modificar ↓\n");
  printf("Variável - %d\n", nn);
  printf("Endereço - %d\n", &nn);
  printf("Depois de modificar ↓\n");
  printf("Variável - %d\n", ++nn);
  printf("Endereço - %d\n\n", &nn);
  
  puts("Reais");
  float* r;
  float valor_r = 28;
  r = &valor_r;
  printf("Antes de modificar ↓\n");
  printf("Variável - %f\n", (*r));
  printf("Endereço - %d\n", r);
  printf("Depois de modificar ↓\n");
  printf("Variável - %f\n", ++(*r));
  printf("Endereço - %d\n\n", r);
  
  puts("Char");
  char valor_c[1] = "j";
  printf("Variável - %s\n", valor_c);
  printf("Endereço - %d\n", &valor_c);

}
