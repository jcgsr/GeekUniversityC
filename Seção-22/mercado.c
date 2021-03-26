// 26.03.2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // pausa o programa

typedef struct {
  int codigo;
  char nome[30];
  float preco;
} Produto;

typedef struct {
  Produto produto;
  int quantidade;
} Carrinho;

void info_produto(Produto prod);
void menu();
void comprar_produto();
void cadastrar_produto();
void listar_produto();
void visualizar_carrinho();
void fechar_pedido();
Produto pegar_produto_por_codigo(int codigo);
int *tem_no_carrinho(int codigo);

static int contador_produto = 0;
static int contador_carrinho = 0;
static Carrinho carrinho[50];
static Produto produtos[50];

int main() {
  puts("\t***Mercado C***\n\n");
  menu();
  return 0;
}

void info_produto(Produto prod) {
  printf("Código: %d \nNome: %s \nPreço: %.2f\n", prod.codigo,
         strtok(prod.nome, "\n"), prod.preco);
}

void menu() {
  printf("===============================\n");
  printf("========== Bem-vindo! =========\n");
  printf("=========== Mercado ===========\n");
  printf("===============================\n");

  printf("Selecione uma opção:\n");
  printf("1 - Cadastrar produdo\n");
  printf("2 - Listar produdo\n");
  printf("3 - Comprar produdo\n");
  printf("4 - Visualizar carrinho\n");
  printf("5 - Fechar pedido\n");
  printf("6 - Sair do sistema\n");

  int opcao;
  scanf("%d", &opcao);
  getchar();

  switch (opcao) {
  case 1:
    cadastrar_produto();
    break;
  case 2:
    listar_produto();
    break;
  case 3:
    comprar_produto();
    break;
  case 4:
    visualizar_carrinho();
    break;
  case 5:
    fechar_pedido();
    break;
  case 6:
    printf("Volte sempre!");
    sleep(2);
    exit(0);
    break;
  default:
    printf("Opção inválida.\n");
    sleep(2);
    menu();
    break;
  }
}

void cadastrar_produto() {
  printf("Cadastro de Produto\n");
  printf("===================\n");
  printf("Nome do produto: \n");
  fgets(produtos[contador_produto].nome, 30, stdin);

  printf("Preço do produto: \n");
  scanf("%f", &produtos[contador_produto].preco);

  printf("%s cadastrado com sucesso!\n",
         strtok(produtos[contador_produto].nome, "\n"));
  produtos[contador_produto].codigo = (contador_produto + 1);
  contador_produto++;
  sleep(2);
  menu();
}

void listar_produto() {
  if (contador_produto > 0) {
    printf("Listagem de Produtos\n");
    printf("--------------------\n");
    for (int i = 0; i < contador_produto; i++) {
      info_produto(produtos[i]);
      printf("------------------\n");
      sleep(1);
    }
    sleep(2);
    menu();
  } else {
    printf("Sem produtos cadastrados.\n");
    sleep(2);
    menu();
  }
}
void comprar_produto() {
  if (contador_produto > 0) {
    printf("Código do produto para adicionar.\n");
    printf("===== Produtos Disponíveis ====\n");
    for (int i = 0; i < contador_produto; i++) {
      info_produto(produtos[i]);
      printf("------------------\n");
      sleep(1);
    }
    int codigo;
    scanf("%d", &codigo);
    getchar();

    int tem_mercado = 0;
    for (int i = 0; i < contador_produto; i++) {
      if (produtos[i].codigo == codigo) {
        tem_mercado = 1;
        if (contador_carrinho > 0) {
          int *retorno = tem_no_carrinho(codigo);
          if (retorno[0] == 1) {
            carrinho[retorno[1]].quantidade++;
            printf(
                "Aumentei a quantidade do produto %s existente no carrinho\n",
                strtok(carrinho[retorno[1]].produto.nome, "\n"));
            sleep(2);
            menu();
          } else {
            Produto p = pegar_produto_por_codigo(codigo);
            carrinho[contador_carrinho].produto = p;
            carrinho[contador_carrinho].quantidade = 1;
            contador_carrinho++;
            printf("O produto %s foi adicionado ao carrinho.\n",
                   strtok(p.nome, "\n"));
            sleep(2);
            menu();
          }
        } else {
          Produto p = pegar_produto_por_codigo(codigo);
          carrinho[contador_carrinho].produto = p;
          carrinho[contador_carrinho].quantidade = 1;
          contador_carrinho++;
          printf("O produto %s foi adicionado ao carrinho.\n",
                 strtok(p.nome, "\n"));
          sleep(2);
          menu();
        }
      }
    }
    if (tem_mercado < 1) {
      printf("Não foi encontrado nenhum produto com o código %d.\n", codigo);
      sleep(2);
      menu();
    }
  } else {
    printf("Sem produtos para vender ainda,\n");
    sleep(2);
    menu();
  }
}
void visualizar_carrinho() {
  if (contador_carrinho > 0) {
    printf("Produtos do Carrinho");
    printf("--------------------\n");
    for (int i = 0; i < contador_carrinho; i++) {
      info_produto(carrinho[i].produto);
      printf("Quantidade: %d\n", carrinho[i].quantidade);
      printf("--------------------\n");
      sleep(1);
      menu();
    }
  } else {
    printf("Sem produtos no carrinho.\n");
    sleep(2);
    menu();
  }
}

Produto pegar_produto_por_codigo(int codigo) {
  Produto p;
  for (int i = 0; i < contador_produto; i++) {
    if (produtos[i].codigo == codigo) {
      p = produtos[i];
    }
  }
  return p;
}

int *tem_no_carrinho(int codigo) {
  int static retorno[] = {0, 0};
  for (int i; i < contador_carrinho; i++) {
    if (carrinho[i].produto.codigo == codigo) {
      retorno[0] = 1;
      retorno[1] = i;
    }
  }
  return retorno;
}

void fechar_pedido() {
  if (contador_carrinho > 0) {
    float valor_total = 0.0;
    printf("Produtos do Carrinho\n");
    printf("--------------------\n");
    for (int i = 0; i < contador_carrinho; i++) {
      Produto p = carrinho[i].produto;
      int quantidade = carrinho[i].quantidade;
      valor_total += p.preco * quantidade;
      info_produto(p);
      printf("Quantidade: %d\n", quantidade);
      printf("--------------------\n");
      sleep(1);
    }
    printf("Sua fatura é R$ %.2f\n", valor_total);
    // limpar carrinho
    contador_carrinho = 0;
    printf("Obrigado pela preferência!\n");
    sleep(5);
    menu();
  } else {
    printf("Nenhum produto no carrinho ainda.\n");
    sleep(3);
    menu();
  }
}
