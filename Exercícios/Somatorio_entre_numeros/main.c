/*
    Desenvolva um algorítimo que some todos os números
    inteiros compreendidos entre 1 e 10 (inclusive).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int soma, i;

    soma = 0;
    //Primeira forma:
    for(i=0;i<=10;i++){
        soma = soma + i;
    }
    printf("\tSoma: %d.\n\n", soma);

    //Segunda forma:
    /*
    i = 0;
    while(i<=10){
        soma = soma + i;
        i++; //i = i + 1;
    }
    */

    //Terceira forma:
    /*
    i = 0;
    do{
        soma = soma + i;
        i++; //i = i + 1;
    }while(i<=10)
    */

    return 0;
}
