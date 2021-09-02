// Fa√ßa um programa que calcule e mostre a √°rea de um quadrado. Sabe-se que: A = lado * lado.

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, l1, l2;
    printf("\tInsira o valor de um lado ");
    scanf("%f", &l1);
    printf("\tInsira o valor do outro lado ");
    scanf("%f", &l2);

    a = l1 * l2;

    printf("\t¡rea do quadrado È = %.2f", a);

    return 0;
}
