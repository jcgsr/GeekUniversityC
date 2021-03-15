// 30.01.2021

#include <math.h>
#include <stdio.h>

int main(void) {
  float a, b, c, x1, x2, delta;

  puts("Raiz Quadrada Completa");

  printf("Valor de A: ");
  scanf("%f", &a);

  printf("Valor de B: ");
  scanf("%f", &b);

  printf("Valor de C: ");
  scanf("%f", &c);

  delta = (b * b) - (4 * a * c);
  printf("Delta: %f", delta);

  if (delta < 0) {
    printf("\nNão existe raiz!");
  }

  else if (delta == 0) {
    printf("\nRaiz única!");
  }

  else if (delta > 0) {
    printf("\nDuas raízes!");
  }

  x1 = (-b + sqrtf(delta)) / 2 * a;
  x2 = (-b - sqrtf(delta)) / 2 * a;

  printf("\nX1: %f", x1);
  printf("\nX2: %f", x2);
}
