#include <stdio.h>

int main(){
    //Declaração das variaveis
    int idadeA, idadeB;

    //Entrada dos dados
    printf("\n\nDigite a idade da primeira pessoa\n");
    scanf(" %i", &idadeA);

    printf("\n\nDigite a idade da segunda pessoa\n");
    scanf(" %i", &idadeB);

    //Comparação de idades
    if (idadeA > idadeB){
        printf("A primeira pessoa é mais velha");
    }else if (idadeA == idadeB){
        printf("As duas pessoas têm a mesma idade");
    }else{
        printf("A segunda pessoa é mais velha");
    }

    printf("\n\n\n");
}