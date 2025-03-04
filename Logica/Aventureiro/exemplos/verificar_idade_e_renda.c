#include <stdio.h>

/*
Vamos criar agora um programa que verifica se uma pessoa está qualificada para um desconto especial com base na idade e na renda mensal. 
A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000.
*/

int main(){
    int idade = 25;
    unsigned float renda = 1800;

    if (idade>60 || idade<18){
        if(renda<200){
            printf("Você tem direito ao desconto")
        }
    }else{
        printf("Você não tem direito ao desconto");
    }
    printf("\n\n\n");

}