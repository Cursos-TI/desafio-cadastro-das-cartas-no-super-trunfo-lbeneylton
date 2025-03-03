#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[50], estado2[50], codigo[4], codigo2[4], cidade[50], cidade2[50];
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    double area, area2, PIB, PIB2, densidade_populacional, densidade_populacional2, PIBperC, PIBperC2;;

    // Cadastro das Cartas:
    // Carta 1
    printf("Digite o nome do estado\n");
    scanf(" %s", estado);

    printf("Digite o código da carta\n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade\n");
    scanf(" %s", cidade);

    printf("Digite o tamanho da população (habitantes)\n");
    scanf(" %i", &populacao);

    printf("Digite a área da cidade (em Km²)\n");
    scanf(" %lf", &area);

    printf("Digite o PIB da cidade (em bilhões de habitantes)\n");
    scanf(" %lf", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf(" %i", &pontos_turisticos);

    //Dados que são calculados da carta 1
    PIBperC = PIB/populacao;
    densidade_populacional = populacao/area;


    printf("\n\n*** CADASTRO DA SEGUNDA CARTA ***\n\n");

    //Carta 2
    printf("Digite o nome do estado\n");
    scanf(" %s",estado2);

    printf("Digite o código da carta\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade\n");
    scanf(" %s", cidade2);

    printf("Digite o tamanho da população (habitantes)\n");
    scanf(" %i", &populacao2);

    printf("Digite a área da cidade (em Km²)\n");
    scanf(" %lf", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais)\n");
    scanf(" %lf", &PIB2);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf(" %i", &pontos_turisticos2);

    //Dados que são calculados da carta 2
    PIBperC2 = PIB2/populacao2;
    densidade_populacional2 = populacao2/area2;

    
    // Exibição dos Dados das Cartas:
    printf("\n\n\nRESULTADO DAS CARTAS\n\n\n");

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado, codigo, cidade);
    printf("População: %i Habitantes\nÁrea: %.2lf Km²\nPIB: %.2lf Bilhões de Reais\n",populacao, area, PIB);
    printf("Quantidade de Pontos Turisticos: %i \n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf\nPIB per Capita: %.2lf\n\n\n\n", densidade_populacional, PIBperC);


    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %i Habitantes\nÁrea: %.2lf Km²\nPIB: %.2lf Bilhões de Reais\n",populacao2, area2, PIB2);
    printf("Quantidade de Pontos Turisticos: %i \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf\nPIB per Capita:%.2lf\n\n", densidade_populacional2, PIBperC2);


}
