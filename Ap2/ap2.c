// Fa�a um programa com a seguinte tela:
// MENU DE OP��ES
// 1-  ORDENAR
// 2 - SUBSTITUI��O
// 3 - ENCERRAR
// Escolha a op��o:


// Op��o 1: ler uma palavra (de no m�ximo 50 caracteres), o programa dever�  e apresentar a palavra com as letras ordenadas em ordem alfab�tica. Por exemplo, para a String RAMON LUMMERTZ, o resultado ser�: AELMMMNORRTZ
// Op��o 2: faz a leitura de um texto livre (de no m�ximo 50 caracteres) e substitui escrevendo todos os espa�os em branco do texto livre por underline( _ ), al�m disso, dever� inverter a ordem do texto. Por exemplo, para a string "O TRABALHO E FACIL", ser�: LICAF_E_OHLABART_O


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
        printf("\n\tAp2 - �der Oliveira de Rosso\n\n");
        printf("\t1. ORDENAR\n");
        printf("\t2. SUBSTITUI��O\n");
        printf("\t3. ENCERRAR\n");
        printf("\tEscolha a op��o: ");


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
                printf("Digite uma op��o valida\n");
        }
    } while(op);
}


void ordenar(){
    printf("Ordenar....\n");
    printf("Insira um palavra: ");
    // 
    

}

void sub(){
    printf("substitui��o....");

}
