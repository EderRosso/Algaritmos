/*
    Autor: Éder Oliveira de Rosso
    1 -Faça um programa que receba a quantidade de funcionários de uma empresa, e para cada funcionário leia  o salário do funcionário, calcule e mostre o novo salário, acrescido de bonificação e de auxílio escola.

    Salário           Bonificação
    Até R$ 500,00 ---> %5 do salário
    Entre R$ 500,00 e R$ 1.200,00 ---> %12 do salário
    Acima de R$ 1200 ---> Sem bonificação

    Salário            Auxilio escola
    Até R$ 600,00 ---> R$ 150,00
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

    printf("Insira a quantidade de funcionários: ");
    scanf("%d", &nf);

    for (int i = 0; i < nf; i++)
    {
        printf("Insira o salário do funcionário %d\n-> ", i + 1);
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
        printf("--> Novo salário do funcionário %d = R$ %.2f\n", i + 1, salario[i]);
    }
}