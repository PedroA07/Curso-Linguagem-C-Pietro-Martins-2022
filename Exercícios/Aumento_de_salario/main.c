/*
    Fa�a um programa que receba o sal�rio de
    um funcion�rio e o percentual de aumento, calcule
    e mostre o valor do aumento e o novo sal�rio.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float vl_salario, perc_aumento, vl_aumento, novo_salario;

    printf("\tinsira o salario: R$ ");
    scanf("%f", &vl_salario);

    printf("\tInsira o percentual de aumento: ");
    scanf("%f", &perc_aumento);

    vl_aumento = vl_salario * (perc_aumento/100);

    novo_salario = vl_salario + vl_aumento;

    printf("\n\tValor do aumento: R$ %.2f", vl_aumento);
    printf("\n\tValor do novo salario: R$ %.2f\n\n", novo_salario);

    return 0;
}
