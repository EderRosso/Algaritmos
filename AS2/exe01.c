/*
    Autor: �der Oliveira de Rosso
    1 -Fa�a um programa que receba a quantidade de funcion�rios de uma empresa, e para cada funcion�rio leia  o sal�rio do funcion�rio, calcule e mostre o novo sal�rio, acrescido de bonifica��o e de aux�lio escola.

    Sal�rio           Bonifica��o
    At� R$ 500,00 ---> %5 do sal�rio
    Entre R$ 500,00 e R$ 1.200,00 ---> %12 do sal�rio
    Acima de R$ 1200 ---> Sem bonifica��o

    Sal�rio            Auxilio escola
    At� R$ 600,00 ---> R$ 150,00
    Mais de R$ 600,00 ---> R$ 100,00
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nf = 0;
    float salario[nf];

    printf("Insira a quantidade de funcion�rios: ");
    scanf("%d", &nf);

    for (int i = 0; i < nf; i++)
    {
        printf("Insira o sal�rio do funcion�rio %d\n-> ", i + 1);
        scanf("%f", &salario[i]);

        if (salario[i] <= 500)
        {
            salario[i] += salario[i] * 0.05;
        }
        else if ((salario[i] > 500) && (salario[i] < 1200))
        {
            salario[i] += salario[i] * 0.12;
        }
    }

    for (int i = 0; i < nf; i++)
    {
        if (salario[i] < 600)
        {
            salario[i] = salario[i] + 150;
        }
        else if (salario[i] >= 600)
        {
            salario[i] = salario[i] + 100;
        }
    }

    printf("\n");
    for (int i = 0; i < nf; i++)
    {
        printf("--> Novo sal�rio do funcion�rio %d = R$ %.2f\n", i + 1, salario[i]);
    }
}