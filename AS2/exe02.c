/*
    Autor: Éder Oliveira de Rosso
    2. Leia um conjunto de notas  com vetores, cuja quantidade seja determinada pelo usuário. Calcule a média de todas elas. Exiba o conjunto das notas maiores do que a média calculada. Em seguida, de forma agrupada, exiba o outro conjunto de notas (menores do que a média).
*/


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    int qn = 0, qmaior = 0, qmenor = 0;
    float notas[qn], media = 0, notas_maiores[qmaior], notas_menores[qmenor];

    printf("Insira a quantidade de notas: ");
    scanf("%d",&qn);

    for (int i = 0; i < qn; i++)
    {
        printf("Insira a nota %d -> ", i+1);
        scanf("%f",&notas[i]);
        media += notas[i];
    }
    media = media / qn;
    printf("\nMédia --> %.2f\n", media);

    printf("\nNotas maiores\n");
    for (int i = 0; i < qn; i++)
    {
        if(notas[i] >= media){
            notas_maiores[i] = notas[i];
            printf("--> %.2f\n",notas_maiores[i]);
        }
        
    }

    printf("\nNotas menores\n");
    for (int i = 0; i < qn; i++)
    {
        if(notas[i] < media){
            notas_menores[i] = notas[i];
            printf("--> %.2f\n",notas_menores[i]);
        }
        
    }

    return 0;
}