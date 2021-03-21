// 18.03.2021

 #include <stdio.h> 

int main (void)
{
  int i;
  int big;
  int small;
  int n[10];

  puts("Maior e Menor elemento dos Vetores");

  for (i = 0; i < 10; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &n[i]);
  }
  big = n[0];
  small = n[0];

  for (i = 0; i < 10; i++)
  {
 if (n[i] > big)
  {
    big = n[i]; 
  }
  if (n[i] < small) 
  {
    small = n[i];
  }

  }
   printf("O maior elemento nos vetores é: %d", big);
  printf("\nO menor elemento nos vetores é: %d", small);
 
  return 0;  
}
