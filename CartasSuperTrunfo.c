#include <stdio.h>

int main() {
    // Cidade 1
    char nome1[30] = "POA";
    char estado1[10] = "RS";  
    char codigo1[10] = "A01"; 
    float populacao1; 
    float pib1;
    float area1;
    int pontos1;

    // Cidade 2
    char nome2[30] = "RJ";
    char estado2[10] = "RIOJ";
    char codigo2[10] = "B01";
    float populacao2;
    float pib2; 
    float area2;
    int pontos2;

    // Entrada cidade 1
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome1);
    printf("Digite o estado de %s: ", nome1);
    scanf("%s", estado1);
    printf("Digite o codigo de %s: ", nome1);
    scanf("%s", codigo1);
    printf("Digite a populacao de %s (em milhoes, com decimais): ", nome1);
    scanf("%f", &populacao1);
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
    printf("Digite o estado de %s: ", nome2);
    scanf("%s", estado2);
    printf("Digite o codigo de %s: ", nome2);
    scanf("%s", codigo2);
    printf("Digite a populacao de %s(em milhões): ", nome2);
    scanf("%f", &populacao2);
    printf("Digite o PIB de %s(em bilhões): ", nome2);
    scanf("%f", &pib2);
    printf("Digite a area de %s(em km2): ", nome2);
    scanf("%f", &area2);
    printf("Digite os pontos turisticos de %s: ", nome2);
    scanf("%d", &pontos2);

    printf("\n========= CARTAS =========\n");

        // Cidade 1
    printf("Cidade 1:\n");
    printf("Nome: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("População: %.2f milhões\n", populacao1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Cidade 2
    printf("\nCidade 2: \n");
    printf("Nome: %s \n", nome2);
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("População: %.2f milhões \n", populacao2);
    printf("PIB: %.2f bilhões \n", pib2);
    printf("Área: %.2f km² \n", area2);
    printf("Pontos turísticos: %d \n", pontos2);

    printf("\nO jogador escolhe qual atributo deseja comparar e decide quem venceu.\n");

        
    
        return 0;
    }