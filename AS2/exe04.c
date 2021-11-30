/*
    Autor: Éder Oliveira de Rosso
    4. Leia um conjunto de valores inteiros em um vetor de 10 e em seguida os exiba-os na ordem inversa do que foram digitados.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define tam 10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Insira os valores: ");
        scanf("%d", &n[i]);
    }

    printf("\n");
    for (int i = tam - 1; i >= 0; i--)
    {
        printf("Os valores são : %d\n", n[i]);
    }

    return 0;
}