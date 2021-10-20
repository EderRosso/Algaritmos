/*Solicitar a idade de 5 pessoas e imprimir a média de idade lidas.
*/

# include <stdio.h>
# include <locale.h>
# include <stdlib.h>


int  main (){
	setlocale (LC_ALL, "portuguese" );
	
	int idade;
	float soma = 0, media;

	for (int i = 0; i < 5; i++)
	{
		printf("Digite a idade da pessoa %i: ",i + 1);
		scanf("%d", &idade);
		soma = soma + idade;
	}
	
	media = soma / 5;
	printf("Média das idades %.2f\n", media);	
	
	
	return 0;	
}

