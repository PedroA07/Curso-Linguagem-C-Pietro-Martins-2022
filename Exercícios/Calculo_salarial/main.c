/*
    Fa�a um programa que receba o n�mero de horas trabalhadas por um gestor
    e o valor do sal�rio m�nimo vigente. Crie uma fun��o que calcule o sal�rio
    a receber do gestor, seguindo as regras abaixo:

    I - a hora trabalhada vale metade do sal�rio m�nimo;
    II - o sal�rio bruto equivale ao n�meros de horas trabalhadas multiplicado
        pelo valor da hora trabalhada;
    III - o imposto equivale a 3% do sal�rio bruto;
    IV - o sal�rio a receber equivale ao sal�rio bruto menos o imposto.

    Crie um algor�timo que invoque a respectiva fun��o e mostre o sal�rio a receber.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Prot�tipo de fun��o:
float calcReceberSal(float qnt_hora, float sal_min);

//Fun��o main:
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float hr_trab, sal_min, sal_rec;

    printf("\n\tInsira a quantidade de horas trabalhadas: ");
    scanf("%f", &hr_trab);
    printf("\n\tInsira o valor do sal�rio m�nimo: R$ ");
    scanf("%f", &sal_min);

    sal_rec = calcReceberSal(hr_trab, sal_min);

    printf("\n\n\tSal�rio a receber: R$ %.2f", sal_rec);

    return 0;
}

//Declarando fun��o:
float calcReceberSal(float qnt_hora, float sal_min){

    float hr_trab, sal_bruto, imp, sal_rec;

    hr_trab = sal_min / 2.0;//Colocando casas decimais eu for�o o programa a n�o arredondar valores.
    sal_bruto = qnt_hora * hr_trab;
    imp = sal_bruto * 3 / 100;
    sal_rec = sal_bruto - imp;

    return sal_rec;
}
