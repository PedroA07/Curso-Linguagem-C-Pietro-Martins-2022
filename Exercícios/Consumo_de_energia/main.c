/*
    Sabe-se que o quilowatt de energia custa um mil�simo do sal�rio m�nimo.
    Fa�a um procedimento que receba o valor do sal�rio m�nimo e quantidade de
    quilowatts consumida por resid�ncia.

    a) o valor, em reais, de cada quilowatt;
    b) o valor, em reais, a ser pago em cada resid�ncia;
    c) o valor, em reais, a ser pago com desconto de 15%;

    Sabendo disso, desenvolva um algor�timo que pe�a para o usu�rio inserir o
    valor do sal�rio m�nimo e a quantidade de quilowatts consumido.
    Invoque o respectivo procedimento e mostre, na tela, as informa��es dos
    itens a), b) e c).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Prot�tipo de fun��o:
void calcKW(float vl_sal, float qtd_kw, float *vl_kw, float *vl_resd, float *vl_desc);
    /*Para definir dados de sa�da da fun��o, acrescente um "*" antes do seu nome.*/

//Fun��o main:
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float vl_sal, qtd_kw, vl_kw, vl_resd, vl_desc;

    printf("\n\tInsira o sal�rio m�nimo: R$ ");
    scanf("%f", &vl_sal);
    printf("\n\tInsira a quantidade de KW gasto: ");
    scanf("%f", &qtd_kw);

    //Procedimentos:
    calcKW(vl_sal, qtd_kw, &vl_kw, &vl_resd, &vl_desc);

    printf("\n\t----------------------------------------------"
           "\n\tValor de 1 KW: R$ %.2f\n", vl_kw);
    printf("\tValor a ser pago pela resid�ncia: R$ %.2f\n", vl_resd);
    printf("\tValor com desconto): R$ %.2f\n"
           "\t----------------------------------------------\n", vl_desc);

    return 0;
}

//Declara��o de fun��o:
void calcKW(float vl_sal, float qtd_kw, float *vl_kw, float *vl_resd, float *vl_desc){

    //a)
    *vl_kw = vl_sal / 1000;
    //b)
    *vl_resd = *vl_kw * qtd_kw;
    //c)
    *vl_desc = *vl_resd * 0.85;

}
