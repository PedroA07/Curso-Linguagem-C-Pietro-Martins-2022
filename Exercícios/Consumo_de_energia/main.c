/*
    Sabe-se que o quilowatt de energia custa um milésimo do salário mínimo.
    Faça um procedimento que receba o valor do salário mínimo e quantidade de
    quilowatts consumida por residência.

    a) o valor, em reais, de cada quilowatt;
    b) o valor, em reais, a ser pago em cada residência;
    c) o valor, em reais, a ser pago com desconto de 15%;

    Sabendo disso, desenvolva um algorítimo que peça para o usuário inserir o
    valor do salário mínimo e a quantidade de quilowatts consumido.
    Invoque o respectivo procedimento e mostre, na tela, as informações dos
    itens a), b) e c).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Protótipo de função:
void calcKW(float vl_sal, float qtd_kw, float *vl_kw, float *vl_resd, float *vl_desc);
    /*Para definir dados de saída da função, acrescente um "*" antes do seu nome.*/

//Função main:
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float vl_sal, qtd_kw, vl_kw, vl_resd, vl_desc;

    printf("\n\tInsira o salário mínimo: R$ ");
    scanf("%f", &vl_sal);
    printf("\n\tInsira a quantidade de KW gasto: ");
    scanf("%f", &qtd_kw);

    //Procedimentos:
    calcKW(vl_sal, qtd_kw, &vl_kw, &vl_resd, &vl_desc);

    printf("\n\t----------------------------------------------"
           "\n\tValor de 1 KW: R$ %.2f\n", vl_kw);
    printf("\tValor a ser pago pela residência: R$ %.2f\n", vl_resd);
    printf("\tValor com desconto): R$ %.2f\n"
           "\t----------------------------------------------\n", vl_desc);

    return 0;
}

//Declaração de função:
void calcKW(float vl_sal, float qtd_kw, float *vl_kw, float *vl_resd, float *vl_desc){

    //a)
    *vl_kw = vl_sal / 1000;
    //b)
    *vl_resd = *vl_kw * qtd_kw;
    //c)
    *vl_desc = *vl_resd * 0.85;

}
