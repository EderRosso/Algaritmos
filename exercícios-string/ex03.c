// FUP que leia uma string e um caracter, o programa deve informar quantas 
// vezes o caracter lido aparece na string.


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    char str[60], c;
    int q = 0;

    printf("Insira uma frase: ");
    gets(str);
    // fflush(stdin);

    printf("Insira um caractere: ");
    c = getchar();

    for(int i=0; i < strlen(str); i++){
	    if(strcmpi(str[i], c) == 0){
		    q = q + 1;
        }else{
            printf("ERRO");
        }

    }
    
    printf("\nA letra %s se repete: %i", c, q);



    return 0;
}
