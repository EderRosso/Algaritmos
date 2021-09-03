// João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
// multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
// João.


#include<stdio.h>
#include<locale.h>

#define multa 4.0

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal, salFinal;

    printf("\tInsira seu salário: ");
    scanf("%f", &sal);

    salFinal = sal * multa / 100;
    salFinal = sal -salFinal;
    printf("\tSeu salário depois do desconto de %.2f %% é = %.2f", multa, salFinal);

    return 0;
}
