#include <stdio.h>

int main(){

    //As variáveis abaixo foram divididas da seguinte maneira: antes da vírgula, temos as variáveis da CARTA 1.
    //Depois da vírgula, temos as variáveis terminando com o número '2', essas representam a CARTA 2

    char estado = 'A', estado2 = 'A';
    char codigo[4], codigo2[4];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;

    printf("ESCREVA A CARTA 1: \n"); //Um título para que o usuário saiba qual carta será escrita.
    printf("\n");

    //Abaixo temos as informações que será pedida ao usuário e em seguida lida com o 'scanf'.

    printf("Digite uma letra de A a H: \n"); 
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);
    printf("\n"); //Essa \n para separar as informações acima da carta 2.


    printf("ESCREVA A CARTA 2: \n"); //Título para que o usuário saiba que agora ele ira escrever a Carta 2.
    printf("\n");

    //Abaixo temos as informações da carta 2 que serão pedidas e lidas. 

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n"); //Para que haja separação e fique claro.

    //Abaixo todas as informações da carta 1 que foram preenchidas pelo usuário.

    printf("CARTA 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos);

    printf("\n");

    //Abaixo todas as informações da carta 2 que foram preenchidas pelo usuário.

    printf("CARTA 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d", pontos_turisticos2);

}