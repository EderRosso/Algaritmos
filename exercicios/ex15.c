// Jo�o recebeu seu sal�rio e precisa pagar duas contas atrasadas. Em raz�o do atraso, ele dever� pagar
// multa de 2% sobre cada conta. Fa�a um programa que calcule e mostre quanto restar� do sal�rio de
// Jo�o.


#include<stdio.h>
#include<locale.h>

#define multa 4.0

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal, salFinal;

    printf("\tInsira seu sal�rio: ");
    scanf("%f", &sal);

    salFinal = sal * multa / 100;
    salFinal = sal -salFinal;
    printf("\tSeu sal�rio depois do desconto de %.2f %% � = %.2f", multa, salFinal);

    return 0;
}
