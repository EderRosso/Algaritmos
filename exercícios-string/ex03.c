// FUP que leia uma string e um caracter, o programa deve informar quantas 
// vezes o caracter lido aparece na string.


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    char str[129], c;
    int q = 0, tam = 0;
  
    

    printf("Insira uma frase:");
    gets(str);

    strlwr(str);
    fflush(stdin);

    printf("Insira um caractere:");
    scanf("%c",&c);
        
    tam = strlen(str);        // Conta  a quantidade de letras
    printf("Letras %i\n",tam); 

    for (int i = 0; i < strlen(str); i++){      //Conta a quantidade de letras para o for percorrer
        if (str[i] == c){       //Se as letras forem iguais
            q++;
            
            }
    }
    printf("\nA letra -%c- aparece %i", c, q);
    
      
    
    



    return 0;
}
