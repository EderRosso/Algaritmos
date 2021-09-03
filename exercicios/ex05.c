// Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
// que este sofreu um desconto de 10%.

// exemplo  125 x 15/100 (ou 0,15) = 18,75
//          125 – 18,75 = 106,25

#include <stdio.h>

#define des 10.00

int main(int argc, char const *argv[])
{
    float v1, v2, vd;
    printf("\tInsira o valor que deseja dar descconto\n");
    scanf("%f",&v1 );

    v2 = v1 * des / 100;
    vd = v1 - v2;
    printf("\tValor de desconto = %.2f\n", v2);
    printf("\tValor final = %.2f\n", vd);
    return 0;
    
}
