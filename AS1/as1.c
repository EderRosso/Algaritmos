/*
    Faça um programa que :
    Tenha um menu com as seguintes funcionalidades;
    1- Ler o vetor de  6 números inteiros 
    2- Exibir Os números pares digitados; 
    3- Exibir A soma dos números pares digitados; 
    4- Exibir Os números ?mpares digitados; 
    5- A quantidade de números ?mpares digitados;
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

// DEFINE O TAMANHO DAS STRINGS 
#define tam 50

// PROTOTIPO DAS FUNÇÕES 
int menu();
void carregar();
void npar();
void somapar();
void qua_impar();

int v[6], vpar[6], vimpar[6];

// FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op = menu();

    do
    {
        switch(op)
        {
            case 1:
                carregar();        
                break;

            case 2:
                npar();
                break;

            case 3:
                somapar();
                break;

            case 4:
                nimpar();
                break;

            case 5:
                qua_impar();
                break;

            case 6:
                printf("\n\tSaindo....\n");
                exit(0);
                break;

            default:
                printf("\tDigite uma opção valida!!!\n");
                sleep(5);
                system("cls || clear");
                op = main();
        }
    } while(op);

    return 0;
}

int menu(){
    int op = 0;
    printf("\n\tAS-1 - Éder Oliveira de Rosso\n\n");
    printf("\t1. Ler o vetor de 6 números inteiros\n");
    printf("\t2. Exibir os números pares digitados\n");
    printf("\t3. Exibir A soma dos números pares digitados\n");
    printf("\t4. Exibir Os números impares digitados\n");
    printf("\t5. A quantidade de números impares digitados\n");
    printf("\t6. Sair\n");
    printf("\n");
    printf("\tEscolha a opção: ");
    scanf("%d", &op);
    system("cls || clear");
    return op;
}


void carregar(){
    for (int i = 0; i < 6; i++)
    {
        printf("Insira um valor no vetor %i: ", i);
        scanf("%i",&v[i]);
    }
    system("cls || clear"); 
    main();
}

void npar(){
    printf("Os números pares são:\n");
    for (int i = 0; i < 6; i++)
    {
        if(v[i] % 2 == 0){
        vpar[i] = v[i];
        printf("\t%i\n", vpar[i]);
        }
    }
    sleep(5);
    system("cls || clear"); 
    main();
}

void somapar(){
    int total = 0;
    for (int i = 0; i < 6; i++)
    {
        if(v[i] % 2 == 0){
        vpar[i] = v[i];
        total += vpar[i];
        }
    }
    printf("Soma dos números pares = %i", total);
    sleep(5);
    system("cls || clear"); 
    main();
}

void nimpar(){
    printf("Os números impares são:\n");
    for (int i = 0; i < 6; i++)
    {
        if(v[i] % 2 != 0){
            vimpar[i] = v[i];
            printf("\t%i\n", vimpar[i]);
        }
    }
    sleep(5);
    system("cls || clear"); 
    main();    
}

void qua_impar(){   
    int n = 0;

    for (int i = 0; i <= 6; i++)
    {
        if(v[i] % 2 != 0){
            n++;
        }
    }
    
    printf("A quantidade de números impares são: %i", n);
    sleep(5);
    system("cls || clear"); 
    main();
}