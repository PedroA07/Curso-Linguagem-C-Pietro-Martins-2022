//Vari�veis e atribui��o de dados

/*
            VARI�VEIS
    - Espa�os em mem�ria para armazenar dados;
    - Sintaxe de declara��o:
        <tipo> <nome>
    - Nomenclatura:
        - N�o pode n�mero na 1� posi��o;
        - N�o pode caracteres especiais;
        - N�o pode espa�o;
*/

/*
                      TIPOS DE DADOS
        TIPO        |   N� DE BITS  |     FAIXA DE REPRESENTA��O
       "char"       |        8      |           -127 a 127
    "int (short)"   |       16      |        -32.768 a 32.767
    "int (long)"    |       32      | -2.147.483.648 a 2.147.483.647
       "float"      |       32      |   3,4 x 10^-38 a 3,4 x 10^38
       "double"     |       64      |  1,7 x 10^-308 a 1,7 x 10^308
*/

/*
            ATRIBUI��O DE CONTE�DO A VARI�VEIS
        - Operador "=":
            - O que est� a direita � atribu�do a vari�vel que est� � direita do operador
        - Sintaxe:
            <vari�vel> = <informa��o>;
*/

/*
            CONSTANTES
        - Diretiva "#define": cria-se um identificador para um dado de qualquer tipo.
            - mesmas regras de nomenclaturas de vari�veis;
        - Sintaxe declara��o:
            #define <nome> <valor>
*/

//Exemplos
#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e Sa�da de dados." //Criei uma constante chamada "texto".

int main(){
    printf("%s\n", texto); //Mostrando na tela a constante.

    //Declarando e atribuindo valores �s vari�veis
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    //Pedindo ao usu�rio para inser�r os dados novos
    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o nome:\n");
    scanf("%s", nome);

    //Mostrando os dados com os novos valores
    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %f.\n", altura);
    printf("Nome: %s.\n", nome);
}
