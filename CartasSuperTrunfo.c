#include <stdio.h>

int main(){
    // Variaveis com nomes objetivos

    char estado = 'A', estado2 = 'A';
    char codigo[4], codigo2[4];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float per_capita, per_capita2;
    float superPoder, superPoder2;

    // Informações que serão pedidas ao usuário

    printf("===== ESCREVA A CARTA 1 =====\n\n");

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado); 

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Calcúlos relacionados a carta 1

    densidade_populacional = populacao / area;
    per_capita = (pib * 1000000000.0f) / (float)populacao;

    superPoder = (float)populacao + area + pib + pontos_turisticos + per_capita + (1.0f / densidade_populacional);

    // Informações relacionadas a carta 2

    printf("\n===== ESCREVA A CARTA 2 =====\n\n");

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Calcúlos relacionados a carta 2

    densidade_populacional2 = populacao2 / area2;
    per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + per_capita2 + (1.0f / densidade_populacional2);

    // Informações que o usuário preencheu

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", per_capita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações

    int venceu_populacao = populacao > populacao2;
    int venceu_area = area > area2;
    int venceu_pib = pib > pib2;
    int venceu_pontos = pontos_turisticos > pontos_turisticos2;
    int venceu_densidade = densidade_populacional < densidade_populacional2; // quanto menor, melhor
    int venceu_percapita = per_capita > per_capita2;
    int venceu_superpoder = superPoder > superPoder2;

    // Comparação que será vista pelo usário

    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("População: Carta 1 venceu (%d)\n", venceu_populacao);
    printf("Área: Carta 1 venceu (%d)\n", venceu_area);
    printf("PIB: Carta 1 venceu (%d)\n", venceu_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceu_pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceu_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceu_percapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceu_superpoder);

    return 0;
}