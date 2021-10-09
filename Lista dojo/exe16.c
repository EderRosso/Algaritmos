/*Escrever um programa que lê as 3 notas obtidas por ele em provas. Para cada aluno, calcular a média de aproveitamento, usando a fórmula:
	     MA = (Nl + N2 + N3)/3
A atribuição de conceitos obedece à tabela abaixo:
Média de Aproveitamento 	Conceito
>= 9.0 							A
>= 7.5 e < 9.0					B
>= 6.0 e < 7.5					C
>= 4.0 e < 6.0					D
< 4.0							E

O programa deve escrever as notas, a média de aproveitamento, o conceito correspondente e a mensagem: 
"APROVADO" se o conceito for A, B, ou C e "REPROVADO" se conceito for D ou E.
*/

# include <stdio.h>
# include <locale.h>
# include <stdlib.h>


int  main (){
	
	float n1, n2, n3, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Insira a terceira nota: ");
	scanf("%f", &n3);
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	printf("\n");
	
	media = (n1 + n2 + n3)/3;
	if(media >= 9){
		printf("|Conceito A |\t\n|Media %.2f |\t\n|Aprovado!!!|", media);
	}else if((media >= 7) && (media < 9)){
		printf("|Conceito B |\t\n|Media %.2f |\t\n|Aprovado!!!|", media);
	}else if((media >= 6) && (media < 7.5)){
		printf("|Conceito C |\n|Media %.2f |\t\n|Aprovado!!!|", media);
	}else if ((media >= 4) && (media < 6)){
		printf("|Conceito D |\t\n|Media %.2f |\t\n|Reprovado!!!|", media);
	}else if(media < 4){
		printf("|Conceito E |\t\n|Media %.2f |\t\n|Reprovado!!!|", media);
	}else{
		printf("ERRO!!!");
	}
		
	
	return 0;	
}

