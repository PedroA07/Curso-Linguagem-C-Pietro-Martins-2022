/*
    Desenvolva um algor�timo que preencha uma matriz num�rica de dimens�es 3x3.
    Ap�s preencher toda a matriz, o usu�rio deve inserir uma chave de busca X.
    Caso exista algum n�mero igual a X, dentro da matriz, o algor�timo deve
    mostrar na tela, os �ndices da linha e da coluna na posi��o na qual X foi
    encontrado pela primeira vez. Caso contr�rio, o algor�timo deve se  encerrar
    com uma �nica mensagem, dizendo: "Chave n�o encontrada.".
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int mat[3][3], i, j, x, lin, col, res_busca = 0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\n\tInsira o elemento da linha %d, coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n\n\tInsira a chave de busca: ");
    scanf("%d", &x);

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(mat[i][j] == x){
                //A chave foi encontrada.
                res_busca = 1;
                lin = i;
                col = j;
                break;
            }
        }
        if(res_busca == 1){
            break;
        }
    }

    if(res_busca == 1){
        printf("\n\tO elemento %d foi encontrado na linha %d, coluna %d.\n", x, lin, col);
    }else{
        printf("\n\tChave n�o encontrada!");
    }

    return 0;
}
