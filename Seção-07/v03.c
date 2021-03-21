// 18.03.2021

 #include <stdio.h>
 #include <math.h>

int main (void)
{
  puts("Vetores - Reais");
  float n[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um número: ");
    scanf("%f", &n[i]);
  }
  float quadrado[10];
  for (int i = 0; i < 10; i++)
  {
    quadrado[i] = pow(n[i], 2);    
  }
  
  for (int i = 0; i < 10; i++)
  {
    printf("%f\n", quadrado[i]);
  }
  
  return 0;  
}