// FUP que leia um n�mero e mostre uma mensagem indicando se este n�mero � par ou �mpar e se � positivo ou negativo.
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
        printf("O n�mero %i � par.", n1);
    }else{
        printf("O n�mero %i � impar.", n1);
    }
    if(n1 < 0){
        printf("O n�mero %i � negativo.", n1);
    }else{
        printf("O n�mero %i � positivo.", n1);
    }

    return 0; 
}