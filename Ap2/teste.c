# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

#define tam 50

int  main (){
	setlocale (LC_ALL, "portuguese" );
	char str[tam], aux[tam];
    int i, j, n = 0;
    printf("\t--- SUBSTITUIÇÂO ---\n");
    fflush(stdin);
    printf("Insira um texto:  ");
    gets(str);
//    strupr(str);    //Transforma as letras para maiúsculas
    n = strlen(str);
    j = n -1;
    
    for( i = 0; i < n; i++){  //Troca o espaço em branco por _
        aux [i] = str[j];
        j--;

    }
    aux[i]= '\0';

    printf("\n\t");
    printf("%s\n", aux);
    
}

	
