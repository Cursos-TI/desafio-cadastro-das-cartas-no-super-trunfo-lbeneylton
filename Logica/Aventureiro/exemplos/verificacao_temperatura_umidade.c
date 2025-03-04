#include <stdio.h>

//verifirecamos se a temperatura está entre 20 e 30 graus, e se a umidade está acima de 50%.
int main(){
    float temperatura = 35;
    float umidade = 51;

    printf("\n\n");
    if(temperatura>= 20 && temperatura<=30 && umidade>50){
        printf("Condições aceitaveis");
    }else{
        printf("Pessimas condições");
    }

    printf("\n\n\n");
}