/*
 * Super Trunfo de Paises - TechNova
 * Desafio 1 (Cadastro & Calculos) | Nivel: AVENTUREIRO
 *
 * Novidade deste nivel (em cima do Novato):
 *   - Calcular a DENSIDADE POPULACIONAL = populacao / area
 *   - Calcular o PIB PER CAPITA         = PIB / populacao
 *   - Exibir os dois com 2 casas decimais
 *
 * Regras mantidas: sem if/else e sem for/while.
 *
 * Autor: Gustavo
 * Compilar: gcc super_trunfo.c -o super_trunfo
 * Executar: ./super_trunfo   (Windows: super_trunfo.exe)
 */

#include <stdio.h>   /* printf (saida) e scanf (entrada) */

int main() {
    /* ================================================================
     * CARTA 1 - Declaracao das variaveis
     * ================================================================ */
    char  estado1;
    char  codigo1[10];
    char  cidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;

    /* ================================================================
     * CARTA 1 - Leitura dos dados
     * ================================================================ */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ================================================================
     * CARTA 2 - Declaracao das variaveis
     * ================================================================ */
    char  estado2;
    char  codigo2[10];
    char  cidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;

    /* ================================================================
     * CARTA 2 - Leitura dos dados
     * ================================================================ */
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%9s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ================================================================
     * >>> NOVO NO AVENTUREIRO <<< - Calculos
     *
     * Densidade populacional = habitantes por km2.
     *   populacao / area  -> como 'area' e float, a divisao ja da float.
     *
     * PIB per capita = riqueza media por pessoa (em reais).
     *   O PIB foi digitado em BILHOES (ex: 699.28), entao multiplicamos
     *   por 1 bilhao para trazer para reais antes de dividir pela populacao.
     *   (Se o seu professor quiser a divisao "crua" PIB/populacao, e so
     *    tirar o "* 1000000000.0".)
     * ================================================================ */
    float densidade1   = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    float densidade2   = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    /* ================================================================
     * EXIBICAO - Carta 1
     * ================================================================ */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);   /* NOVO */
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);          /* NOVO */

    /* ================================================================
     * EXIBICAO - Carta 2
     * ================================================================ */
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);   /* NOVO */
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);          /* NOVO */

    return 0;
}
