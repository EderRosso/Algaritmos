/*
    Autor: �der Oliveira de Rosso
    5. Fa�a um programa de consulta de telefones em um vetor a partir de um nome informado por uma chave de dados: leia nomes de pessoas com seus respectivos telefones, sendo a quantidade determinada pelo usu�rio. Em seguida, pergunte ao usu�rio qual o nome que ele deseja consultar o telefone. Ap�s sua resposta, exiba o telefone da pessoa procurada.

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
    char nomes[tam][30];

    printf("Insira a quantidade de contatos: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        printf("Insira o nome do contato: ");
        scanf("%s",&nomes[i]);
        printf("Insira o fone do contato: ");
        scanf("%s",&fones[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        printf("%s\n", nomes[i]);
    }
    
    

    return 0;
}