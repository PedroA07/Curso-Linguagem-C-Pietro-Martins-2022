// Conheça o comando SWITCH-CASE

/*
        ESTRUTURA DE DECISÃO MÚLTIPLA
    Comandos switch-case:
        - É como se fossem vários "if" em sequência;
        - Útil para comparar uma "única variável".
            - Somente comparações de "igualdade";
        - Caso seja igual a um dos valores:
            - Executa o respectivo bloco;
            - Ignora todos os outros blocos;
    Sintaxe:
        switch(<var>){
            case <v1>:
                <bloco_de_comandos1>
                break;
            case <v2>:
                <bloco_de_comandos2>
                break;
            ...
            case <vN>:
                <bloco_de_comandos3>
                break;
            default:
                <bloco_de_comandos_padrão>
                break;
        }
*/

//EXEMPLO:
#include <stdio.h>

int main(){

    int d;

    printf("Insira um valor de 1 a 7:\n");
    scanf("%d", &d);

    switch(d){
        case 1:
            printf("Domingo.\n");
            break;
        case 2:
            printf("Segunda-feira.\n");
            break;
        case 3:
            printf("Terça-feira.\n");
            break;
        case 4:
            printf("Quarta-feira.\n");
            break;
        case 5:
            printf("Quinta-feira.\n");
            break;
        case 6:
            printf("Sexta-feira.\n");
            break;
        case 7:
            printf("Sábado.\n");
            break;
        default:
            printf("Valor invalido!\n");
            break;
    }
}
