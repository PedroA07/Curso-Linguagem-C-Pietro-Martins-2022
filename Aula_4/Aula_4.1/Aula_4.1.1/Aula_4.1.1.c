// Opera��es L�gicas: Disjun��o, Conjun��o e Nega��o

/*
        COMO CRIAR CONDI��ES L�GICOS-RELACIONAIS:
    Operadores l�gicos:
        - Conjun��o("e" l�gico): "&&";
            - � verdade quando tudo for verdade;
        - Disjun��o("ou" l�gico): "||";
            - � verdade se ao menos 1 for verdade;
        - Invers�o(nega��o - "n�o l�gico"): "!";
            - � verdade quando o operador � falso;
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
