// Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include<stdio.h>
#define gramas 1000
int main(int argc, char const *argv[])
{
    float p, g;
    printf("\tInsira sue peso em quilos ");
    scanf("%f",&p);

    g = p * gramas;

    printf("\tSeu peso em gramas = %.2fg", g);

    return 0;
    
}
