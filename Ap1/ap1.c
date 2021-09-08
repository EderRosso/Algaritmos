// Elaborar programa que lê dois números quaisquer e mostra na tela uma mensagem
// indicando qual é o maior, ou se são iguais.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

int main()
{
    int  n1, n2;

    setlocale(LC_ALL, "Portuguese");
    printf("\tInsira um valor:  ");
    scanf("%d%*c", &n1);
    printf("\tInsira outro valor:  ");
    scanf("%d%*c", &n2);

    if(n1 == n2) printf("\tOs valores %d e %d são iguais\n", n1, n2);

    if(n1 > n2) printf("\tO valor %d é maior que %d\n", n1, n2);

    if(n2 > n1) printf("\tO valor %d é maior que %d\n", n2, n1);

    return 0;
}
