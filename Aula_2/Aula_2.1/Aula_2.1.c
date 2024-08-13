//printf

/*
            ESPECIFICADORES DE FORMATO: printf()

      DIGITO        DESCRIÇÃO
    "d" ou "i"  ->  Números inteiros em base decimal;
        "x"     ->  Números inteiros em base hexadecimal;
        "f"     ->  Números em ponto flutuante (com casas decimais);
        "e"     ->  Números em notações científica (com casas decimais);
        "c"     ->  Caracteres alfanuméricos (texto);
        "s"     ->  Sequência de caracteres alfanuméricos (texto);
     ".<num>"   ->  Especifica quantos dígitos serão impressos após a vírgula;
*/

/*
            SEQUÊNCIAS DE ESCAPE: printf()

      ESCAPE        DESCRIÇÃO
       "\a"     ->  Toca um bipe, alarme sonoro padrão do sistema;
       "\b"     ->  Backspace;
       "\n"     ->  Quebra de linha;
       "\t"     ->  Tabulação horizontal (TAB);
       "\r"     ->  Retorna ao início da linha;
       "\0"     ->  Caractere nulo;
       "\v"     ->  Tabulação vertical;
       "\\"     ->  Caractere \;
       "\'"     ->  Caractere ';
       "\""     ->  Caractere ";
       "\?"     ->  Caractere ?;
      "\123"    ->  Caractere relacionado ao código 123 em octal (ASCII);
      "\X12"    ->  Caractere relacionado ao código 12 em hexadecimal (ASCII);
       "%%"     ->  Caractere %;
*/

//EXEMPLOS:

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
    printf("Valor inteiro: %d.\n", 10);
    printf("Valor real: %f.\n", 3.14159265);
    printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
    printf("Dado de texto: %c.\n", 'a');
    printf("Sequencia de dado de texto: %s.\n", "testando");
}
