/*Ler um número do teclado e imprimir todos os números de 1 até o número lido. 
Imprimir a soma dos números.*/

# include <stdio.h>
# include <locale.h>
# include <stdlib.h>


int  main (){
	setlocale (LC_ALL, "portuguese" );
	
	int i, a, r = 0;
	
	printf("Insira um valor: ");
	scanf("%d", &a);
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	printf("\n");
	printf("\tOs valores são: ");
	for(i = 1; i <= a ; i++){
		r = r + i;
		printf("%d-", i);
	}
	
	printf("\n");
	printf("\tA Soma dos Valores: %d\n", r);


	return 0;
}

