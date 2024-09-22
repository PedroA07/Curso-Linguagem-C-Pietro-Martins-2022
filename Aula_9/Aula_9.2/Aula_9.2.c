// Trabalhando com v�rios arquivos.

/*
        INDO AL�M COM A FUN��O: "main()"

    - main(): seu programa programa � apenas uma fun��o!
        - Par�metros de um programa:
            - int argc;
            - char *argv[];
        - Sintaxe correta do main():
            int main(int argc, char *argv[]){...}
*/
#include <stdio.h>

int main(int argc, char *argv[]){

    int i;

    if(argc > 1){
        printf("Foram inseridos %d argumentos: ");
        for(i=0;i<argc;i++){
            printf("%s\n", argv[i]);
        }
    }else{
        printf("N�o foram inser�dos argumentos no programa.\n");
    }
}
