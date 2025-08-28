#include <stdio.h>

int main(){

    char estado, carta[4], cidade[50];
    unsigned long int populacao; // população dividido pela área de cidade
    float area, pib;
    int pontos;

    char estado1, carta1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    int opcao, opcao1;

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

    printf("\nNome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    float densidade1 = (area > 0) ? (float)populacao / area : 0;
    float densidade2 = (area1 > 0) ? (float)populacao1 / area1 : 0;

    printf("\n--- Menu de interação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma das opções: \n");
    scanf("%d", &opcao);

    if(opcao < 1 || opcao > 5) {
        printf("Opção inválida. Por favor, escolha uma opção entre 1 e 5.\n");
        return 0;
    }

    printf("\n--- escolha o segundo atributo (deve ser diferente do primeiro) ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma das opções: \n");
    scanf("%d", &opcao1);

    if (opcao == opcao1) {
        printf("Os atributos devem ser diferentes. Tente novamente.\n");
        return 0;
    }

    if(opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida. Por favor, escolha uma opção entre 1 e 5.\n");
        return 0;
    }

    printf("\n=== RESULTADO DA RODADA=== \n");   
    
    printf("\npaíses em disputa: %s e %s\n\n", cidade, cidade1);
    printf("--- resultado dos atributos ---\n");

    switch(opcao){
        case 1:
        if (populacao > populacao1){
            printf("\nA carta 1 venceu com a população de %lu habitantes\n", populacao);
        } else if (populacao == populacao1) {
            printf("\nEmpate com a população de %lu habitantes\n", populacao);
        } else {
            printf("\nA carta 2 venceu com a população de %lu habitantes\n", populacao1);
        }
        break;
        case 2:
        if (area > area1){
            printf("\nA carta 1 venceu com a área de %.2f km²\n", area);
        } else if (area == area1) {
            printf("\nEmpate com a área de %.2f km²\n", area);
        } else {
            printf("\nA carta 2 venceu com a área de %.2f km²\n", area1);
        }
        break;
        case 3:
        if (pib > pib1){
            printf("\nA carta 1 venceu com o PIB de %.2f\n", pib);
        } else if (pib == pib1) {
            printf("\nEmpate com o PIB de %.2f\n", pib);
        } else {
            printf("\nA carta 2 venceu com o PIB de %.2f\n", pib1);
        }
        break;
        case 4:
        if (pontos > pontos1){
            printf("\nA carta 1 venceu com %d pontos turísticos\n", pontos);
        } else if (pontos == pontos1) {
            printf("\nEmpate com %d pontos turísticos\n", pontos);
        } else {
            printf("\nA carta 2 venceu com %d pontos turísticos\n", pontos1);
        }
        break;
        case 5:
        if (densidade1 > densidade2){
            printf("\nA carta 1 venceu com uma densidade de %.2f habitantes/km²\n", densidade1);
        } else if (densidade1 == densidade2) {
            printf("\nEmpate com uma densidade de %.2f habitantes/km²\n", densidade1);
        } else {
            printf("\nA carta 2 venceu com uma densidade de %.2f habitantes/km²\n", densidade2);
        }
        break;
    }

        switch(opcao1){
        case 1:
        if (populacao > populacao1){
            printf("\nA carta 1 venceu com a população de %lu habitantes\n", populacao);
        } else if (populacao == populacao1) {
            printf("\nEmpate com a população de %lu habitantes\n", populacao);
        } else {
            printf("\nA carta 2 venceu com a população de %lu habitantes\n", populacao1);
        }
        break;
        case 2:
        if (area > area1){
            printf("\nA carta 1 venceu com a área de %.2f km²\n", area);
        } else if (area == area1) {
            printf("\nEmpate com a área de %.2f km²\n", area);
        } else {
            printf("\nA carta 2 venceu com a área de %.2f km²\n", area1);
        }
        break;
        case 3:
        if (pib > pib1){
            printf("\nA carta 1 venceu com o PIB de %.2f\n", pib);
        } else if (pib == pib1) {
            printf("\nEmpate com o PIB de %.2f\n", pib);
        } else {
            printf("\nA carta 2 venceu com o PIB de %.2f\n", pib1);
        }
        break;
        case 4:
        if (pontos > pontos1){
            printf("\nA carta 1 venceu com %d pontos turísticos\n", pontos);
        } else if (pontos == pontos1) {
            printf("\nEmpate com %d pontos turísticos\n", pontos);
        } else {
            printf("\nA carta 2 venceu com %d pontos turísticos\n", pontos1);
        }
        break;
        case 5:
        if (densidade1 > densidade2){
            printf("\nA carta 1 venceu com uma densidade de %.2f habitantes/km²\n", densidade1);
        } else if (densidade1 == densidade2) {
            printf("\nEmpate com uma densidade de %.2f habitantes/km²\n", densidade1);
        } else {
            printf("\nA carta 2 venceu com uma densidade de %.2f habitantes/km²\n", densidade2);
        }
        break;
        }
}
