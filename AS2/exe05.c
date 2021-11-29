/*
    Autor: Éder Oliveira de Rosso
    5. Faça um programa de consulta de telefones em um vetor a partir de um nome informado por uma chave de dados: leia nomes de pessoas com seus respectivos telefones, sendo a quantidade determinada pelo usuário. Em seguida, pergunte ao usuário qual o nome que ele deseja consultar o telefone. Após sua resposta, exiba o telefone da pessoa procurada.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam = 0;
    int fones[tam];
    char nomes[tam][60], busca[30];

    printf("Insira a quantidade de contatos: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        printf("Insira o nome do contato: ");
        scanf("%s", &nomes[i]);
        printf("Insira o fone do contato: ");
        scanf("%d", &fones[i]);
    }

    printf("\nInsira O nome para busca: ");
    scanf("%s",&busca);

    for (int i = 0; i < tam; i++)
    {
        if (strcmp(nomes[i], busca) == 0)
        {
            printf("Econtrou: %s\n", nomes[i]);
        }

    }

    // printf("\n%d\n", fones[1]);

    return 0;
}