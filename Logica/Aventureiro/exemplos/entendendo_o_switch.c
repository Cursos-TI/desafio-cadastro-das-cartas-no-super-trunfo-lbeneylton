#include <stdio.h>

int main(){
    int opcao;

    printf("Escolha uma opção:\n");   
    printf("1 - Verificar Saldo\n");   
    printf("2 - Fazer Deposito\n");   
    printf("3 - Fazer Saque\n");   
    scanf(" %i", &opcao);
    printf("\n\n\n");

    switch (opcao){
        case 1:
            printf("Saldo atual: R$ 1000,00");
        break;

        case 2:
            printf("Deposito realizado com Sucesso");

        break;

        case 3:
            printf("Saque realizado com sucesso");
        break;

        default:
            printf("Opção Inválida");
    }

    printf("\n\n\n");

}