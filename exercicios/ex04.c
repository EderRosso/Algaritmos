#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

#define p1 4
#define p2 6

int main()
{
    float n1, n2, m;

    setlocale(LC_ALL, "Portuguese");

    printf("\tInsira o valor das notas\n");
    scanf("%f%*c %f%*c",&n1 , &n2);

    m = (p1 * n1 + p2 * n2) / (p1 + p2);

    printf("\tA média ponderada é: %.2f\n", m);

    return 0;
}