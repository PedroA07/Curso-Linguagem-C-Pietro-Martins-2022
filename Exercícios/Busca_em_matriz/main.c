/*
    Desenvolva um algorítimo que preencha uma matriz numérica de dimensões 3x3.
    Após preencher toda a matriz, o usuário deve inserir uma chave de busca X.
    Caso exista algum número igual a X, dentro da matriz, o algorítimo deve
    mostrar na tela, os índices da linha e da coluna na posição na qual X foi
    encontrado pela primeira vez. Caso contrário, o algorítimo deve se  encerrar
    com uma única mensagem, dizendo: "Chave não encontrada.".
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
        printf("\n\tChave não encontrada!");
    }

    return 0;
}
