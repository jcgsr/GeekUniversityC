// 18.03.2021

 #include <stdio.h> 

int main (void)
{
  int soma = 0, i, x = 0;
  int n[10], par[10];

  puts("Vetores Pares");
  for (i = 0; i < 10; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &n[i]);
  }  
  for (i = 0; i < 10; i++)
  {
    if (n[i] % 2 == 0)
    {
      soma = soma + n[i];
      par[x] = n[i];
      x++;

    }  
  } 
  printf("Total de vetores pares: %d", x);
  printf("\nSoma dos valores dos vetores pares %d", soma);
  return 0;  
}
