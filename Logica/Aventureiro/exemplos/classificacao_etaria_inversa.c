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
    if (idade>=60){
        printf("Você é um idoso");

    }else if (idade >= 18){
        printf("Você é um adulto");

    }else if (idade >= 12){
        printf("Você pe um adolescente");

    }else{
        printf("Você é uma criança");
    }
    printf("\n\n\n");    

}