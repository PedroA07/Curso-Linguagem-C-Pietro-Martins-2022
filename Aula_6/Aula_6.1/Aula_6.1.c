// Domine vetores (arrays)

/*
        ESTRUTURAS DE DADOS UNIDIMENCIONAIS

    Vetores:
        - Estruturas de dados unidimencionais;
        - Índice único controla as posições;
        - Sintaxe de declaração:
            <tipo> <nome>[<tamanho>];
*/
/*
        MANIPULANDO VETORES

    Acesso a uma posição:
        - Não é possível acessar um vetor todo;
        - Sintaxe:
                <nome>[<índice>]
    Lista de inicialização: preenche um vetor todo de uma vez só
        <tipo> <nome>[<tamanho>] = {<v1>, <v2>, ..., <vN>};
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    //Exemplo 1:
    int v1[5];

    float m;

    v1[0] = 50;
    v1[1] = 40;
    v1[2] = 30;
    v1[3] = 20;
    v1[4] = 10;

    m = (v1[0] + v1[1] + v1[2] + v1[3] + v1[4]) / 5;

    printf("Resultado: %f\n\n", m);

    //Exemplo 2:
    int v2[5] = {50, 40, 30, 20, 10};
    int i1;
    float s = 0;

    for(i1=0; i1<5; i1++){
        s += v2[i1];
    }

    printf("Resultado: %f\n\n", s/5);

    //Exemplo 3:
    int v3[5];
    int i2;

    for(i2=0; i2<5; i2++){
        printf("Insira um dado: ");
        scanf("%d", &v3[i2]);
    }
    printf("Dados inseridos: ");
    for(i2=0; i2<5; i2++){
        printf("%d ", v3[i2]);
    }
}
