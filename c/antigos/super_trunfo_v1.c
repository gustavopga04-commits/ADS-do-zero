#include <stdio.h>

int main() {
    // ===== Variaveis da Carta 1 =====
    char estado1;        // uma letra (A a H)
    char codigo1[10];    // texto, ex: A01
    char cidade1[50];    // texto (sem espaco por enquanto)
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // ===== Leitura da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);      // espaco antes do %c!

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);        // texto NAO leva &

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
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    // ===== SUA VEZ: Carta 2 =====
    // Copie o padrao da Carta 1, trocando "1" por "2"
    // nos nomes das variaveis (estado2, codigo2, cidade2...).

    return 0;
}
