// break e continue

/*
        COMANDOS DE CONTROLE DE DESVIO

    Comando break:
        - Utilizado para encerrar por completo uma sequência de repetições;
    Comando continue:
        - Utilizado para encerrar a interação atual, passando para a próxima interação;
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
