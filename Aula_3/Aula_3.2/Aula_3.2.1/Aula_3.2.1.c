//Operadores Aritm�ticos

/*
            OPERA��ES ARITIM�TICAS
    Operadores matem�ticos:
     - Soma: "+";
     - Subtra��o: "-";
     - Mutiplica��o: "*";
     - Divis�o: "/";
     - Resto de divis�o inteira: "%";
    Existe preced�ncia entre os operadores!
*/

//Exemplo
#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, soma, subtr, mult, divis;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtra.: %d.\n", subtr);
    printf("Multiplica.: %d.\n", mult);
    printf("Divis.: %d.\n", divis);
}

