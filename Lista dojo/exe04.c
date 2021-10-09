// FUP que leia um número e mostre uma mensagem indicando se este número é par ou ímpar e se é positivo ou negativo.
// n % 2 = 0 par
// n % 2 = 1 impar

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    int n1, n2;
    printf("Digite um valor: ");
    scanf("%i",&n1);

    if ((n1 % 2) == 0){
        printf("O número %i é par.", n1);
    }else{
        printf("O número %i é impar.", n1);
    }
    if(n1 < 0){
        printf("O número %i é negativo.", n1);
    }else{
        printf("O número %i é positivo.", n1);
    }

    return 0; 
}