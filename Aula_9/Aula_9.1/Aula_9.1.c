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
/*
        PAR�METROS DE FUN��O DISTINTOS

    - Sintaxe para par�metros struct:
        <tipo> <fun��o>(<tipo_struct> <param>){...}
    - Sintaxe para vetores/matrizes como par�metro:
        - Vetores:
            - <tipo> <fun��o>(<tipo> <vet>[], int tam){...}
            - <tipo> <fun��o>(<tipo> <vet>[<tam>]){...}
            - <tipo> <fun��o>(<tipo> *<vet>, int tam){...}
        - Matrizes:
            - <tipo> <fun��o>(<tipo> m[] [<tam2>], int tam1){...}
*/
/*
        MAIS DETALHES SOBRE FUN��ES

    - Escopo de vari�veis: local vs global;
    - Declara��o de uma fun��o em C:
        - Deve aparecer antes do "main()";
        - Sintaxe de prot�tipo de fun��o:
            <tipo> <nome_da_fun��o>(<par�metros>);
*/
//EXEMPLO:
#include <stdio.h>
//Fun��o exemplo 1:
float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}
//Fun��es exemplo 2:
void imprime1(int v[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", v[i]);
    }
}

void imprime2(int v[5]){
    int i;
    for(i=0;i<5;i++){
        printf("%d ", v[i]);
    }
}

void imprime3(int *v, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", v[i]);
    }
}
//Exemplo 3:
void imprime(int m[][4], int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
//Exemplo 4:
float menor(float num1, float num2);

int main(){
    //Exemplo 1:
    float x, y, m;
    printf("Insira um valor: ");
    scanf("%f", &x);
    fflush(stdin);
    printf("\nInsita mais um valor: ");
    scanf("%f", &y);
    fflush(stdin);

    m = maior(x, y);

    printf("\n\nMaior: %.2f\n", m);

    //Exemplo 2:
    int vet[5] = {1, 2, 3, 4, 5};

    puts("Primeiro imprime: ");
    imprime1(vet, 5);

    puts("\nSegundo imprime: ");
    imprime2(vet);

    puts("\nTerceiro imprime: ");
    imprime3(vet, 5);

    //Exemplo 3:
    int mat[3][4] = {{1, 2, 3, 4},
                     {50, 60, 70, 80},
                     {91, 101, 111, 121}};
    puts("\n\nMatriz: ");
    imprime(mat, 3);

    //Exemplo 4;
    float x, y, m;
    printf("\n\nInsira um valor: ");
    scanf("%f", &x);
    printf("\nInsira mais um valor: ");
    scanf("%f", &y);

    m = menor(x, y);
    printf("\nO menor valor �: %f\n", m);
}
float menor(float num1, float num2){
    if (num1 < num2)
        return num 1;
    else
        return num 2;
}
