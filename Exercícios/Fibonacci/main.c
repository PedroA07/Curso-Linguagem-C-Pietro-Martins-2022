/*
    Faça um programa que mostre os oito
    primeiros termos da sequência de Fibonacci.

    0-1-1-2-3-5-8-13-21-34-55...
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int i, ant1, ant2, atual;
    ant1 = 1;
    ant2 = 0;

    printf("Primeiros oito termos da sequência de Fibonacci: ");
    printf("%d ", ant2);
    printf("%d ", ant1);

    for(i=3;i<=8;i++){
        atual = ant1 + ant2;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
    }

    return 0;
}
