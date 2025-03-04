#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países

int main() {
    //Definição das variáveis para cada atributo das cidades.

    char estado[50], estado2[50], codigo[4], codigo2[4], cidade[50], cidade2[50];
    int pontos_turisticos, pontos_turisticos2;
    unsigned long int populacao, populacao2;
    double area, area2, PIB, PIB2, densidade_populacional, densidade_populacional2, PIBperC, PIBperC2, Super, Super2;

    // Cadastro das Cartas:
    // Carta 1
    printf("Digite o nome do estado\n");
    scanf(" %s", estado);

    printf("Digite o código da carta\n");
    scanf(" %s", codigo);

    printf("Digite o nome da cidade\n");
    scanf(" %s", cidade);

    printf("Digite o tamanho da população (habitantes)\n");
    scanf(" %lu", &populacao);

    printf("Digite a área da cidade (em Km²)\n");
    scanf(" %lf", &area);

    printf("Digite o PIB da cidade (em bilhões de habitantes)\n");
    scanf(" %lf", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf(" %i", &pontos_turisticos);

    //Dados que são calculados da carta 1
    PIBperC = PIB/populacao;
    densidade_populacional = populacao/area;

    
    //Calculo do super carta 1
    Super = populacao + area + PIB + pontos_turisticos + PIBperC + (1/densidade_populacional);

    printf("\n\n*** CADASTRO DA SEGUNDA CARTA ***\n\n");

    //Carta 2
    printf("Digite o nome do estado\n");
    scanf(" %s",estado2);

    printf("Digite o código da carta\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade\n");
    scanf(" %s", cidade2);

    printf("Digite o tamanho da população (habitantes)\n");
    scanf(" %lu", &populacao2);

    printf("Digite a área da cidade (em Km²)\n");
    scanf(" %lf", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais)\n");
    scanf(" %lf", &PIB2);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf(" %i", &pontos_turisticos2);

    //Dados que são calculados da carta 2
    PIBperC2 = PIB2/populacao2;
    densidade_populacional2 = populacao2/area2;
    
    //Calculo do super carta 2
    Super2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBperC2 + (1/densidade_populacional2);

    
    // Exibição dos Dados das Cartas:
    printf("\n\n\nRESULTADO DAS CARTAS\n\n\n");

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado, codigo, cidade);
    printf("População: %lu Habitantes\nÁrea: %.2lf Km²\nPIB: %.2lf Bilhões de Reais\n",populacao, area, PIB);
    printf("Quantidade de Pontos Turisticos: %i \n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/Km²\nPIB per Capita: R$ %.2lf por habitante\n", densidade_populacional, PIBperC);
    printf("Super carta 1: %.2lf\n\n\n", Super);


    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %lu Habitantes\nÁrea: %.2lf Km²\nPIB: %.2lf Bilhões de Reais\n",populacao2, area2, PIB2);
    printf("Quantidade de Pontos Turisticos: %i \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf hab/Km²\nPIB per Capita: R$ %.2lf por habitante\n", densidade_populacional2, PIBperC2);
    printf("Super carta 2: %.2lf\n\n", Super2);

    // Comparação das cartas

    // Atributo escolhido: População
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: População)\n\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

    if (populacao > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }
    printf("\n-----------------------------------------------------------------\n");
    

    //Atributo escolhido: Área
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: Área)\n\n");
    printf("Carta 1 - %s (%s): %.2lf km²\n", cidade, estado, area);
    printf("Carta 2 - %s (%s): %.2lf km²\n", cidade2, estado2, area2);

    if (area > area2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }
    printf("\n-----------------------------------------------------------------\n");
       

    //Atributo escolhido: PIB
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: PIB)\n\n");
    printf("Carta 1 - %s (%s): R$ %.2lf \n", cidade, estado, PIB);
    printf("Carta 2 - %s (%s): R$ %.2lf \n", cidade2, estado2, PIB2);

    if (PIB > PIB2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }
    printf("\n-----------------------------------------------------------------\n");
       

    //Atributo escolhido: Densidade demografica
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: Densidade demografica)\n\n");
    printf("Carta 1 - %s (%s): %.2lf hab/km²\n", cidade, estado, densidade_populacional);
    printf("Carta 2 - %s (%s): %.2lf hab/km²\n", cidade2, estado2, densidade_populacional2);

    if (densidade_populacional < densidade_populacional2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }
    printf("\n-----------------------------------------------------------------\n");

    //Atributo escolhido: PIB per Capita
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");
    printf("Carta 1 - %s (%s): R$ %.2lf/hab \n", cidade, estado, PIBperC);
    printf("Carta 2 - %s (%s): R$ %.2lf/hab \n", cidade2, estado2, PIBperC2);
 
    if (PIBperC > PIBperC2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }   
    printf("\n-----------------------------------------------------------------\n");


    //Atributo escolhido: Pontos Turisticos
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: Pontos Turisticos)\n\n");
    printf("Carta 1 - %s (%s): %i\n", cidade, estado, pontos_turisticos);
    printf("Carta 2 - %s (%s): %i\n", cidade2, estado2, pontos_turisticos2);

    if (pontos_turisticos > pontos_turisticos2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }    
    printf("\n-----------------------------------------------------------------\n");


    //Atributo escolhido: Super Poder
    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");
    printf("Comparação de cartas (Atributo: Super Poder)\n\n");
    printf("Carta 1 - %s (%s): %.2lf\n", cidade, estado, Super);
    printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, Super2);

    if (Super > Super2){
        printf("Resultado: Carta 1 (%s) venceu!", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    } 
    printf("\n-----------------------------------------------------------------\n");
    
    printf("\n\n\n");
}
