#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
  //Variaveis ja cadastradas, para apenas implementacao dos switchs
  char estado1[4] = "A", estado2[4] = "B";
  char codigo1[4] = "01", codigo2[4] = "02";
  char cidade1[20] = "Sao Paulo ", cidade2[20] = "Minas Gerais";
  unsigned long int populacao1 = 11450000, populacao2 = 20540000 ;
  float area1 = 1521.11, area2 = 5865.22;
  float pib1 = 699.23 , pib2 = 272.30;
  int pontos1 = 36, pontos2 = 15;

    //Variaveis para os menus
    int menu, menu1, menu2;

    //Adicionando Calculos Carta 1
    float densidade1 = populacao1 / area1;
    double pibcapita1 = pib1 / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + pibcapita1 + ( 1 / densidade1 ) + pontos1;

    //Adicionando Calculos Carta 2
    float densidade2 = populacao2 / area2;
    double pibcapita2 = pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pibcapita2 + ( 1 / densidade2 ) + pontos2;

    //Adicionando Calculos Carta 2
    float densidade2 = populacao2 / area2;
    double pibcapita2 = pib2  * 1000000000 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + pibcapita2 + ( 1 / densidade2 ) + pontos2;

    // Menu do Jogo
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Escolha uma opção!:\n");
    printf("1 - Iniciar o jogo\n");
    printf("2 - Regras\n");
    printf("3 - Sair\n");
    printf("Digite a sua escolha: ");
    scanf("%d", &menu);

    //switch para escolha do menu
    switch (menu)
    {
    case 1:
        printf("Iniciando o jogo...\n");
        printf("Distribuindo as cartas: \n");
        printf("1 - Tirar as cartas do monte?\n");
        printf("2 - sair\n");
        printf("Digite a sua escolha:");
        scanf("%d", &menu1);

            //switch para iniciar o jogo
            switch (menu1)
            {
            case 1:
            printf("\nCarta 1: \n");
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
            printf("\n");
            printf("\nTirando a proxima carta...\n");
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
            printf("\nCarta Pronta! Deseja Comparar qual atributo?\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade\n");
            printf("6 - Todos\n");
            printf("7 - Sair\n");
            printf("Digite a sua escolha: ");
            scanf("%d", &menu2);

            //switch para comparacao das cartas
            switch (menu2)
             {
             case 1:
                printf("\nComparando Atributo..\n");
                printf("Mostrando os Resultados...\n");
                printf("\n");
                printf("Estado 1: %s e Estado 2: %s \n", cidade1, cidade2);
                printf("Atributo Escolhido: População! \n");
                printf("População Estado 1: %d e Estado 2: %d\n", populacao1, populacao2);
                if (populacao1 > populacao2){
                    printf("Carta 1 Venceu!\n");
                }else if (populacao1 < populacao2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                break;
                case 2:
                printf("\nComparando Atributo..\n");
                printf("Mostrando os Resultados...\n");
                printf("\n");
                printf("Estado 1: %s e Estado 2: %s \n", cidade1, cidade2);
                printf("Atributo Escolhido: Área! \n");
                printf("Área Estado 1: %.2f e Estado 2: %.2f\n", area1, area2);
                if (area1 > area2){
                    printf("Carta 1 Venceu!\n");
                }else if (area1 < area2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                break;
                case 3:
                printf("\nComparando Atributo..\n");
                printf("Mostrando os Resultados...\n");
                printf("\n");
                printf("Estado 1: %s e Estado 2: %s \n", cidade1, cidade2);
                printf("Atributo Escolhido: PIB! \n");
                printf("PIB Estado 1: %.2f e Estado 2: %.2f\n", pib1, pib2);
                if (pib1 > pib2){
                    printf("Carta 1 Venceu!\n");
                }else if (pib1 < pib2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                break;
                case 4:
                printf("\nComparando Atributo..\n");
                printf("Mostrando os Resultados...\n");
                printf("\n");
                printf("Estado 1: %s e Estado 2: %s \n", cidade1, cidade2);
                printf("Atributo Escolhido: Pontos Turisticos! \n");
                printf("Pontos Turisticos Estado 1: %d e Estado 2: %d\n", pontos1, pontos2);
                if (pontos1 > pontos2){
                    printf("Carta 1 Venceu!\n");
                }else if (pontos1 < pontos2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                break;
                case 5:
                printf("\nComparando Atributo..\n");
                printf("Mostrando os Resultados...\n");
                printf("\n");
                printf("Estado 1: %s e Estado 2: %s \n", cidade1, cidade2);
                printf("Atributo Escolhido: Densidade! \n");
                printf("Densidade Estado 1: %.2f e Estado 2: %.2f\n", densidade1, densidade2);
                if (densidade1 < densidade2){
                    printf("Carta 1 Venceu!\n");
                }else if (densidade1 > densidade2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                break;
                //Comparando todos os atributos
                case 6:
                printf("\nComparando Atributo..\n");
                printf("Mostrando os Resultados...\n");
                printf("\n");
                printf("Estado 1: %s e Estado 2: %s \n", cidade1, cidade2);
                printf("Atributo Escolhido: TODOS! \n");
                printf("População Estado 1: %d e Estado 2: %d = ", populacao1, populacao2);
                if (populacao1 > populacao2){
                    printf("Carta 1 Venceu!\n");
                }else if (populacao1 < populacao2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                printf("Área Estado 1: %.2f e Estado 2: %.2f = ", area1, area2);
                if (area1 > area2){
                    printf("Carta 1 Venceu!\n");
                }else if (area1 < area2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                printf("PIB Estado 1: %.2f e Estado 2: %.2f = ", pib1, pib2);
                if (pib1 > pib2){
                    printf("Carta 1 Venceu!\n");
                }else if (pib1 < pib2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                printf("Pontos Turisticos Estado 1: %d e Estado 2: %d = ", pontos1, pontos2);
                if (pontos1 > pontos2){
                    printf("Carta 1 Venceu!\n");
                }else if (pontos1 < pontos2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                printf("Densidade Estado 1: %.2f e Estado 2: %.2f = ", densidade1, densidade2);
                if (densidade1 < densidade2){
                    printf("Carta 1 Venceu!\n");
                }else if (densidade1 > densidade2){
                    printf("Carta 2 Venceu!\n");
                }else{
                    printf("Empate!\n");
                }
                break;
                case 7:
                printf("Saindo do jogo...\n");
                break;
                
             
             default:
                    printf("Opção Invalida!\n");
                break;
             }
            break;

        case 2:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção Invalida!\n");
            break;
        }
        break;

        //Regras do Jogo
    case 2:

        printf("\nRegras do Jogo:\n");
        printf("\n- O jogo Super Trunfo é um jogo de cartas que consiste em comparar as cartas dos jogadores e ver quem tem a carta com o maior valor.\n");
        printf("- Cada carta tem um valor de acordo com os atributos.\n");
        printf("- O jogador que tiver a carta com o maior valor de população, área, PIB, pontos turiscos e PIB Per Capita, vence a rodada.\n");
        printf("- Ja para o atributo Densidade, a carta com menor valor, vence!.\n");
        printf("- O jogador que vencer mais rodadas, vence o jogo.\n");
        printf("\nPronto para jogar?\n");
        printf("\n");
        break;

        //Sair do Jogo
    case 3:
        printf("Saindo do jogo...\n");
        break;
        
        //Opção Invalida
    default:
        printf("Opção Invalida!\n");
        break;
    }

    return 0;
}
