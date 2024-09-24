/*
    A nota final de um estudante é calculada a partir de três notas
    atribuídas respectivamente a um trabalho de laboratório, a uma
    avaliação semestral e a um exame final. A média das três notas
    mencionadas anteriormente obedece aos pesos a seguir:

    Nota:                       |Peso:
    ----------------------------|-----
    Trabalho de Laboratório     |   2
    Avaliação semestral         |   3
    Exame fianl                 |   5

    Faça um programa que receba as três notas, calcule e mostra a média
    ponderada e o conceito que segue a tabela abaixo:

    Média ponderada:    |Conceito:
    --------------------|---------
    8,0 ~ 10,0          |    A
    7,0 ~ 8,0           |    B
    6,0 ~ 7,0           |    C
    5,0 ~ 6,0           |    D
    0,0 ~ 5,0           |    E
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    float nt_trab, nt_aval, nt_exam, media;

    printf("\tInsira a nota do trabalho: ");
    scanf("%f", &nt_trab);
    printf("\tInsira a nota da avaliacao: ");
    scanf("%f", &nt_aval);
    printf("\tinsira a nota do exame final: ");
    scanf("%f", &nt_exam);

    media = (nt_trab*2 + nt_aval*3 + nt_exam*5) / 10;
    printf("\n\tMédia: %.1f\n", media);

    if(media >= 0.0 && media <= 10.0){
        //8,0 ~ 10,0 = A
        if(media >= 8.0){
            printf("\tConceito A.\n");
        }else{
            //7,0 ~ 8,0 = B
            if(media >= 7.0){
                printf("\tConceito B.\n");
            }else{
                //6,0 ~ 7,0 = C
                if(media >= 6.0){
                    printf("\tConceito C.\n");
                }else{
                    //5,0 ~ 6,0 = D
                    if(media >= 5.0){
                        printf("\tConceito D.\n");
                    }else{
                        //0,0 ~ 5,0 = E
                        printf("\tConceito E.\n");
                    }
                }
            }
        }
    }

    return 0;
}
