// FUP para determinar se uma pessoa � maior ou menor de idade.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define idade 18

int  main ()
{
    setlocale (LC_ALL, " portugu�s " );
    int i;
    printf("Digite sua idade: ");
    scanf("%i", &i);

    if(i >= idade){
        printf("Voc� � maior de idade.");
    
    }else{
        printf("Voc� � menor de idade.");
    }
    

    
    return  0 ;
}