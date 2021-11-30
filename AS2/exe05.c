/*
    Autor: Éder Oliveira de Rosso
    5. Faça um programa de consulta de telefones em um vetor a partir de um nome informado por uma chave de dados: leia nomes de pessoas com seus respectivos telefones, sendo a quantidade determinada pelo usuário. Em seguida, pergunte ao usuário qual o nome que ele deseja consultar o telefone. Após sua resposta, exiba o telefone da pessoa procurada.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    bool flag = false;
    int m = 0;
    int fones[50];
    char nomes[50][60], busca[30];
    printf("Insira a quantidade de contatos: ");
    scanf("%d", &m);
    fflush(stdin);

    for (int i = 0; i < m; i++)
    {
        printf("Digite o nome %d: ",i+1);
        scanf("%s", nomes[i]);
        printf("Digite o Telefone %d: ",i+1);
        scanf("%d", &fones[i]);
    }

    printf("\nInsira o contato para busca: ");
    scanf("%s", busca);

    fflush(stdin);

    for (int i = 0; i < m; i++)
    {
        if (strcmp(busca, nomes[i]) == 0)
        {
            printf("\nEncontrou - %d \n", fones[i]);
            flag = true;
        }
    }
    fflush(stdin);
    if (flag == false)
    {
        printf("\nContato não existe!!!\n");
    }

    return 0;
}