// Domine o Comando while

/*
        LA�O CONDICIONAL WHILE

    Comando while:
        - Inicializa��o de uma ou mais vari�veis de controle;
        - Defini��o de uma condi��o de parada
            - Enquanto for verdadeira: repete;
        - Atualiza��o das vari�veis de controle;
        CUIDADO: loop infinito.
        Sintaxe:
            while(<condi��o>){
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
