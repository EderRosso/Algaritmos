//FUP para efetuar a leitura de quatro números e apresentar os números que são divisíveis por 2 e por 3.


# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int  main (){
	int n1,n2,n3,n4;
	
	printf("Digite o primeiro valor ");
	scanf("%d", &n1);
	printf("Digite o segundo valor ");
	scanf("%d", &n2);
	printf("Digite o terceiro valor ");
	scanf("%d", &n3);
	printf("Digite o quarto valor ");
	scanf("%d", &n4);
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	

	if(n1 % 2 == 0) {
		printf("O valor %d  divisivel por 2\n", n1);
	} else if(n1 % 3 == 0){
		printf("O valor %d  divisivel por 3\n", n1);
	}else{
		printf("Este valor nao e divisivel por 2 ou 3!!!\n");
	}
	
	if(n2 % 2 == 0) {
		printf("O valor %d  divisivel por 2\n", n2);
	} else if(n2 % 3 == 0){
		printf("O valor %d  divisivel por 3\n", n2);
	}else{
		printf("Este valor nao e divisivel por 2 ou 3!!!\n");
	}
	
	if(n3 % 2 == 0) {
		printf("O valor %d  divisivel por 2\n", n3);
	} else if(n3 % 3 == 0){
		printf("O valor %d  divisivel por 3\n", n3);
	}else{
		printf("Este valor nao e divisivel por 2 ou 3!!!\n");
	}
	
	if(n4 % 2 == 0) {
		printf("O valor %d  divisivel por 2\n", n4);
	} else if(n4 % 3 == 0){
		printf("O valor %d  divisivel por 3\n", n4);
	}else{
		printf("Este valor nao e divisivel por 2 ou 3!!!\n");
	}
	

	return 0;

}

