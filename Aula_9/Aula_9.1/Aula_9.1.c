// Funções e Procedimentos

/*
        FUNÇÕES E MODELARIZAÇÕES DE CÓDIGO

    Funções: resolver problemas complexos através da combinação de soluções menores;

    Sintaxe de definição:
        <tipo> <nome_da_função>(<parâmetros>){
            <bloco de comandos>
            return <informação>;
        }
*/
/*
        DETALHES DE UMA FUNÇÃO
    - Identificador: mesma regra de variáveis;
    - Tipo de retorno:
        - Retorno não é obrigatório em C;
    - Parâmetros de entrada:
        - Nenhum, um ou vários;
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
