#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Será criado um Jonkepô, 
*/

int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    //Entrada de  dados
    printf("*** JOKENPÔ ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf(" %i", &escolhaJogador);
    printf("\n\n\n");

    //Sorteio do computador
    escolhaComputador = rand() % 3 + 1;

    //Escolha do jogador
    switch (escolhaJogador){
    case 1:
        printf("Jogador: Pedra - ");
        break;
    
    case 2:
        printf("Jogador: Papel - ");
        break;
    
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    
    default:
        printf("Opção invalida");
    }

    //Escolha do Computador
    switch (escolhaComputador){
    case 1:
        printf("Computador: Pedra");
        break;
    
    case 2:
        printf("Computador: Papel");
        break;
    
    case 3:
        printf("Computador: Tesoura");
        break;
    
    }

    printf("\n\n\n");

    //Verifica empate
    if (escolhaJogador == escolhaComputador){
        printf("### Jogo Empatou ###");

    //Verifica vitorias do jogador
    }else if ((escolhaJogador == 1 && escolhaComputador ==3) || 
            (escolhaJogador == 2 && escolhaComputador == 1) ||  
            (escolhaJogador  == 3 && escolhaComputador == 1)){
                printf("Jogador ganhou\n\n\n");

    }else{
        printf("Jogador perdeu\n\n\n");
    }
    
}