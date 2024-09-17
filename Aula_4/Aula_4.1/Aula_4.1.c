//Domine o comando IF em C

/*
        ESTRUTURA DE DECIS�O SIMPLES
    Comando "if": se a condi��o for verdadeira, o bloco � executado, sen�o, � ignorado.

    Sintaxe:
        if (<condi��o>){
            <bloco_de_comandos>
        }
*/
/*
        COMO CRIAR CONDI��ES L�GICO-RELACIONAIS
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
