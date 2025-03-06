#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países

int main() {
    //Definição das variáveis para cada atributo das cidades.

    char estado[50]="MA";
    char codigo[4]= "A01";
    char cidade[50]= "Sao Luis";

    char estado2[50] = "RJ";
    char codigo2[4] = "R32";
    char cidade2[50] = "Tingira";

    int pontos_turisticos, pontos_turisticos2;
    unsigned long int populacao, populacao2;
    double area, area2, PIB, PIB2, densidade_populacional, densidade_populacional2, PIBperC, PIBperC2, Super, Super2;

    // CARTA 1
    pontos_turisticos =12;
    populacao = 12000000;
    area = 2500000;
    PIB = 8000000000;

    //Dados que são calculados da carta 1
    PIBperC = PIB/populacao;
    densidade_populacional = populacao/area;

    //Calculo do super carta 1
    Super = populacao + area + PIB + pontos_turisticos + PIBperC + (1/densidade_populacional);


    //CARTA 2
    pontos_turisticos2 =10;
    populacao2 = 800000;
    area2 = 6000000;
    PIB2 = 500000000;

    //Dados que são calculados da carta 2
    PIBperC2 = PIB2/populacao2;
    densidade_populacional2 = populacao2/area2;
    
    //Calculo do super carta 2
    Super2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBperC2 + (1/densidade_populacional2);

    

    // Exibição dos Dados das Cartas:
    printf("\nRESULTADO DAS CARTAS\n\n");

    printf("Carta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado, codigo, cidade);
    printf("População: %lu Habitantes\nÁrea: %.2lf Km²\nPIB: %.2lf Bilhões de Reais\n",populacao, area, PIB);
    printf("Quantidade de Pontos Turisticos: %i \n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/Km²\nPIB per Capita: R$ %.2lf por habitante\n", densidade_populacional, PIBperC);
    printf("Super carta 1: %.2lf\n\n", Super);


    printf("Carta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %lu Habitantes\nÁrea: %.2lf Km²\nPIB: %.2lf Bilhões de Reais\n",populacao2, area2, PIB2);
    printf("Quantidade de Pontos Turisticos: %i \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf hab/Km²\nPIB per Capita: R$ %.2lf por habitante\n", densidade_populacional2, PIBperC2);
    printf("Super carta 2: %.2lf\n\n\n", Super2);

    //Menu interativo
    int opcao;
    printf("Escolha um atributo para batalha:\n");
    printf("1. Nome da cidade\n");
    printf("2. População\n");
    printf("3. Area\n");
    printf("4. PIB\n");
    printf("5. Pontos Turisticos\n");
    printf("6. PIB per Capita\n");
    printf("7. Densidade Demografica\n");
    printf("8. Super Poder\n");
    printf("Escolha: \n");
    scanf(" %i", &opcao);

    printf("\n\n\n");
    printf("-----------------------------------------------------------------\n");

    switch (opcao){
        case 1:
            /* code */
        break;

        case 2:
            // Atributo escolhido: População
            printf("Comparação de cartas (Atributo: População)\n\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidade, estado, populacao);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);

            if (populacao > populacao2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if(populacao < populacao2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            }
        break;

        case 3:
            //Atributo escolhido: Área
            printf("Comparação de cartas (Atributo: Área)\n\n");
            printf("Carta 1 - %s (%s): %.2lf km²\n", cidade, estado, area);
            printf("Carta 2 - %s (%s): %.2lf km²\n", cidade2, estado2, area2);

            if (area > area2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if(area < area2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            }
        break;

        case 4:
            //Atributo escolhido: PIB
            printf("Comparação de cartas (Atributo: PIB)\n\n");
            printf("Carta 1 - %s (%s): R$ %.2lf \n", cidade, estado, PIB);
            printf("Carta 2 - %s (%s): R$ %.2lf \n", cidade2, estado2, PIB2);

            if (PIB > PIB2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if(PIB < PIB2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            }
        break;

        case 5:
            //Atributo escolhido: Pontos Turisticos
            printf("Comparação de cartas (Atributo: Pontos Turisticos)\n\n");
            printf("Carta 1 - %s (%s): %i\n", cidade, estado, pontos_turisticos);
            printf("Carta 2 - %s (%s): %i\n", cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos > pontos_turisticos2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if(pontos_turisticos < pontos_turisticos2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            }    
        break;

        case 6:
            //Atributo escolhido: PIB per Capita
            printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");
            printf("Carta 1 - %s (%s): R$ %.2lf/hab \n", cidade, estado, PIBperC);
            printf("Carta 2 - %s (%s): R$ %.2lf/hab \n", cidade2, estado2, PIBperC2);
        
            if (PIBperC > PIBperC2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if (PIBperC < PIBperC2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            }  
        break;

        case 7:
            //Atributo escolhido: Densidade demografica
            printf("Comparação de cartas (Atributo: Densidade demografica)\n\n");
            printf("Carta 1 - %s (%s): %.2lf hab/km²\n", cidade, estado, densidade_populacional);
            printf("Carta 2 - %s (%s): %.2lf hab/km²\n", cidade2, estado2, densidade_populacional2);

            if (densidade_populacional < densidade_populacional2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if (densidade_populacional > densidade_populacional2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            }
        break;

        case 8:
            //Atributo escolhido: Super Poder
            printf("Comparação de cartas (Atributo: Super Poder)\n\n");
            printf("Carta 1 - %s (%s): %.2lf\n", cidade, estado, Super);
            printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, Super2);

            if (Super > Super2){
                printf("Resultado: Carta 1 (%s) venceu!", cidade);
            }else if (Super < Super2){
                printf("Resultado: Carta 2 (%s) venceu!", cidade2);
            }else{
                printf("Empate");
            } 
        break;
        
        default:
            printf("Opção Inválida");
    }
    printf("\n-----------------------------------------------------------------\n");
    printf("\n\n\n");
 
    

}
