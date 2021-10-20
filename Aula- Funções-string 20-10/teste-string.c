# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>


int  main (){
	setlocale (LC_ALL, "portuguese" );

    char nome[11], sobrenome[11];

    printf("Digite seu nome: ");
    scanf("%s%*c",nome);
    printf("Digite seu nome: ");
    gets(sobrenome);

    // puts(nome);
    
    puts(strupr(nome));//TRANSFORMA AS LETRAS PARA MAIUSCULO
    puts(strlwr(nome));//transforma as letras para minusculo


    return 0;
}
