/*
    Faça um programa que receba dois números
    e mostre o maior deles. Caso eles sejam iguais,
    deve-se mostrar a mensagem "Os números são iguais".
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float num1, num2;

    printf("\tInsira o primeiro numero: ");
    scanf("%f", &num1);
    printf("\n\tInsira o segundo numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("\n\tMaior: %.1f", num1);
    } else {
        if(num2 > num1){
            printf("\n\tMaior: %.1f", num2);
        } else {
            printf("\n\tOs numeros sao iguais!");
        }
    }

    return 0;
}
