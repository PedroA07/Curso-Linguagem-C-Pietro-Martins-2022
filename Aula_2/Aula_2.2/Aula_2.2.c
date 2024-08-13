//scanf

/*
            ESPECIFICADORES DE FORMATO: scanf()
      DIGITO        DESCRI��O
    "d" ou "i"  ->  N�meros inteiros em base decimal;
        "X"     ->  N�meros inteiros em base hexadecimal;
        "f"     ->  N�meros em ponto flutuante (com casas decimais);
        "e"     ->  N�meros em nota��o cient�fica (com casas decimais);
        "c"     ->  Caracteres alfanum�ricos (texto);
        "s"     ->  Sequ�ncia de caracteres alfanum�ricos (texto);
    "[^chars]"  ->  L� todos os dados digitados, exceto os especificados em "chars";
*/

//EXEMPLOS:
#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;  //Declara��o da vari�vel inteira "idade" com atribui��o de valor, direto na mem�ria.

    printf("Valor inicial da idade: %d.\n", idade);//Mostrando o valor da vari�vel;

    printf("Digite uma idade: \n");//Solicitando ao usu�rio, um novo valor para "idade".
    scanf("%d", &idade);//Inserindo novo valor inteiro.

    printf("Idade informada: %d.\n", idade);//Mostrando nova idade.
}
