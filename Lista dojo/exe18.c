/*Faça um programa que leia a altura e o sexo de uma pessoa, calcule seu peso ideal, utilizando as seguintes fórmulas:
para homens : (72.7*altura) –58;
para mulheres : (62.1*altura) – 44.7.
*/


# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>


int  main (){
	
	char op;
	float a;
	
		
	printf("Insira altura: ");
	scanf("%f", & a);
	
	printf("Digite (F) para feminino (M) para masculino: ");
	scanf("%s", &op);
	op = toupper(op); 		//tranforma a letra minuscula em maiuscula
		
	switch(op){
		case 'F' : a = (62.1 * a) - 44.7;
		printf("Seu peso ideal e %.2f Kg", a);
		break;
		
		case 'M' : a = (72.7 * a) - 58;
		printf("Seu peso ideal e %.2f Kg", a);
		break;
		
		default : 
		printf("Esta opcao não existe!!!");
	}
}
