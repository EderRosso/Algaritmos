// Faça um programa que calcule e mostre a área de um trapézio.
// Sabe-se que: A = ((base maior + base menor) * altura)/2

#include <stdio.h>

int main()
{
    float a, baseMaior, baseMenor, altura;
    printf("\tInsira o valor da base maior  ");
    scanf("%f", & baseMenor);
    printf("\tInsira o valor da base menor  ");
    scanf("%f", & baseMaior);
    printf("\tInsira o valor da altura  ");
    scanf("%f", & altura);

    a = ((baseMaior + baseMenor) * altura) / 2;

    printf("\t Area = %.2f", a);


    return 0;
}
