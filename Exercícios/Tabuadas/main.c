/*
    Desenvolva um algorítimo que mostre a tabuada de todos
    os números inteiros compreendidos entre 1 e 10 (inclusive).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, res;

    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            res = i * j
            printf("\t%d X %d = %d\n", i, j, res);
        }
        printf("\n");
    }

    return 0;
}
