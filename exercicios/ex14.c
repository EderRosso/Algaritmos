// Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
// a) a idade dessa pessoa em anos;
// b) a idade dessa pessoa em meses;
// c) a idade dessa pessoa em dias;
// d) a idade dessa pessoa em semanas.

#include<stdio.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int id, ano, anoAt, meses, dias, semanas;

    printf("Insira o ano de nascimento: ");
    scanf("%d%*c", &ano);
    printf("\t\nInsira o ano atual: ");
    scanf("%d%*c", &anoAt);

    id = anoAt - ano;
    dias = id * 365;
    meses = id * 12;

    printf("\nSua idade é = %d anos, \nquantidade de meses = %d meses, \nquantidade de dias = %d dias \n", id, meses, dias);

    return 0;
}
