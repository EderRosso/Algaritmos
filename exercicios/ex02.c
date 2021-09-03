//Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3, mul;

    printf("Insira 3 valores para multicacao\n");
    scanf("%d%*c %d%*c %d%*c", &n1, &n2, &n3);

    mul = n1 * n2 * n3;
    printf("Multiplicacao = %d", mul);
    
    return 0;

}
