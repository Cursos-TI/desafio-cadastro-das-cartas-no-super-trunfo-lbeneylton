#include <stdio.h>

int main(){

    //Declara a nota do aluno
    int nota;

    printf("Digite a nota do aluno\n\n");
    scanf(" %i", &nota);

    //Verifica se a nota é maior q a media que está escrita no IF

    if ( nota>= 70){
        printf("\n\nParabéns! Você foi aprovado\n\n");
    }else{
        printf("\n\nQue Pena! Você não foi aprovado\n\n");
    }
    

}