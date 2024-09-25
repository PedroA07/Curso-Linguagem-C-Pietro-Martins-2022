/*
    O custo de um carro novo ao consumidor final é o preço
    de fábrica somado ao percentual de lucro do distribuidor,
    acrescido dos impostos aplicados ao preço de fábrica.
    Faça um programa que receba o preço de fábrica de um veículo,
    o percentual de lucro do distribuidor e o percentual de imposto.

    Em cada item, crie uma função distinta para calcular e retornar:

    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo;

    Após criar cada uma das funções, desenvolva um algorítimo de
    declare e invoque cada uma das funções.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Protótipos de Funções:
float calcLucroDist(float preco_fab, float pct_dist);

float calcImposto(float preco_fab, float pct_imp);

float calcValorFinal(float preco_fab, float vl_dist, float vl_imp);

//Código main:
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float preco_fab, pct_dist, pct_imp, lucro_dist, imp, vl_final;

    printf("\n\tInsira o preço de fábrica: R$ ");
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

//Declarações das Funções:
float calcLucroDist(float preco_fab, float pct_dist){
    return preco_fab * pct_dist / 100;
}

float calcImposto(float preco_fab, float pct_imp){
    return preco_fab * pct_imp / 100;
}

float calcValorFinal(float preco_fab, float vl_dist, float vl_imp){
    return preco_fab + vl_dist + vl_imp;
}
