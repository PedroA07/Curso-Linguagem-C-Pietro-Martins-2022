// Structs

/*
        STRUCTS

    - Definindo novo tipo;
        - typedef;
    - Declarando variáveis do novo tipo;
    - Acessando membros de uma váriavel struct;
*/
/*
        TIPOS DE DADOS COMPOSTOS

    Structs (registro):
        - Sintaxe de definição:
            struct <novo_tipo>{
                <tipo1> <campo1>;
                <tipo2> <campo2>;
                ...
                <tipoN> <campoN>;
            };
*/
/*
        DECLARANDO VARIÁVEIS DO NOVO TIPO

    - Comando typedef: renomeia um indentificador;
        - Sintaxe:
            typedef <tipo> <novo_nome>;
        - Sintaxes de declaração de variável struct:
            - struct <novo_tipo> <nome_variável>;
                  <novo_nome> <nome_variável>;
*/
/*
        ACESSANDO MEMBROS DE UMA STRUCT

    Antes de mais nada é preciso haver uma variável desse tipo declarada:
        - Sintaxe:
            <variável>.<campo>
    - Fato: é comum misturar vetores e structs;
*/

//EXEMPLO:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define TAM1 3

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Exemplo 1
    //Criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Testando"};

    printf("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Solicitando inserções via teclado
    printf("\nInsira sua idade: ");
    scanf("%d", &pes.idade);
    printf("\nInsira seu peso: ");
    scanf("%.2f", &pes.peso);
    fflush(stdin);
    printf("\nInsira seu nome: ");
    scanf("%TAM[^n]s", &pes.nome);
    fflush(stdin);

    printf("\n\nAlterando com dados do usuário:\n");
    printf("Idade usuário: %d\n", pes.idade);
    printf("Peso usuário: %.2f\n", pes.peso);
    printf("Nome usuário: %s\n", pes.nome);

    //Exemplo 2:
    tipo_pessoa lista[TAM1];
    int i;

    for(i=0; i<TAM1; i++){
        printf("\nInsira os dados (%d):\n", i+1);
        printf("Nome: ");
        scanf("%TAM[^n]s", &lista[i].nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Peso: ");
        scanf("%.2f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");

    puts("\nSeus dados:\n");
    for(i=0; i<TAM1; i++){
        printf("------------- Pessoa %d -------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("----------------------------------\n");
}
