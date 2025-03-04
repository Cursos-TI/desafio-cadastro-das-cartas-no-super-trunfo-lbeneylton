#include <stdio.h>

/* Verifica se o número inserido pelo usuario é par ou impar
retornando resposta através do terminal */

int main(){
    //Declaração das variaveis
    int num;

    //Entrada de dados via terminal
    printf("\n\nDigite um número\n");
    scanf(" %i", &num);
    printf("\n\n");

    if (num % 2  == 0){
        printf("O número %i é par", num);
    }else{
        printf("O número %i é impar", num);
    }
    
    printf("\n\n");

}