// Domine o Comando while

/*
        LAÇO CONDICIONAL WHILE

    Comando while:
        - Inicialização de uma ou mais variáveis de controle;
        - Definição de uma condição de parada
            - Enquanto for verdadeira: repete;
        - Atualização das variáveis de controle;
        CUIDADO: loop infinito.
        Sintaxe:
            while(<condição>){
                <bloco_de_comandos>
            }
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    int i = 1;

    while(i <= 10){
        printf("%d", i);
        ++i;
    }
}
