// Matrizes e Arrays

/*
        MATRIZES

    - Matrizes podem ter várias dimensões;
    - Dois ou mais índices para acesso a posições;
        - Sintaxe:
            <tipo> <nome>[<dim1>][<dim.2>]...[<dimN>];
*/
/*
        MANIPULANDO UMA MATRIZ

    - Sintaxe de acesso a posição:
        <nome>[<i1>][<i2>]...[<iN>];
    - Sintaxe de iniciação:
        <declaração> = {{<l1>}, {<l2>}, ..., {<lN>}};
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    //Exemplo 1:
    int mat[3][3];

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    printf("Imprimindo a primeira linha:\n");
    printf("%d %d %d", mat[0][0], mat[0][1], mat[0][2]);

    //Exemplo 2;
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("\n\nImprimindo a primeira linha:\n");
    for(j=0;j<3;j++){
        printf("%d ", mat1[0][j]);
    }

    printf("\n\nImprimindo toda a matriz:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
}
