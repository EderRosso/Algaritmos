// Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
// Exemplo:
// Digite um número: 5
// 5 × 0 = 0
// 5 × 1 = 5
// 5 × 2 = 10
// 5 × 3 = 15
// 5 × 4 = 20
// 5 × 5 = 25
// 5 × 6 = 30
// 5 × 7 = 35
// 5 × 8 = 40
// 5 × 9 = 45
// 5 × 10 = 50

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, v, i;

    printf("\tInsira o valor para cálcular a tabuada "); 
    scanf("%d%*c",& n);
    printf("\n");

    // for (contador = 0; contador <= 10; contador++)
    if(n <= 10)
        for ( i = 0; i <= 10; i++)
        {
            v = n * i;
            printf("\t %d x %d = %d \n", n, i, v);
        }
    
    

    return 0;

}