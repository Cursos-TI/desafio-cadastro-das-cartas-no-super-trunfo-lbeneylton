#include <stdio.h>

/*
Vamos criar um programa que verifica se uma pessoa é qualificada para benefícios sociais 
com base em vários critérios: idade, renda e número de dependentes.

18 >= Idade <= 65
renda < 3000
dependetes > 2


*/

int main(){
    int idade, dependentes;
    float renda;

    printf("\n\n");
    printf("Digite a sua idade\n");
    scanf(" %i",&idade);

    printf("Digite a sua renda mensal\n");
    scanf(" %i",&renda);

    printf("Digite o número de dependetes\n");
    scanf(" %i",&dependentes);

    printf("\n\n");
    if( idade>= 18 && idade <= 65){
        if (renda < 3000){
            /* code */
        }else
        {
            /* code */
        }
        
                

    }else{
        printf("Você não está qualificado para o beneficio devido a sua idade");
    }
    
    printf("\n\n\n");

}