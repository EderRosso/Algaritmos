/*
    Autor: Éder Oliveira de Rosso
    3. Leia um conjunto de alunos, cada uma com o nome e a nota armazenados em um vetor de 10. Em seguida, exiba o nome dos alunos que possuem nota maior do que a média da turma.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define tam 3

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomes[tam][30];
    float notas[tam], media = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite nome e nota do estudante: ");
        scanf("%s%f", &nomes[i], &notas[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        media += notas[i];
    }
    media = media / tam;

    printf("\n\tMédia\n");
    printf("\t%.2f\n", media);

    printf("\n\tNome\tNota\n");
    for (int i = 0; i < tam; i++)
    {
        if (notas[i] > media)
        {
            printf("\t%s\t%.2f\n", nomes[i], notas[i]);
        }
    }

    return 0;
}