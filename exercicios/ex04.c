// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
// derando peso 2 para a primeira e peso 3 para a segunda.

#include <stdio.h>
#include <stdlib.h>


#define p1 2
#define p2 3

int main()
{
    float n1, n2, m;

    printf("\tInsira o valor das notas\n");
    scanf("%f%*c %f%*c",&n1 , &n2);

    m = (p1 * n1 + p2 * n2) / (p1 + p2);

    printf("\tA média ponderada é: %.2f\n", m);

    return 0;
}