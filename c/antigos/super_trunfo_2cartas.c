#include <stdio.h>

int main() {
    // ===== Variaveis da Carta 1 =====
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // ===== Leitura da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade (sem espaco): ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area em km2: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== Exibicao da Carta 1 =====
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    // ===== Variaveis da Carta 2 =====
    char estado2;
    char codigo2[11];
    char cidade2[31];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ===== Leitura da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: A02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade (sem espaco): ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area em km2: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== Exibicao da Carta 2 =====
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
