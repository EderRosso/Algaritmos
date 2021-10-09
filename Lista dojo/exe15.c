//FUP que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, 
//considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno,
//suas três notas, a média calculada e a mensagem “ APROVADO” se a média for maior ou igual a 7 e “REPROVADO” se a média for menor que 7.

# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

#define peso1	4
#define peso2	3
#define aprovado 7

int  main (){
	
	int codigo;
	float n, n1, n2, n3, media;
	
	printf("Digite o codigo do aluno: ");
	scanf("%d", &codigo);
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Insira a terceira nota: ");
	scanf("%f", &n3);
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	printf("\n");
	printf("\tNota: %.2f\n", n1);
	printf("\tNota: %.2f\n", n2);
	printf("\tNota: %.2f\n", n3);
	printf("\n");
	
	if((n1 > n2) && (n1 > n3)){
		n = n1;		
	}else if((n2 > n1) && (n2 > n3)){
		n = n2;		
		n2 = n1;
	}else if((n3 > n1) && (n3 > n2)){
		n = n3;		
		n3 = n1;
	}else{
		media = (n1*peso1 + n2*peso2 + n3*peso2)/10;
		n = n1;
	}
	
	media = (n*peso1 + n2*peso2 + n3*peso2)/10;	

	printf("\tNota mais alta: %.2f\n", n);	
	
	printf("\tAluno Codigo: %d\n", codigo);
	printf("\tMedia: %.2f \n", media);
	if(media >= aprovado){
		printf("\tAprovado!!!\n");
	}else{
		printf("\tReprovado!!!\n");
	}

	return 0;
}

