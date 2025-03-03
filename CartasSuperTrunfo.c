#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[50], estado2[50];
    char codigo[4], codigo2[4];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontos_turisticos, pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome do estado\n");
    fgets(estado, 50, stdin);

    printf("Digite o código da carta\n");
    fgets(codigo, 4, stdin);

    printf("Digite o nome da cidade\n");
    fgets(cidade, 50, stdin);

    printf("Digite o tamanho da população\n");
    scanf(" %i", &populacao);

    printf("Digite a área da cidade\n");
    scanf(" %f", &area);

    printf("Digite o PIB dac cidade\n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pomtos turisticos\n");
    scanf(" %i", &pontos_turisticos);

    printf("\n\nCADASTRO DA SEGUNDA CARTA\n\n");

    printf("Digite o nome do estado\n");
    fgets(estado2, 50, stdin);

    printf("Digite o código da carta\n");
    fgets(codigo2, 4, stdin);

    printf("Digite o nome da cidade\n");
    fgets(cidade2, 50, stdin);

    printf("Digite o tamanho da população\n");
    scanf(" %i", &populacao2);

    printf("Digite a área da cidade\n");
    scanf(" %f", &area2);

    printf("Digite o PIB dac cidade\n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pomtos turisticos\n");
    scanf(" %i", &pontos_turisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("RESULTADO DAS CARTAS");

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da cidade: %s\n", estado, codigo, cidade);
    printf("População: %i\nÁrea: %.2f\nPIB: %.2f\n",populacao, area, PIB);
    printf("Quantidade de Pontos Turisticos: %i", pontos_turisticos);

    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %i\nÁrea: %.2f\nPIB: %.2f\n",populacao2, area2, PIB2);
    printf("Quantidade de Pontos Turisticos: %i", pontos_turisticos2);
    





}
