#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int EntradaDados(){
    //Variaveis são definidas e cadastradas
    char estado[50], codigo[4], cidade[50];
    int populacao, pontos_turisticos;
    float area, PIB;


    printf("Digite o nome do estado\n");
    scanf(" %s", estado);

    printf("Digite o código da carta\n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade\n");
    scanf(" %s", cidade);

    printf("Digite o tamanho da população\n");
    scanf(" %i", &populacao);

    printf("Digite a área da cidade\n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade\n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf(" %i", &pontos_turisticos);

    
}




int main() {
    EntradaDados();
    printf("Executado com sucesso");
   
    return 0;
}

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 /*   printf("\n\n\nRESULTADO DAS CARTAS\n\n\n");

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da cidade: %s\n", estado, codigo, cidade);
    printf("População: %i\nÁrea: %.2f\nPIB: %.2f\n",populacao, area, PIB);
    printf("Quantidade de Pontos Turisticos: %i \n\n\n\n", pontos_turisticos);
*/



