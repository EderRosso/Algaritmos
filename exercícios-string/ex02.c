// FUP que leia o nome e o sobrenome de uma pessoa em duas vari�veis distintas, 
// o programa deve armazenar os dois valores uma terceira vari�vel.


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    char str1[20], str2[40], str3[60];

    printf("Insira o nome: ");
    gets(str1);

    printf("Insira o sobrenome: ");
    gets(str2);

    strcat(str1, " ");      // Concatena o nome com um espa�o em branco
    strcat(str1, str2);     // Conatena o nome com o sobrenome
    strcpy(str3, str1);     // Copia a string inteira para uma terceira vari�vel
    printf("%s",str3);

    return 0;
}

