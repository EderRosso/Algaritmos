//FUP que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir:
//Se i=1 escrever os 3 valores a, b, c em ordem crescente;
//Se i=2 escrever os 3 valores a, b, c em ordem decrescente;
//Se i=3 escrever os 3 valores de forma que o maior valor entre a, b, c fica entre os outros dois.


# include <stdio.h>
# include <locale.h>
# include <stdlib.h>



int  main (){
    
    int i, a, b, c;
	
	printf("Escolha uma opcao 1, 2, ou 3\n");
	scanf("%d", &i);
	if(i <= 3){
		printf("Digite um valor\n");
		scanf("%d", &a);
		printf("Digite outro valor\n");
		scanf("%d", &b);
		printf("Digite mais outro valor\n");
		scanf("%d", &c);
	}
	
	switch(i){
		case 1: printf("Ordem crescente ");
			if ((a > b) && (a > c) && (b > c)){
				printf("%d %d %d\n",c,b,a);
			}else if((b > a) && (b > c) && (a > c)){
				printf("%d %d %d\n",c,a,b);
			}else if((c > a) && (c > b) && (c > b)){
				printf("%d %d %d\n",a,b,c);
			}else if((b > a) && (b > c) && (c > a)){
				printf("%d %d %d\n",a,c,b);
			}else{
				printf("%d %d %d\n",b,c,a);
			}
		
		break;

		case 2: printf("Ordem decrescente  ");
			if ((a > b) && (a > c) && (b > c)){
				printf("%d %d %d\n",a,b,c);
			}else if((b > a) && (b > c) && (a > c)){
				printf("%d %d %d\n",b,a,c);
			}else if((c > a) && (c > b) && (c > b)){
				printf("%d %d %d\n",c,b,a);
			}else if((b > a) && (b > c) && (c > a)){
				printf("%d %d %d\n",b,c,a);
			}else{
				printf("%d %d %d\n",a,c,b);
			} 
		break;
		
		case 3: printf("Maior valor entre os menores ");
			if ((a > b) && (a > c) && (b > c)){
				printf("%d %d %d\n",c,a,b);
			}else if((b > a) && (b > c) && (a > c)){
				printf("%d %d %d\n",c,b,a);
			}else if((c > a) && (c > b) && (c > b)){
				printf("%d %d %d\n",a,c,b);
			}else if((b > a) && (b > c) && (c > a)){
				printf("%d %d %d\n",a,b,c);
			}else{
				printf("%d %d %d\n",c,a,b);
			} 
		
		break;
		
		default: printf("Esta opcao nao existe!!! ");		
	}
		
    
    return  0 ;
}
