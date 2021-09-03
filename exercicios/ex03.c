// Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
// segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
// com validações.

#include <stdio.h> 
#include <windows.h>

int main(int argc, char const *argv[])
{
    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    int n1, n2, div;

    printf("\tInsira dois valores para divisão\n");
    scanf("%d%*c %d%*c",&n1, &n2);

    div = n1 / n2;

    printf("\tValor da divisão é: %d ", div);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}
