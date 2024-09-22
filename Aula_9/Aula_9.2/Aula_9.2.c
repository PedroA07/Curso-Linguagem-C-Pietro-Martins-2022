// Trabalhando com vários arquivos.

/*
        INDO ALÉM COM A FUNÇÃO: "main()"

    - main(): seu programa programa é apenas uma função!
        - Parâmetros de um programa:
            - int argc;
            - char *argv[];
        - Sintaxe correta do main():
            int main(int argc, char *argv[]){...}
*/
/*
        SEU PROJETO GANHANDO CORPO

    - Integrar arquivos fonte distintos: "#include";
        - Arquivos ".h":
            - Variáveis globais;
            - Protótipos de função;
            - Definição de novos tipos;
        - Arquivos ".c":
            - Implementação da lógica;
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
        printf("Não foram inserídos argumentos no programa.\n");
    }
}
