/*
    A nota final de um estudante � calculada a partir de tr�s notas
    atribu�das respectivamente a um trabalho de laborat�rio, a uma
    avalia��o semestral e a um exame final. A m�dia das tr�s notas
    mencionadas anteriormente obedece aos pesos a seguir:

    Nota:                       |Peso:
    ----------------------------|-----
    Trabalho de Laborat�rio     |   2
    Avalia��o semestral         |   3
    Exame fianl                 |   5

    Fa�a um programa que receba as tr�s notas, calcule e mostra a m�dia
    ponderada e o conceito que segue a tabela abaixo:

    M�dia ponderada:    |Conceito:
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
    printf("\n\tM�dia: %.1f\n", media);

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
