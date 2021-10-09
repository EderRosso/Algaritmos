/*A empresa Enxuga Gelo SA decidiu conceder um aumento de salários a seus funcionários de acordo com a tabela a seguir:

Salário Atual	Índice de Aumento
0 - 400,00				15%
400,01 - 700,00			12%
700,01 - 1.000,00		10%
1.000,01 - 1.800,00		7%
1.800,01 - 2.500,00		4%
Acima de 2.500,00		sem aumento


Escrever um programa que lê o nome e o salário atual de funcionário e escreve o nome do funcionário, 
seu salário atual, o percentual de seu aumento e o valor do salário corrigido.
*/

# include <stdio.h>
# include <locale.h>
# include <stdlib.h>


int  main (){
	char nome[60];
	float sal, salaj;
	
	printf("Insira um nome: ");
	scanf("%s",& nome);
	printf("Insira o salario: ");
	scanf("%f", & sal);
	
	system ( " cls " );	//FUNCIONA EM CONJUNTO COM # include <stdlib.h> LIMPA A TELA 
	printf("\n");
	printf("Funcionario: %s\n", nome);
	printf("Salario atual: R$ %.2f\n", sal);
	
	if ((sal >= 0) && (sal <= 400)){
		salaj = sal * 0.15;
		printf("Aumento de R$ %.2f - 15%%\n", salaj);
		salaj = salaj + sal;
	}else if((sal >= 400.01) && (sal < 700)){
		salaj = sal * 0.12;
		printf("Aumento de R$ %.2f - 12%%\n", salaj);
		salaj = salaj + sal;
	}else if((sal >= 700.01) && (sal < 1000)){
		salaj = sal * 0.10;
		printf("Aumento de R$ %.2f - 10%%\n", salaj);
		salaj = salaj + sal;
	}else if((sal >= 1000.01) && (sal < 1800)){
		salaj = sal * 0.07;
		printf("Aumento de R$ %.2f - 7%%\n", salaj);
		salaj = salaj + sal;		
	}else if((sal >= 1800.01) && (sal < 2500)){
		salaj = sal * 0.04;
		printf("Aumento de R$ %.2f - 4%%\n", salaj);
		salaj = salaj + sal;
	}else{
		printf("Sem aumento!!!\n");
		salaj = sal;
	}
	
	printf("Salario corrigido R$ %.2f", salaj);
	
	return 0;	
}

