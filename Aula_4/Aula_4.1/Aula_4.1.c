//Domine o comando IF em C

/*
        ESTRUTURA DE DECISÃO SIMPLES
    Comando "if": se a condição for verdadeira, o bloco é executado, senão, é ignorado.

    Sintaxe:
        if (<condição>){
            <bloco_de_comandos>
        }
*/
/*
        COMO CRIAR CONDIÇÕES LÓGICO-RELACIONAIS
    Operadores Relacionais:
        - Maior(>): ">";
        - Maior ou igual(>=): ">=";
        - Menor(<): "<";
        - menor ou igual(<=): "<=";
        - Igual(=): "==";
        - Diferente(!): "!=";
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    float m;

    printf("Insira a nota: \n")
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado!\n");
    }
}
