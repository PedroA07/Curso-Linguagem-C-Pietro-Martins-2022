//printf

/*
            ESPECIFICADORES DE FORMATO: printf()

      DIGITO        DESCRI��O
    "d" ou "i"  ->  N�meros inteiros em base decimal;
        "x"     ->  N�meros inteiros em base hexadecimal;
        "f"     ->  N�meros em ponto flutuante (com casas decimais);
        "e"     ->  N�meros em nota��es cient�fica (com casas decimais);
        "c"     ->  Caracteres alfanum�ricos (texto);
        "s"     ->  Sequ�ncia de caracteres alfanum�ricos (texto);
     ".<num>"   ->  Especifica quantos d�gitos ser�o impressos ap�s a v�rgula;
*/

/*
            SEQU�NCIAS DE ESCAPE: printf()

      ESCAPE        DESCRI��O
       "\a"     ->  Toca um bipe, alarme sonoro padr�o do sistema;
       "\b"     ->  Backspace;
       "\n"     ->  Quebra de linha;
       "\t"     ->  Tabula��o horizontal (TAB);
       "\r"     ->  Retorna ao in�cio da linha;
       "\0"     ->  Caractere nulo;
       "\v"     ->  Tabula��o vertical;
       "\\"     ->  Caractere \;
       "\'"     ->  Caractere ';
       "\""     ->  Caractere ";
       "\?"     ->  Caractere ?;
      "\123"    ->  Caractere relacionado ao c�digo 123 em octal (ASCII);
      "\X12"    ->  Caractere relacionado ao c�digo 12 em hexadecimal (ASCII);
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
