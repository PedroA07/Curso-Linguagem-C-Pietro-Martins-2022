//Variáveis e atribuição de dados

/*
            VARIÁVEIS
    - Espaços em memória para armazenar dados;
    - Sintaxe de declaração:
        <tipo> <nome>
    - Nomenclatura:
        - Não pode número na 1ª posição;
        - Não pode caracteres especiais;
        - Não pode espaço;
*/

/*
                      TIPOS DE DADOS
        TIPO        |   N° DE BITS  |     FAIXA DE REPRESENTAÇÃO
       "char"       |        8      |           -127 a 127
    "int (short)"   |       16      |        -32.768 a 32.767
    "int (long)"    |       32      | -2.147.483.648 a 2.147.483.647
       "float"      |       32      |   3,4 x 10^-38 a 3,4 x 10^38
       "double"     |       64      |  1,7 x 10^-308 a 1,7 x 10^308
*/

/*
            ATRIBUIÇÃO DE CONTEÚDO A VARIÁVEIS
        - Operador "=":
            - O que está a direita é atribuído a variável que está à direita do operador
        - Sintaxe:
            <variável> = <informação>;
*/

/*
            CONSTANTES
        - Diretiva "#define": cria-se um identificador para um dado de qualquer tipo.
            - mesmas regras de nomenclaturas de variáveis;
        - Sintaxe declaração:
            #define <nome> <valor>
*/

//Exemplos
#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e Saída de dados." //Criei uma constante chamada "texto".

int main(){
    printf("%s\n", texto); //Mostrando na tela a constante.

    //Declarando e atribuindo valores às variáveis
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    //Pedindo ao usuário para inserír os dados novos
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
