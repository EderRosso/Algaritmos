/*
    Escreva um programa que leia dois vetores com 10 elementos cada e gere um terceiro vetor
    de 20 elementos, cujos valores deverão ser compostos pelos elementos dos dois outros vetores.
    Ao final o programa deverá mostrar os dois vetores originais e o terceiro vetor com os valores intercalados.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#define tam 10
#define maior 20

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[tam], vetor2[tam], vetor3[maior];
    int j = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Insira os valores no vetor1 P- %i: ", i);
        scanf("%i%*C", &vetor1[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        printf("Insira os valores no vetor2 P- %i: ", i);
        scanf("%i%*c", &vetor2[i]);
    }

    printf("Vetor 1: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d", vetor1[i]);
    }
    printf("\n");
    printf("Vetor 2: ");
    for (int i = 0; i < tam; i++)
    {
        printf("%d", vetor2[i]);
    }

    for (int i = 0; i < maior; i++)
    {
        vetor3[j] = vetor1[i];
        j++;
        vetor3[j] = vetor2[i];
        j++;
    }

    printf("\n");
    printf("Vetor 3: ");
    for (int i = 0; i < maior; i++)
    {
        printf("%d", vetor3[i]);
    }

    return 0;
}