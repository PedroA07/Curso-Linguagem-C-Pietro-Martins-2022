/*
            ATRIBUI��ES ARITM�TICAS
    Operadores de atribui��o aritim�tica:
     - Incremento em 1 unidade: "++";
     - Decremento em 1 unidade: "--";
     - Incremento gen�rico: "+=";
     - Decremento gen�rico: "-=";
     - Atribui��o com multiplica��o: "*=";
     - Atribui��o com divis�o: "/=";
*/

//Exemplo
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dado = 10;

    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do decremento: %d.\n", dado);

    dado += 3;
    printf("Depois do incremento em 3 unidades: %d.\n", dado);

    dado -= 2;
    printf("Depois do decremento em 2 unidade: %d.\n", dado);

    dado *= 10;
    printf("Depois de multiplicar por 10: %d.\n", dado);

    dado /= 2;
    printf("Depois de dividir por 2: %d.\n", dado);
}
