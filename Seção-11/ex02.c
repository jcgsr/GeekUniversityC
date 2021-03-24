/*
 * 23.03.2021
 * C Program to Find the Number of Lines in a Text File
 * 
 */
#include <stdio.h>
 
int main()
{
    FILE *fileptr;
    int count_lines = 0;
    char filechar[40], chr;
 
    printf("Digite o nome do arquivo na pasta atual: ");
    scanf("%s", filechar);
    fileptr = fopen(filechar, "r");
   //extract character from file and store in chr
    chr = getc(fileptr);
    while (chr != EOF)
    {
        //Count whenever new line is encountered
        if (chr == 'n')
        {
            count_lines = count_lines + 1;
        }
        //take next character from file.
        chr = getc(fileptr);
    }
    fclose(fileptr); //close file.
    printf("Existem %d linhas no arquivo %s.\n", count_lines, filechar);
    return 0;
}