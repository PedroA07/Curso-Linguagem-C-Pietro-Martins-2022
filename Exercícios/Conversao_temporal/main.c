/*
    Jeremias possuí um cronômetro que consegue
    marcar o tempo apenas em segundos. Sabendo disso,
    desenvolva um algorítimo que receba o tempo cronometrado,
    em segundos, e diga quantas horas minutos e segundos
    se passram a partir do tempo cronometrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int seg, min, hr;

    printf("\tInsira o tempo em segundos: ");
    scanf("%d", &seg);

    /*
        1 hora = 3600 segundos;
        1 minuto = 60 segundos;
    */

    hr = seg / 3600;
    seg = seg - (3600 * hr);

    min = seg / 60;
    seg = seg - (60 * min);

    printf("\n\tHoras: %d", hr);
    printf("\n\tMinutos: %d", min);
    printf("\n\tSegundos: %d", seg);
    printf("\n\n\tTempo cronometrado: %d:%d:%d\n\n", hr, min, seg);

    return 0;
}
