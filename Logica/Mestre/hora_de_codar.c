#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Jogo onde você tenta acertar se seu numero escolhido 
é maior, igual ou menor 
que o escolhido pelo computador
*/

int main(){

    int num, numpc, resultado;
    char escolha;
    //Geração do número do pc
    srand(time(0));
    numpc = rand() %100 + 1;

    printf("*** Jogo Maior, Menor ou Igual ***\n\n");
    printf("Escolha um número de 1 e 100\n");
    scanf(" %i", &num);
    printf("\n\n\n");
    
    printf("Escolha a comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Escolha: ");
    scanf(" %c", &escolha);
    

    switch (escolha){
    case 'M':
    case 'm':
        printf("Você escolheu a opção MAIOR\n");
        resultado = num > numpc ? 1 : 0;

    break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção MENOR\n");
        resultado = num < numpc ? 1 : 0;

    break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção IGUAL\n");
        resultado = num == numpc ? 1: 0;

    break;
    
    default:
        printf("Opção inválida");
    }

    printf("Você escolheu %i\nO computador escolheu %i\n",num, numpc);
    if (resultado == 1){
        printf("Você ganhou\n");
    }else
    {
        printf("Você perdeu\n");
    }
    
    

    printf("\n\n\n");

}




