#include <stdio.h>

int main() {
    // Cidade 1
    char nome1[30] = "poa";
    int populacao1 = 1322845;
    int pontos1 = 8;
    float pib1 = 81.56; 
    float area1 = 495.4;

    // Cidade 2
    char nome2[30] = "rj";
    int populacao2 = 6700000; 
    int pontos2 = 78;
    float pib2 = 250;
    float area2 = 1200;

    // Entrada cidade 1
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome1);
    printf("Digite a populacao de %s: ", nome1);
    scanf("%d", &populacao1);
    printf("Digite o PIB de %s (em bilhoes): ", nome1);
    scanf("%f", &pib1);
    printf("Digite a area de %s (em km²): ", nome1);
    scanf("%f", &area1);
    printf("Digite os pontos turisticos de %s: ", nome1);
    scanf("%d", &pontos1);

    printf("\n-----------------------------\n");

    // Entrada cidade 2
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome2);
    printf("Digite a populacao de %s: ", nome2);
    scanf("%d", &populacao2);
    printf("Digite o PIB de %s (em bilhoes): ", nome2);
    scanf("%f", &pib2);
    printf("Digite a area de %s (em km²): ", nome2);
    scanf("%f", &area2);
    printf("Digite os pontos turisticos de %s: ", nome2);
    scanf("%d", &pontos2);

    printf("\n========= CARTAS =========\n");
    printf("Cidade 1: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nCidade 2: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos turísticos: %d\n", pontos2);

    printf("\n O jogador escolhe qual atributo deseja comparar e decide quem venceu.\n");

    return 0;
}


