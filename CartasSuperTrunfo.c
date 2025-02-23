#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[50];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    double PIB;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome do estado\n");
    fgets(estado, 50, stdin);

    printf("Digite o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade\n");
    fgets(cidade, 50, stdin);

    printf("Digite a população\n");
    scanf("%i", populacao);

    printf("Digite a area\n");
    scanf("%f", area);

    printf("Digite o PIB\n");
    scanf("%i", PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%i", pontos_turisticos);

    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.




}
