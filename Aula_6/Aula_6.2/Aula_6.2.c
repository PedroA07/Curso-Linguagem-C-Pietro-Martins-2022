// Strings - Trabalhando com dados de texto

/*
                        STRING: VETORES DE CHAR

    Em linguagem C:
        - Dados de texto são pouco abstrato;
        - É preciso entender como os dados estão dispostos em memória;
        - Operações sobre caracteres individuais:
                | 0 | 1 | 2 | 3 | 4 |
                | O | L | Á | ! | \0|
            Exemplo: Para cada 10 caracteres, eu preciso de 11 posições
                    reservadas;
                     A posição 11, armazenara o "\0" que é o caractere
                    que diz para o programa onde acabou a palavra ou
                    frase;
*/
/*
        STRING: ENTRADA E SAÍDA

    scanf():
        - Limitadores: Sintaxe rebuscada;
        - Especificador de formato "%s";
        - Sintaxe geral:
            scanf("%s", <str>);
        - Sintaxe aprimorada:
            scanf("%<tam.-1>[^n]s", <str>);
    printf():
        - Especificador de formato "%s";
        - Sintaxe:
            printf("<texto>", <str1>, <str2>, ..., <strN>);
*/
/*
        STRING: OUTRAS ENTRADAS E SAÍDAS DE DADOS

    gets():
        - Limitações: estouro do limite do vetor;
        - Sintaxe:
            gets(<string>);

    fgets():
        - Último caractere sempre fica reservado "\0";
        - Entrada padrão: stdin;
        - Sintaxe:
            fgets(<string>, <tam.>, <stdin>);

    puts():
        - Imprime uma string diretamente na tela;
        - Não admite variáves de outros tipos;
        - Sintaxe:
            puts(<string>);

    fflush(stdin):
        - chamar sempre depois de uma entrada;
*/
/*
        BIBLIOTECA: sitring.h

    Sintaxes de funções importantes:
        - strcpy(<destino>, <origem>);
        - strcat(<destino>, <origem>);
        - strlen(<string>);
        - strcmp(<string1>, <string2>);

        BIBLIOTECA: locale.h

    Sintaxe da função:
        setlocale(LC_ALL, "Portuguese");
*/
//EXEMPLO:
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Definição Exemplo 3:
#define N 50 //Deninindo tamanho da string

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Exemplo 1:
    char s1[30];

    printf("Digite algo (scanf tradicional): ");
    scanf("%s", s1);
    fflush(stdin);

    printf("\nResultado: %s\n\n", s1);

    printf("Digite algo (scanf aprimorado): ");
    scanf("%10[^n]s", s1);
    fflush(stdin);

    printf("\nResultado: %s\n\n", s1);

    //Exemplo 2 - (gets, fgets, puts):
    char s2[50];

    printf("Digite algo (scanf tradicional): ");
    gets(s2);
    fflush(stdin);

    printf("\nResultado: ");
    puts(s2);
    puts("");

    printf("Digite algo (scanf aprimorado): ");
    fgets(s2, 50, stdin);
    fflush(stdin);

    printf("\nResultado: ");
    puts(s2);
    puts("");

    //Exemplo 3 - (strcpy):
    char origem[N] = {"Olá mundo!"};
    char destino[N];

    printf("Antes do strcpy: \n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("\n Depois do strcpy: \n");
    puts(origem);
    puts(destino);
    puts("");

    //Exemplo 4 - (strcat):
    char str1[N] = {"Lógica de"};
    char str2[N] = {" Programação!"};

    printf("Antes do strcat: \n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    strcat(str1, str2);

    printf("\nDepois do strcat: \n");
    puts(str1);

    //Exemplo 5 - (strlen):
    char str3[N];
    int i;

    printf("Digite um texto: ");
    gets(str3);
    i = strlen(str3);
    printf("\n Tamanho do texto: %d\n\n", i);

    printf("Impressão de posição em posição: ");
    for(i=0; i<strlen(str3); i++){
        printf("%c",str3[i]);
        puts("");
    }

    //Exemplo 6 - (strcmp):
    char hardText[N] = {"exit"};
    char senha_usr[N];
    int ok;

    printf("Digite uma senha: ");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if(ok == 0){
        printf("Senha correta!\n");
    }else{
        printf("Senha incorreta!\n");
    }
}
