// do-while

/*
        LA�O CONDICIONAL DO-WHILE

    Comandos do-while:
        - Similar ao while
            - Inicializa��o, condi��o, atualiza��o;
        - Diferen�a crucial
            - Condi��o avaliada somente ao final;
            - Bloco de comandos � executado, obrigat�riamente ao menos 1x.
    Sintaxe:
        do{
            <bloco_de_comandos>
        }while(<condi��o>);
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
