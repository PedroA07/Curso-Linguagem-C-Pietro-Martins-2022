// for

/*
        LAÇO CONDICIONAL FOR

    Comando for:
        - Similar ao "while"
            - Inicialização, condição e atualização;
        - Diferença crucial:
            - Sintaxe mais completa;
            - Tudo fica embutido no comando;
        Sintaxe:
            for(<ini.>; <cond.>; <incr.>){
                <bloco_de_comandos>
            }
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    int i;

    for(i=1; i<=10; i++){
        printf("%d", i);
    }
}
