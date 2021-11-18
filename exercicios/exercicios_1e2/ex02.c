/*
    Escreva um programa que receba do usúario um vetor com 20 valores inteiros e apresente o maior, o menor e suas respectivas posições em que os mesmos foram informados. Caso existam números iguais mostre a posição da primeira ocorrência.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#define tam 20

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor1[tam], maior = 0, menor = 0, vmenor = 0, vmaior = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Insira os valores no vetor1 P- %i: ", i);
        scanf("%i%*C", &vetor1[i]);
    }

    maior = vetor1[0];
    menor = vetor1[0];

    for (int i = 0; i < tam; i++)
    {
        if (maior <= vetor1[i])
        {
            maior = vetor1[i];
            vmaior = i;
        }
        if (menor >= vetor1[i])
        {
            menor = vetor1[i];
            vmenor = i;
        }
    }

    int pos = -1;

    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (vetor1[i] == vetor1[j])
            {
                pos = i;
                break;
            }            
        }
        if (pos != -1)
            {
                break;
            }
    }

    printf("\tRepetido- %i\n", pos);
    printf("\tMaior Valor- %i Posição- %i\n", maior, vmaior);
    printf("\tMenor Valor- %i Posição- %i\n", menor, vmenor);

    return 0;
}