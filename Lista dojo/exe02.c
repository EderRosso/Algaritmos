// FUP para determinar se uma pessoa é maior ou menor de idade.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define idade 18

int  main ()
{
    setlocale (LC_ALL, " português " );
    int i;
    printf("Digite sua idade: ");
    scanf("%i", &i);

    if(i >= idade){
        printf("Você é maior de idade.");
    
    }else{
        printf("Você é menor de idade.");
    }
    

    
    return  0 ;
}