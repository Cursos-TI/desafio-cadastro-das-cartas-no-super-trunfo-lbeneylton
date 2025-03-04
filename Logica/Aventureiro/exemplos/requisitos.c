#include <stdio.h>

int main(){
    //verificar se a pessoa antende certos requisitos
    //idade entre 18 e 30 anos
    //altura esuperior a 1.70 metros

    int idade = 25;
    float altura = 1.60;

    printf("\n\n");
    if(idade>=18 && idade<=30 && altura> 1.70){
        printf("Você atende aos requisitos");
    }else{
        printf("Você não atende aos requisitos");
    }

    printf("\n\n\n");
}