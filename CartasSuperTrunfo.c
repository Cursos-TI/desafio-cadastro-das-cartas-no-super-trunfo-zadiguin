#include <stdio.h>

int main() {
    char estado, carta[4], cidade[50];
    int populacao;
    float area, pib;
    int pontos;

    char estado1, carta1[4], cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    printf("Digite o Estado: \n");
    scanf(" %c", &estado);

    printf("Código da Carta: \n");
    scanf("%s", &carta);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

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
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    
    printf("\ncarta 1:\n");
    printf("\nEstado: %c\n", estado);
    printf("Código da Carta: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);


    printf("\ncarta 2:\n");
    printf("\nEstado: %c\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);

    return 0;
}