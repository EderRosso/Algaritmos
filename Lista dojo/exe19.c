/* Escrever um programa que lê o número de um funcionário, o número de horas por ele trabalhadas, 
o valor que recebe por hora, o número de filhos com idade inferior a 14 anos, a idade, 
o tempo de serviço do funcionário e o valor do salário família por filho. Calcular o salário bruto,
o desconto do INSS (8,5% do salário bruto) e o salário família. Calcular o IR (Imposto de Renda) como segue: 
Se SB > 1.500,00 então IR = 15% do SB
Se SB > 500,00 e SB <= 1.500,00 então IR = 8% do SB
Se SB <= 500,00 então IR = 0. 
Escrever o número do funcionário, salário bruto, total dos descontos, e salário líquido.
*/


# include <stdio.h>
# include <locale.h>
# include <stdlib.h>


int  main (){
	setlocale (LC_ALL, "portuguese" );
	
	int codigo, filhos, idade;
	float ht, vh, servico, salb, INSS, sall, IR;
	
	printf("Digite o código do Funcionário: ");
	scanf("%d", &codigo);
	
	printf("Insira as horas trabalhadas: ");
	scanf("%f", &ht);
	
	printf("Insira o valor da hora trabalhada: ");
	scanf("%f", &vh);
	
	printf("Insira a quantidade de filhos menores de 14 anos: ");
	scanf("%f", &filhos);
	
	printf("Insira a idade: ");
	scanf("%f", &idade);
	
	printf("Insira o tempo de serviço: ");
	scanf("%f", &servico);
	
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	printf("\n");
	
	salb = (ht * vh);
	INSS = (ht * vh) * 0.085;
	sall = (ht * vh) - INSS;
	
	printf("Funcionário n: %d\n", codigo);
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

