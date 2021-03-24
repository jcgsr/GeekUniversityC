// 24.03.2021

#include <stdio.h>
#include <string.h>

struct st_dados {
  int hora, min, seg;
  int mes, dia, ano;
  char compromisso[100];
} dado1;

int main() {
  FILE *f;
  char dados_ent[100];

  f = fopen("dados_ent.txt", "w");

  if (f) {
    printf("hora: ");
    scanf("%d", &dado1.hora);

    printf("minuto: ");
    scanf("%d", &dado1.min);

    printf("segundo: ");
    scanf("%d", &dado1.seg);

    printf("mês: ");
    scanf("%d", &dado1.mes);

    printf("dia: ");
    scanf("%d", &dado1.dia);

    printf("ano: ");
    scanf("%d", &dado1.ano);
    getchar();

    printf("compromisso: ");
    fgets(dado1.compromisso, 100, stdin);

    while (dados_ent[0] != '0') {
      fputs(dados_ent, f);
      printf("Continuar ou 0 para sair\n");
      fgets(dados_ent, 100, stdin);
    }

    printf("*****dados*****\n");
    printf("dados do compromisso\n");
    printf("\ndata: %d/%d/%d", dado1.dia, dado1.mes, dado1.ano);
    printf("\nhorário: %d/%d/%d", dado1.hora, dado1.min, dado1.seg);
    printf("\ncompromisso: %s", dado1.compromisso);
  }
  return 0;
}
