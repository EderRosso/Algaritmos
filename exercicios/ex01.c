// Faça um programa que receba dois números, 
// calcule e mostre a subtração do primeiro número pelo
// segundo.

#include<stdio.h>

int main()
{
    int n1, n2, sub;
    printf("Insira dois valores para subtracao\n");
    scanf("%d%*c %d%*c", &n1, &n2);

    sub = n1-n2;

    printf("valor da subtracao: %d", sub);


    return 0;

}
