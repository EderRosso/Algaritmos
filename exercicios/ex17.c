// Faça um programa que receba o raio, calcule e mostre:
// a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
// b) a área de uma esfera; sabe-se que A = p R2;
// c) o volume de uma esfera; sabe-se que V = 3?4 * p R3

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, c, area, v, pi = 3.14159;

    printf("\tInsira o raio desejado: ");
    scanf("%f", &raio);

    c = 2.0 * pi * raio;
    printf("\nComprimento: %.2f ", c);

    area = pi * pow(raio, 2);
    printf("\nÁrea: %.2f ", area);

    v = 3.0 / 4.0 * pi * pow(raio, 3); 
	printf("\nVolume: %.2f \n\n", v); 

    
    return 0;
}
