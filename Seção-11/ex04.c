// 23.03.2021

#include <stdio.h>

int main() {
   unsigned short vowels = 0;
   unsigned short consonants = 0;
   char c, file[50];
   FILE *fp;

   printf("Nome do Arquivo: ");
   scanf("%[^\n]", file);

   fp = fopen(file, "r"); // 'r' opens the file in read mode

   printf("Lendo o conteúdo do arquivo [ %s ]\n", file);

   while((c = fgetc(fp)) != EOF) 
   {
   	  if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') 
      {
   	  	vowels++;
   	  }
       else 
       {
         consonants++;
       }

      printf("%c", c);
   }

   printf("\n");

   printf("NÚMERO DE VOGAIS: %hu \n", vowels);
   printf("NÚMERO DE CONSOANTES: %hu \n", consonants);

   fclose(fp);
   return 0;
}