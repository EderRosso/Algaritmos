
#include <stdio.h>

int main()
{
    int n1,n2,n3,n4, soma;
    printf("\tInsira 4 valores:  \n");
    scanf("%d%*c %d%*c %d%*c %d%*c", &n1, &n2, &n3, &n4);

    soma = n1+n2+n3+n4;

    printf("\t A soma e: %d", soma);
    return 0;
}
