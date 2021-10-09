/* Escrever um programa que l� o n�mero de um funcion�rio, o n�mero de horas por ele trabalhadas, 
o valor que recebe por hora, o n�mero de filhos com idade inferior a 14 anos, a idade, 
o tempo de servi�o do funcion�rio e o valor do sal�rio fam�lia por filho. Calcular o sal�rio bruto,
o desconto do INSS (8,5% do sal�rio bruto) e o sal�rio fam�lia. Calcular o IR (Imposto de Renda) como segue: 
Se SB > 1.500,00 ent�o IR = 15% do SB
Se SB > 500,00 e SB <= 1.500,00 ent�o IR = 8% do SB
Se SB <= 500,00 ent�o IR = 0. 
Escrever o n�mero do funcion�rio, sal�rio bruto, total dos descontos, e sal�rio l�quido.
*/


# include <stdio.h>
# include <locale.h>
# include <stdlib.h>


int  main (){
	setlocale (LC_ALL, "portuguese" );
	
	int codigo, filhos, idade;
	float ht, vh, servico, salb, INSS, sall, IR;
	
	printf("Digite o c�digo do Funcion�rio: ");
	scanf("%d", &codigo);
	
	printf("Insira as horas trabalhadas: ");
	scanf("%f", &ht);
	
	printf("Insira o valor da hora trabalhada: ");
	scanf("%f", &vh);
	
	printf("Insira a quantidade de filhos menores de 14 anos: ");
	scanf("%f", &filhos);
	
	printf("Insira a idade: ");
	scanf("%f", &idade);
	
	printf("Insira o tempo de servi�o: ");
	scanf("%f", &servico);
	
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	printf("\n");
	
	salb = (ht * vh);
	INSS = (ht * vh) * 0.085;
	sall = (ht * vh) - INSS;
	
	printf("Funcion�rio n: %d\n", codigo);
	printf("INSS: %.2f R$\n", INSS);
	printf("Salario bruto: %.2f R$\n", salb);
	printf("Salario liquido: %.2f R$\n", sall);
	
	if(salb > 1500){
		IR = salb * 0.15;
		printf("IR: %.2f R$\n", IR);
	}else if((salb > 500) && (salb <= 1500)){
		IR = salb * 0.08;
		printf("IR: %.2f R$\n", IR);		
	}else if (salb <= 500){
		printf("IR: 0 R$\n");
	}
	

	return 0;
	
}

