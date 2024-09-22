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
/*
        PARÂMETROS DE FUNÇÃO DISTINTOS

    - Sintaxe para parâmetros struct:
        <tipo> <função>(<tipo_struct> <param>){...}
    - Sintaxe para vetores/matrizes como parâmetro:
        - Vetores:
            - <tipo> <função>(<tipo> <vet>[], int tam){...}
            - <tipo> <função>(<tipo> <vet>[<tam>]){...}
            - <tipo> <função>(<tipo> *<vet>, int tam){...}
        - Matrizes:
            - <tipo> <função>(<tipo> m[] [<tam2>], int tam1){...}
*/
/*
        MAIS DETALHES SOBRE FUNÇÕES

    - Escopo de variáveis: local vs global;
    - Declaração de uma função em C:
        - Deve aparecer antes do "main()";
        - Sintaxe de protótipo de função:
            <tipo> <nome_da_função>(<parâmetros>);
*/
//EXEMPLO:
#include <stdio.h>
//Função exemplo 1:
float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}
//Funções exemplo 2:
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
    printf("\nO menor valor é: %f\n", m);
}
float menor(float num1, float num2){
    if (num1 < num2)
        return num 1;
    else
        return num 2;
}
