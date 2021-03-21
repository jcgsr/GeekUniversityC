// 21.03.2021
// Diana 3 anos e 4 meses hoje

#include <stdio.h>

float fahr(float c);

int main (void)

{
  puts("\tCelsius → Fahrenheit");
  float c;

  printf("Graus °C: ");
  scanf("%f", &c);

  fahr(c);

  printf("%.2f °C  = %.2f °F\n", c, fahr(c));  
}

float fahr(float c)
{
  float f = c * (9.0 / 5.0) + 32.0;
  return f;
}