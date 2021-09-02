// *******************************************************************
// Exemplo de utiliza��o srand - 2019/1
// Laborat�rio de Programa��o
// *******************************************************************

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<time.h>     // bibiioteca necess�ria para utilizar o time(NULL)
 
int x, i;
int main()
{
      setlocale(LC_ALL, "Portuguese");
      srand((unsigned)time(NULL));             // o srand serve pra criar uma nova "semente" pra gerar os nros na rand(), senao a sequencia gerada seria sempre a mesma
      for (i=1;i<=10;i++){
            x = rand() % 10;
            printf("Valor aleatório gerado: %d \n", x); 
            getch();
      }
}
