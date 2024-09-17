// Domine if e else

/*
        ESTRUTURAS DE DECISÃO COMPOSTA

    Comandos if e else:
        - Se a condição for verdadeira:
            - Bloco do "if" é executado;
            - Bloco do "else" é ignorado;
        - Caso contrário (condição falsa):
            - Bloco do "if" é ignorado;
            - Bloco do "else" é executado;
    Sintaxe:
        if(<condição>){
            <bloco_de_comandos1>
        }
        else {
            <bloco_de_comandos2>
        }
    Não existe "else" sem "if".
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
