#include <stdio.h>

int main(){
    /*Verifica se a idade é maior ou igual a 18 anos para responder se a pessoa  é  aior de idade ou não*/

    int idade;

    //Entrada dos dados
    printf("Digite sua idade\n\n");
    scanf(" %i", &idade);

    //Verificação da maioridade 
    if (idade >= 18){
        printf("\nVocê é maior de idade\n\n");
    }else{
        printf("\nVocê é menor de idade\n\n");
    }
    
}