// Faça um programa com a seguinte tela:
// MENU DE OPÇÕES
// 1-  ORDENAR
// 2 - SUBSTITUIÇÃO
// 3 - ENCERRAR
// Escolha a opção:


// Opção 1: ler uma palavra (de no máximo 50 caracteres), o programa deverá  e apresentar a palavra com as letras ordenadas em ordem alfabética. Por exemplo, para a String RAMON LUMMERTZ, o resultado será: AELMMMNORRTZ
// Opção 2: faz a leitura de um texto livre (de no máximo 50 caracteres) e substitui escrevendo todos os espaços em branco do texto livre por underline( _ ), além disso, deverá inverter a ordem do texto. Por exemplo, para a string "O TRABALHO E FACIL", será: LICAF_E_OHLABART_O


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op = 1;

    do
    {
        printf("\n\tAp2 - Éder Oliveira de Rosso\n\n");
        printf("\t1. ORDENAR\n");
        printf("\t2. SUBSTITUIÇÃO\n");
        printf("\t3. ENCERRAR\n");
        printf("\tEscolha a opção: ");


        scanf("%d", &op);
        system("cls || clear");

        switch(op)
        {
            case 1:
                system("cls || clear");
                ordenar();
                
                break;

            case 2:
                sub();
                break;

            case 3:
                printf("Saindo....");
                exit(0);
                break;

            default:
                printf("Digite uma opção valida\n");
        }
    } while(op);
}


void ordenar(){
    printf("Ordenar....\n");
    printf("Insira um palavra: ");
    // 
    

}

void sub(){
    printf("substituição....");

}
