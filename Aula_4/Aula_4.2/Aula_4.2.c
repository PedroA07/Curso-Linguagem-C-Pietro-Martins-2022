// Domine if e else

/*
        ESTRUTURAS DE DECIS�O COMPOSTA

    Comandos if e else:
        - Se a condi��o for verdadeira:
            - Bloco do "if" � executado;
            - Bloco do "else" � ignorado;
        - Caso contr�rio (condi��o falsa):
            - Bloco do "if" � ignorado;
            - Bloco do "else" � executado;
    Sintaxe:
        if(<condi��o>){
            <bloco_de_comandos1>
        }
        else {
            <bloco_de_comandos2>
        }
    N�o existe "else" sem "if".
    O "else" vem sempre depois do "if".
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado(a)!\n");
    } else{
        printf("Reprovado(a)!\n");
    }
}
