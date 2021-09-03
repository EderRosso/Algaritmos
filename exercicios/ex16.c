// Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipo-
// tenusa.
// hipotenuza<-(lado1*2)+(lado2*2);


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    float hipotenusa;
    printf("\tInsira o primeiro valor: ");
    scanf("%d", &num1);
    printf("\tInsira o segundo valor: ");
    scanf("%d", &num2);
    hipotenusa = sqrt((num1* num1) + (num2* num2));
    printf("\tA hipotenusa dos valores é = %.2f", hipotenusa);
    printf("\n\n");


    return 0;
}
