// for

/*
        LA�O CONDICIONAL FOR

    Comando for:
        - Similar ao "while"
            - Inicializa��o, condi��o e atualiza��o;
        - Diferen�a crucial:
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
