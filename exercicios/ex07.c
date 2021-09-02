// Faça um programa que receba o peso de uma pessoa, calcule e mostre:
// a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.


#include<stdio.h>

#define gorda 15.00
#define magra 20.00

int main(int argc, char const *argv[])
{
    float p, npg, npm;

    printf("\tInsira o seu peso ");
    scanf("%f", &p);

    npg = (p * gorda / 100);
    npg = npg + p;
    
    printf("\tSeu peso mais %.1f %% = %.2f Kg\n", gorda, npg);

    npm = (p * magra / 100);
    npm = p - npm;

    printf("\tSeu peso menos %.1f %% = %.2f Kg\n", magra, npm);

    return 0;
}
