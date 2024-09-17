// Operações Lógicas: Disjunção, Conjunção e Negação

/*
        COMO CRIAR CONDIÇÕES LÓGICOS-RELACIONAIS:
    Operadores lógicos:
        - Conjunção("e" lógico): "&&";
            - É verdade quando tudo for verdade;
        - Disjunção("ou" lógico): "||";
            - É verdade se ao menos 1 for verdade;
        - Inversão(negação - "não lógico"): "!";
            - É verdade quando o operador é falso;
*/
//EXEMPLO:
#include <stdio.h>

int main(){

    float m;

    printf("Insira a nota: \n")
    scanf("%f", &m);

    if(m >= 4.0 && < 7.0){
        printf("Tem direito a exame!\n");
    }
}
