/*
    Faça um programa que receba o número de horas trabalhadas por um gestor
    e o valor do salário mínimo vigente. Crie uma função que calcule o salário
    a receber do gestor, seguindo as regras abaixo:

    I - a hora trabalhada vale metade do salário mínimo;
    II - o salário bruto equivale ao números de horas trabalhadas multiplicado
        pelo valor da hora trabalhada;
    III - o imposto equivale a 3% do salário bruto;
    IV - o salário a receber equivale ao salário bruto menos o imposto.

    Crie um algorítimo que invoque a respectiva função e mostre o salário a receber.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Protótipo de função:
float calcReceberSal(float qnt_hora, float sal_min);

//Função main:
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float hr_trab, sal_min, sal_rec;

    printf("\n\tInsira a quantidade de horas trabalhadas: ");
    scanf("%f", &hr_trab);
    printf("\n\tInsira o valor do salário mínimo: R$ ");
    scanf("%f", &sal_min);

    sal_rec = calcReceberSal(hr_trab, sal_min);

    printf("\n\n\tSalário a receber: R$ %.2f", sal_rec);

    return 0;
}

//Declarando função:
float calcReceberSal(float qnt_hora, float sal_min){

    float hr_trab, sal_bruto, imp, sal_rec;

    hr_trab = sal_min / 2.0;//Colocando casas decimais eu forço o programa a não arredondar valores.
    sal_bruto = qnt_hora * hr_trab;
    imp = sal_bruto * 3 / 100;
    sal_rec = sal_bruto - imp;

    return sal_rec;
}
