/*
    Fa�a um programa que carregue um vetor e nove elementos
    num�ricos inteiros, calcule e mostre os n�meros primos e
    suas respectivas posi��es.

    Obs.: Um n�mero � primo se ele � divisivel apenas por ele
    mesmo e por um.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int vet[9], i, j, cont;

    for(i=0; i<9; i++){
        printf("\n\tInsira um n�mero inteiro: ");
        scanf("%d", &vet[i]);
    }

    for(i=0; i<9; i++){
        cont = 0;
        for(j=1; j<=vet[i]; j++){
            if(vet[i] % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("\n\tO n�mero %d � primo! Est� na posi��o %d.", vet[i], i);
        }
    }

    return 0;
}
