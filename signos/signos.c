#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    int op;

    setlocale(LC_ALL, "Portuguese");

    printf("\tEscolha a opção desejada!\n\n");
    printf("\tOpção 1: de 21 de março a 20 de abril\n\n");
    printf("\tOpção 2: de 21 de março a 20 de abril\n\n");
    printf("\tOpção 3: de 21 de março a 20 de abril\n\n");

    printf("\tOpção: ");
    scanf("%d",&op);

    switch (op)
    {
    case 1: printf("\tSeu signo é Aries\n");
        break;

    case 2: printf("\tSeu signo é Touro\n");
        break; 

    case 3: printf("\tSeu signo é Leão\n");
        break;

    default: printf("Está opção não existe!!!");
        break;
    }

    return 0;
}
