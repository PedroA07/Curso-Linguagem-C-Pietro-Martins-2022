// do-while

/*
        LAÇO CONDICIONAL DO-WHILE

    Comandos do-while:
        - Similar ao while
            - Inicialização, condição, atualização;
        - Diferença crucial
            - Condição avaliada somente ao final;
            - Bloco de comandos é executado, obrigatóriamente ao menos 1x.
    Sintaxe:
        do{
            <bloco_de_comandos>
        }while(<condição>);
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    int i = 1;

    do{
        printf("%d", i);
        i++;
    }while(i <= 10);
}
