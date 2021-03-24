// 23.03.2021

#include <stdio.h>

int main() {
   unsigned short vowels = 0;
   char c, file[50];
   FILE *fp;

   printf("Nome do Arquivo: ");
   scanf("%[^\n]", file);

   fp = fopen(file, "r"); // 'r' opens the file in read mode

   printf("Lendo o conteúdo do arquivo [ %s ]\n", file);

   while((c = fgetc(fp)) != EOF) {
   	  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || 
          c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
   	  	vowels++;
   	  }

      printf("%c", c);
   }

   printf("\n");

   printf("NÚMERO DE VOGAIS: %hu \n", vowels);

   fclose(fp);
   return 0;
}
