// break e continue

/*
        COMANDOS DE CONTROLE DE DESVIO

    Comando break:
        - Utilizado para encerrar por completo uma sequ�ncia de repeti��es;
    Comando continue:
        - Utilizado para encerrar a intera��o atual, passando para a pr�xima intera��o;
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    int i;

    for(i=1; i<=10; i++){
        printf("%d ", i);
        if(i == 5){
            break;
        }
    }
    for(i=1; i<=10;i++);{
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }
}
