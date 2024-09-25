/*
    O custo de um carro novo ao consumidor final � o pre�o
    de f�brica somado ao percentual de lucro do distribuidor,
    acrescido dos impostos aplicados ao pre�o de f�brica.
    Fa�a um programa que receba o pre�o de f�brica de um ve�culo,
    o percentual de lucro do distribuidor e o percentual de imposto.

    Em cada item, crie uma fun��o distinta para calcular e retornar:

    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o pre�o final do ve�culo;

    Ap�s criar cada uma das fun��es, desenvolva um algor�timo de
    declare e invoque cada uma das fun��es.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Prot�tipos de Fun��es:
float calcLucroDist(float preco_fab, float pct_dist);

float calcImposto(float preco_fab, float pct_imp);

float calcValorFinal(float preco_fab, float vl_dist, float vl_imp);

//C�digo main:
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float preco_fab, pct_dist, pct_imp, lucro_dist, imp, vl_final;

    printf("\n\tInsira o pre�o de f�brica: R$ ");
    scanf("%f", &preco_fab);
    printf("\n\tInsira o percentual de lucro do distribuidor(%): ");
    scanf("%f", &pct_dist);
    printf("\n\tInsira o percentual de lucro do imposto(%): ");
    scanf("%f", &pct_imp);

    lucro_dist = calcLucroDist(preco_fab, pct_dist);
    imp = calcImposto(preco_fab, pct_imp);
    vl_final = calcValorFinal(preco_fab, lucro_dist, imp);

    printf("\n\n\tValor do lucro do distribuidor: R$ %.2f"
           "\n\tValor do imposto: R$ %.2f"
           "\n\t---------------------------------------------------"
           "\n\tValor Total: R$ %.2f"
           "\n\t---------------------------------------------------\n\n", lucro_dist, imp, vl_final);

    return 0;
}

//Declara��es das Fun��es:
float calcLucroDist(float preco_fab, float pct_dist){
    return preco_fab * pct_dist / 100;
}

float calcImposto(float preco_fab, float pct_imp){
    return preco_fab * pct_imp / 100;
}

float calcValorFinal(float preco_fab, float vl_dist, float vl_imp){
    return preco_fab + vl_dist + vl_imp;
}
