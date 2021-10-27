// FUP que leia uma string e a escreva em letras maiúsculas e letras minúsculas.


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    char str[50], teste1;

    printf("Insira uma frase: ");
    gets(str);

    for(int i=0; str[i] != '\0'; i++)
        if (islower (str[i])) 
        str[i] = toupper (str[i]);

        else if (isupper (str[i])) 
        str[i] = tolower(str[i]);
        printf ("string com caixa invertida:%s",str);


    return 0;

}
