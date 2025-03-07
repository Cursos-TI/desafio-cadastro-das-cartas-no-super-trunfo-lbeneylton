#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Jogo onde você tenta acertar se seu numero escolhido 
é maior, igual ou menor 
que o escolhido pelo computador
*/

int main(){

    int num, escolha, numpc;
    
    //Geração do número do pc
    srand(time(0));
    numpc = rand() %100 + 1;

    printf("*** Jogo Maior, Menor ou Igual ***");
    printf("Escolha um número de 1 e 100\n");
    scanf(" %i", &num);
    printf("\n\n\n");
    
    printf("Escolha a comparação\n");
    printf("1. Maior\n");
    printf("2. Menor\n");
    printf("3. Igual\n");
    printf("Escolha: ");
    scanf(" %i", &escolha);
    

    switch (escolha){
    case 1:
        num > numpc ? printf("Parabéns você ganhou pois seu número é maior ao do computador"): printf("Você perdeu");
    break;

    case 2:
        num < numpc ? printf("Parabéns você ganhou pois seu número é menor ao do computador"): printf("Você perdeu");
    break;

    case 3:
        num == numpc ? printf("Parabéns você ganhou pois seu número é igual ao do computador"): printf("Você perdeu");
    break;
    
    default:
        printf("Opção inválida");
    }

    printf("Você escolheu %i\nO computador escolheu %i",num, numpc);
    printf("\n\n\n");

}




