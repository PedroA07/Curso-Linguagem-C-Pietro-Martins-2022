//scanf

/*
            ESPECIFICADORES DE FORMATO: scanf()
      DIGITO        DESCRIÇÃO
    "d" ou "i"  ->  Números inteiros em base decimal;
        "X"     ->  Números inteiros em base hexadecimal;
        "f"     ->  Números em ponto flutuante (com casas decimais);
        "e"     ->  Números em notação científica (com casas decimais);
        "c"     ->  Caracteres alfanuméricos (texto);
        "s"     ->  Sequência de caracteres alfanuméricos (texto);
    "[^chars]"  ->  Lê todos os dados digitados, exceto os especificados em "chars";
*/

//EXEMPLOS:
#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;  //Declaração da variável inteira "idade" com atribuição de valor, direto na memória.

    printf("Valor inicial da idade: %d.\n", idade);//Mostrando o valor da variável;

    printf("Digite uma idade: \n");//Solicitando ao usuário, um novo valor para "idade".
    scanf("%d", &idade);//Inserindo novo valor inteiro.

    printf("Idade informada: %d.\n", idade);//Mostrando nova idade.
}
