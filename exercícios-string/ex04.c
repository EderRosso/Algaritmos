// FUP que leia 3 strings e escreva em ordem alfabetica.


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int main () {
    setlocale(LC_ALL,"Portuguese");

    char str1[15];
    char str2[15];
    int ret;

    strcpy(str1, "a");
    strcpy(str2, "a");

    ret = strcoll(str1, str2);

    if(ret > 0) {
         printf("str1 e menor str2");
    } else if(ret < 0) {
         printf("str2 e menor str1");
    } else {
        printf("str1 são iguais str2");
    }
   
    return(0);
}