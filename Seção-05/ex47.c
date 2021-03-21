// 17.03.2021

#include <stdio.h>

int main(void)
{
  puts("***Calculadora - 2 valores***");
  
  int n, n1, n2, total;

  printf("\nAdição - 1");
  printf("\nSubtração - 2");
  printf("\nMultiplicação - 3");
  printf("\nDivisão - 4");
  printf("\nSair - 5");

  printf("\nEscolha uma operação acima:\n ");

  scanf("%d", &n);
  
  while (n != 5) {
    if (n == 1) {
        printf("\nPrimeiro número: ");
        scanf("%d", &n1);
        printf("\nSegundo número: ");
        scanf("%d", &n2);
        total = n1 + n2;
        printf("\nA soma de %d com %d = %d.\n", n1, n2, total);
      
        printf("\nEscolha uma opção abaixo: ");
        printf("\nAdição - 1");
        printf("\nSubtração - 2");
        printf("\nMultiplicação - 3");
        printf("\nDivisão - 4");
        printf("\nSair - 5\n");

        scanf("%d", &n);
    }
     if (n == 2) {
        printf("\nPrimeiro número: ");
        scanf("%d", &n1);
        printf("\nSegundo número: ");
        scanf("%d", &n2);
        total = n1 - n2;
        printf("\nA subtração de %d com %d = %d.\n", n1, n2, total);
      
        printf("\nEscolha uma opção abaixo: ");
        printf("\nAdição - 1");
        printf("\nSubtração - 2");
        printf("\nMultiplicação - 3");
        printf("\nDivisão - 4");
        printf("\nSair - 5\n");

        scanf("%d", &n);
    }
    if (n == 3) {
        printf("\nPrimeiro número: ");
        scanf("%d", &n1);
        printf("\nSegundo número: ");
        scanf("%d", &n2);
        total = n1 * n2;
        printf("\nA multiplicação de %d com %d = %d.\n", n1, n2, total);
      
        printf("\nEscolha uma opção abaixo: ");
        printf("\nAdição - 1");
        printf("\nSubtração - 2");
        printf("\nMultiplicação - 3");
        printf("\nDivisão - 4");
        printf("\nSair - 5\n");

        scanf("%d", &n);
    }
    if (n == 4) {
        printf("\nPrimeiro número: ");
        scanf("%d", &n1);
        printf("\nSegundo número: ");
        scanf("%d", &n2);
        total = n1 / n2;
        printf("\nA divisão de %d com %d = %d.\n", n1, n2, total);
      
        printf("\nEscolha uma opção abaixo: ");
        printf("\nAdição - 1");
        printf("\nSubtração - 2");
        printf("\nMultiplicação - 3");
        printf("\nDivisão - 4");
        printf("\nSair - 5\n");

        scanf("%d", &n);
    }


  }
}
