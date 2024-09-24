/*
    Desenvolva um algorítimo que simule uma calculadora.
    Você deve dar a opção de o usuário escolher entre:

    1- Somar; 2- Subtrair; 3- Multiplicar; 4- Dividir.

    O usuário só conseguirá processar, dois números inteiros por vez.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int op;
    float n1, n2, res;

    printf("\tSelecione a operacao a ser realizada: \n\n"
           "\t[1] Somar\n"
           "\t[2] Subtrair\n"
           "\t[3] Multiplicar\n"
           "\t[4] Dividir\n\n"
           "\tEscolha uma opcao: ");
    scanf("%d", &op);

    printf("\n\tInsira o primeiro valor: ");
    scanf("%f", &n1);
    printf("\tInsira o segundo valor: ");
    scanf("%f", &n2);

    switch(op){
    case 1:
        res = n1 + n2;
        printf("\n\tSoma: %.2f", res);
        break;
    case 2:
        res = n1 - n2;
        printf("\n\tSubtracao: %.2f", res);
        break;
    case 3:
        res = n1 * n2;
        printf("\n\tMultiplicacao: %.2f", res);
        break;
    case 4:
        if(n2 != 0){
            res = n1 / n2;
            printf("\n\tDivisao: %.2f", res);
        }else{
            printf("\n\tDivisao por zero!\n");
        }
        break;
    }

    return 0;
}
