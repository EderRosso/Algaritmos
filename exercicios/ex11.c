// Fa√ßa um programa que calcule e mostre a √°rea de um losango. Sabe-se que:
// A = (diagonal maior * diagonal menor)/2.

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, d1, d2;
    printf("\tInsira o valor da diagonal maior ");
    scanf("%f", &d1);
    printf("\tInsira o valor da diagonal menor ");
    scanf("%f", &d2);

    a = (d1 * d2) / 2;

    printf("\t¡rea do losango È = %.2f", a);

    return 0;
}