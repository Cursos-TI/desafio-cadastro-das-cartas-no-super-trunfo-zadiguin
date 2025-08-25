#include <stdio.h>

int main()
{
    char estado, carta[4], cidade[50];
    unsigned long int populacao;
    float area, pib;
    int pontos;

    char estado1, carta1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;


    printf("Digite o Estado: \n");
    scanf(" %c", &estado);

    printf("Código da Carta: \n");
    scanf("%s", &carta);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%lu", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    printf("\nDigite o Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da Carta: \n");
    scanf("%s", &carta1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    float densidade    =  (float) populacao / area;
    float pibPerCapita =  (float) (pib * 1000000000) / populacao;

    float densidade1    = (float) populacao1 / area1;
    float pibPerCapita1 = (float) (pib1 * 1000000000) / (float) populacao1;

    float superpoder = populacao + densidade + pibPerCapita + pontos;
    float superpoder1 = populacao1 + densidade1 + pibPerCapita1 + pontos1;

    printf("\ncarta 1:\n");
    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade);
    printf("PIB per capita: %.2f mil reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n", superpoder);

    printf("\ncarta 2:\n");
    printf("\nEstado: %c\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f mil reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superpoder1);


    // comparação dos atributos vencedores

    printf("\ncomparação de cartas:\n");
    printf("População: Carta %d venceu\n", 2 - (populacao > populacao1));
    printf("Área: carta %d venceu \n", 2 - (area > area1));
    printf("PIB: carta %d venceu \n", 2 - (pib > pib1));
    printf("Pontos Turísticos: carta %d venceu \n", 2 - (pontos > pontos1));
    printf("Densidade Populacional: carta %d venceu \n", 2 - (densidade < densidade1));
    printf("PIB per Capita: carta %d venceu \n", 2 - (pibPerCapita > pibPerCapita1));
    printf("Super Poder: carta %d venceu \n", 2 - (superpoder > superpoder1));


    return 0;
}
