/*
    Faça um programa que seja capaz de armazenar os dados de três pessoas:
    nome, idade, peso e altura. Ao final, o algorítimo deve mostrar, na
    tela, o nome e a idade da primeira pessoa e o peso e a altura da
    última pessoa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct tipo_pessoa{
    char nome[200];
    int idade;
    float peso, altura;
};

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    struct tipo_pessoa lista[3];
    int i;

    for(i=0; i<3; i++){
        printf("\n\tInsira o nome da pessoa da posição %d: ", i);
        scanf("%199[^\n]s", &lista[i].nome);
        fflush(stdin);
        printf("\n\tInsira a idade da pessoa da posição %d: ", i);
        scanf("%d", &lista[i].idade);
        fflush(stdin);
        printf("\n\tInsira o peso da pessoa da posição %d: ", i);
        scanf("%f", &lista[i].peso);
        fflush(stdin);
        printf("\n\tInsira a altura da pessoa da posição %d: ", i);
        scanf("%f", &lista[i].altura);
        fflush(stdin);
    }

    printf("\n\n\t------------------------------------------------------------\n"
           "\tPessoa 1 - Nome: %s\n"
           "\tPessoa 1 - Idade: %d\n"
           "\tÚltima Pessoa - Peso: %.2f\n"
           "\tÚltima Pessoa - Altura: %.2f\n"
           "\t------------------------------------------------------------\n\n", lista[0].nome, lista[0].idade, lista[2].peso, lista[2].altura);

    return 0;
}
