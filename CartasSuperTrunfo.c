#include <stdio.h>


int main() {
    
    //Variaveis
    char estado1[4], estado2[4];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    int menu;

    //Coleta de Dados da Carta1
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Antes de começar qual vai ser a sua carta?!\n");

    printf("Digite o codigo do estado ( Uma letra entre A e H): \n");
    scanf("%s", &estado1);
   
    printf("Digite o codigo da Carta (A letra do estado seguido de um numero: 01,02,03 ou 04): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);  

    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (Bilhoes de Reais): \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da cidade: \n");
    scanf("%d", &pontos1);

    //Coleta de Dados da Carta2
    printf("\n");
    printf("Qual vai ser a sua proxima carta?!\n");

    printf("Digite o codigo do estado ( Uma letra entre A e H): \n");
    scanf("%s", &estado2);
   
    printf("Digite o codigo da Carta (A letra do estado seguido de um numero: 01,02,03 ou 04): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);  

    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);

    //Adicionando Calculos Carta 1
    float densidade1 = populacao1 / area1;
    double pibcapita1 = pib1 / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pibcapita1 + ( 1 / densidade1 ) + pontos1;

    //Adicionando Calculos Carta 2
    float densidade2 = populacao2 / area2;
    double pibcapita2 = pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pibcapita2 + ( 1 / densidade2 ) + pontos2;

    //Exibição dos Dados Carta 1

    printf("\n");
    printf("Suas carta estão prontas!\n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/Km²\n", densidade1);
    printf("PIB per capita: %.2f Bilhões Reais\n", pibcapita1);
    printf("Super Poderes: %.2f\n", superpoder1);
    printf("Carta Cadastrada com sucesso!\n");
    printf ("\n");
    printf("Proxima carta?: \n");
    printf("\n");

    //Exibição dos Dados Carta 2
    
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/Km²\n", densidade2);
    printf("PIB per capita: %.2f Bilhões Reais\n", pibcapita2);
    printf("Super Poderes: %.2f\n", superpoder2);
    printf("Proxima carta?: \n");

    //Comparação das Cartas
    
    printf("\n");
    printf("Comparando as cartas...\n");
    printf("\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("Pontos Turísticos: %s\n", (pontos1 > pontos2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("PIB per Capita: %s\n", (pibcapita1 > pibcapita2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("Super Poder: %s\n", (superpoder1 > superpoder2) ? "Carta 1 Venceu!" : "Carta 2 Venceu!");
    printf("\n");
    printf("Jogar novamente?\n");
    printf("\n");

    return 0;
}
