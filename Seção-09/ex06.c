// 21.03.2021
// Diana 3 anos e 4 meses hoje

#include <stdio.h>

int seg(int h, int m, int s);

int main (void)
{
  puts("Segundos");

  int h, m, s;
  printf("Horas: ");
  scanf("%d", &h);
  
  printf("Minutos: ");
  scanf("%d", &m);
  
  printf("Segundos: ");
  scanf("%d", &s);

  seg(h, m, s);

  printf("%d horas, %d minutos e %d segundos equivalem a um total de %d segundos.", h, m, s, seg(h, m, s));
}

int seg(int h, int m, int s)
{
  int total;
  int horas = h * 3600;
  int min = m * 60;
  total = horas + min + s;
  return total;
}