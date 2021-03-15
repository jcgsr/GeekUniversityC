// 25.01.2021
// C no Vim!

#include <stdio.h>

int main(void) {
  int idade;
  int tempo_de_servico;

  puts("Aposentadoria");
  
  printf("Informe sua idade: \n");
  scanf("%d", &idade);
  
  printf("Informe seu tempo de servico: \n");
  scanf("%d", &tempo_de_servico);

  if (idade >= 65 || tempo_de_servico >= 30) {
    printf("Pode se aposentar!");
  }
  else if (idade == 60 && tempo_de_servico >= 25) {
    printf("Pode se aposentar!");
  }
  else {
    printf("Não pode se aposentar!");
  }
}
 
