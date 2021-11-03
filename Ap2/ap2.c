// Faça um programa com a seguinte tela:
// MENU DE OPÇÕES
// 1-  ORDENAR
// 2 - SUBSTITUIÇÃO
// 3 - ENCERRAR
// Escolha a opção:


// Opção 1: ler uma palavra (de no máximo 50 caracteres), o programa deverá  e apresentar a palavra com as letras ordenadas em ordem alfabética. Por exemplo, para a String RAMON LUMMERTZ, o resultado será: AELMMMNORRTZ
// Opção 2: faz a leitura de um texto livre (de no máximo 50 caracteres) e substitui escrevendo todos os espaços em branco do texto livre por underline( _ ), além disso, deverá inverter a ordem do texto. Por exemplo, para a string "O TRABALHO E FACIL", será: LICAF_E_OHLABART_O

// DEFINI??ES DE BIBLIOT?CAS 
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

// DEFINE O TAMANHO DAS STRINGS 
#define tam 50

// PROT?TIPO DAS FUN??ES 
int menu();
void ordenar();
void sub();

// FUN??O PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op = menu();

    do
    {
        switch(op)
        {
            case 1:
                ordenar();        
                break;

            case 2:
                sub();
                break;

            case 3:
                printf("\n\tSaindo....\n");
                exit(0);
                break;

            default:
                printf("Digite uma opç?o valida!!!\n");
                sleep(5);
                system("cls || clear");
                op = main();
       }
    } while(op);
}


int menu(){
    int op = 0;
    printf("\n\tAp2 - Éder Oliveira de Rosso\n\n");
    printf("\t1. ORDENAR\n");
    printf("\t2. SUBSTITUIR\n");
    printf("\t3. ENCERRAR\n");
    printf("\n");
    printf("\tEscolha a opç?o: ");
    scanf("%d", &op);
    system("cls || clear");
    return op;
}

void ordenar(){
    char str[tam], aux;
    int i, j;    
    printf("\t--- ORDENAR ---\n");
    fflush(stdin);
    printf("\nInsira um palavra: ");
    gets(str);
    strupr(str);    //  TRANFORMA AS LETRAS EM MAIUSCULAS
    for( i = 0; i <= strlen(str); i++){
        for(j = i + 1; j <= strlen(str); j++){
            if(str[i] > str[j] && str[j] != '\0'){
                aux =str[i];
                str[i] = str[j];
                str[j] = aux;
            }
        }
    }
    printf("\n\t");
    puts(str);
    sleep(5);
    system("cls || clear"); 
    main();
        
}

void sub(){
    char str[tam], aux[tam];
    int i, j, t, n = 0;
    printf("\t--- SUBSTITUIR ---\n");
    fflush(stdin);
    printf("\nInsira um texto:  ");
    gets(str);
    strupr(str);    // TRANSFORMA AS LETRAS EM MAIUSCULAS
    n = strlen(str);
    j = n - 1;
    for( i = 0; i <= strlen(str); i++){  //  TROCA O ESPA?O EM BRANCO POR UNDERLINE(_)
         if(str[i] == ' '){
            str[i] = '_';
        }        
    }

    for (t = 0; t < n; t++){ // ESCREVE A STRING DE TRAZ PRA FRENTE
        aux[t] = str[j];
        j--;
    }
    aux[t] = '\0';
    printf("\n\t");
    puts(aux);
    sleep(5);   //ESPERA 5 SEGUNDOS
    system("cls || clear");     // LIMPA A TELA
    main();     //CHAMA A FUN??O PRINCIPAL
}
