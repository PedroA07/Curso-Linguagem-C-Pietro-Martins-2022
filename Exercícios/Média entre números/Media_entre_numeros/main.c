/*
    Faça um programa que quatro números inteiros,
    calcule e mostre a soma desses números
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int n1, n2, n3, n4, soma;

    printf("\tInsira o primeiro numero: ");
    scanf("%d", &n1);

    printf("\tInsira o segundo numero: ");
    scanf("%d", &n2);

    printf("\tInsira o terceiro numero: ");
    scanf("%d", &n3);

    printf("\tInsira o quarto numero: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("\n\tResultado da soma dos numeros: %d\n\n", soma);

    return 0;
}
