// 23.03.2021

#include <stdio.h>

int main() {
   unsigned short letter = 0;
   char c, letra, file[50];
   FILE *fp;

   printf("Nome do Arquivo: ");
   scanf("%[^\n]", file);

   fp = fopen(file, "r"); // 'r' opens the file in read mode

   printf("Lendo o conteúdo do arquivo [ %s ]\n", file);

   printf("Digite uma letra: ");
   scanf("%s", &letra);


   while((c = fgetc(fp)) != EOF) {
   	  if(c == letra) {
   	  	letter++;
   	  }

      printf("%c", c);
   }

   printf("\n");

   printf("NÚMERO DE VEZES QUE '%c' apareceu: %hu \n", letra, letter);

   fclose(fp);
   return 0;
}
