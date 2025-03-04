#include <stdio.h>

/*
Algoritmo, usando condiçoes encadeadas, para classificação etaria seguindo:

Criança         <12
Adolescente     12 <= x < 18
Adulto          18 <= x < 60
Idoso           >= 60

*/
int main(){
    int idade;

    printf("\n\n");
    printf("Digite sua idade\n");
    scanf(" %i", &idade);

    printf("\n\n");
    if (idade<12){
        printf("Você é uma criança");
    }else if (idade<18){
        printf("Você é um adolescente");
    }else if (idade<60){
        printf("Você é um adulto");
    }else{
        printf("Você é um idoso");
    }
    printf("\n\n\n");
    


}