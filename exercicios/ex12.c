// Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, 
// calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.


#include<stdio.h>
#include<locale.h>

#define sM 1100

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float qS, s;
    printf("Insira o valor do sal�rio  ");
    scanf("%f", &s);

    qS = s / sM;

    printf("\tQuantidade de sal�rios m�nimo = %.2f\n", qS);
    
    return 0;
}
