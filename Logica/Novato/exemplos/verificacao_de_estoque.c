#include <stdio.h>

/* Verifica se o estoque é adequado,
verificando atraves de uma comparação com o estoque minimo dado no if
retornando resposta através do terminal*/

int main(){
    //Declaração das variaveis
    int estoqueAtual = 5;

    printf("\n\n");

    //Verificação do estoque
    if (estoqueAtual <= 10){
        printf("O estoque está baixo");
    }else{
        printf("O estoque está dentro do aceitável");
    }
    
    printf("\n\n");

}