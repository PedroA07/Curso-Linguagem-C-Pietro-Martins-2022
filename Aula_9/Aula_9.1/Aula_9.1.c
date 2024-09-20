// Fun��es e Procedimentos

/*
        FUN��ES E MODELARIZA��ES DE C�DIGO

    Fun��es: resolver problemas complexos atrav�s da combina��o de solu��es menores;

    Sintaxe de defini��o:
        <tipo> <nome_da_fun��o>(<par�metros>){
            <bloco de comandos>
            return <informa��o>;
        }
*/
/*
        DETALHES DE UMA FUN��O
    - Identificador: mesma regra de vari�veis;
    - Tipo de retorno:
        - Retorno n�o � obrigat�rio em C;
    - Par�metros de entrada:
        - Nenhum, um ou v�rios;
*/

//EXEMPLO:
#include <stdio.h>

float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main(){
    float x, y, m;
    printf("Insira um valor: ");
    scanf("%f", &x);
    fflush(stdin);
    printf("\nInsita mais um valor: ");
    scanf("%f", &y);
    fflush(stdin);
    m = maior(x, y);
    printf("\n\nMaior: %.2f\n", m);
}
