// Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
// que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
// salário final.


#include <stdio.h>
#define cm 4.00

int main(int argc, char const *argv[])
{
    float sal, salc, ven, com;
    printf("\tInsira o valor do salario : \n");
    scanf("\t%f", &sal);

    printf("\tInsira o valor das vendas : \n");
    scanf("\t%f", &ven);

    com = ven * cm / 100;
    salc = sal + com;


    printf("\tSalario = %.2f\n \tComissao = %.2f\n \tSalario mais comissao = %.2f\n", sal, com, salc);

    return 0;
}
