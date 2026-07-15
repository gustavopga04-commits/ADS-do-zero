/*
 * Super Trunfo de Paises - TechNova
 * Desafio 1 (Cadastro & Calculos) | Nivel: MESTRE
 *
 * Novidades deste nivel (em cima do Aventureiro):
 *   - Populacao agora e "unsigned long int" (aguenta numeros bem grandes)
 *   - Calcular o SUPER PODER de cada carta
 *   - COMPARAR as duas cartas atributo por atributo, imprimindo 1 ou 0
 *     (1 = Carta 1 vence | 0 = Carta 2 vence)
 *
 * Tema do nivel: operadores relacionais (>, <) e modificadores de tipo.
 * Truque: "a > b" ja resulta em 1 (verdadeiro) ou 0 (falso) -> nao precisa de if!
 *
 * Autor: Gustavo
 * Compilar: gcc super_trunfo.c -o super_trunfo
 * Executar: ./super_trunfo   (Windows: super_trunfo.exe)
 */

#include <stdio.h>   /* printf (saida) e scanf (entrada) */

int main() {
    /* ================================================================
     * CARTA 1 - Declaracao das variaveis
     * Populacao mudou para "unsigned long int": so numeros positivos,
     * mas com uma faixa muito maior que o int comum.
     * ================================================================ */
    char  estado1;
    char  codigo1[10];
    char  cidade1[50];
    unsigned long int populacao1;   /* <<< MUDOU: era int */
    float area1;
    float pib1;
    int   pontosTuristicos1;

    /* ================================================================
     * CARTA 1 - Leitura dos dados
     *   "%lu" e o formato para ler/escrever unsigned long int
     * ================================================================ */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);       /* <<< MUDOU: era %d */

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
    unsigned long int populacao2;
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
    scanf("%lu", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ================================================================
     * CALCULOS
     *   Densidade e PIB per capita: iguais ao nivel Aventureiro.
     *
     *   SUPER PODER = soma de todos os atributos numericos +
     *                 o INVERSO da densidade (1 / densidade), porque
     *                 quanto MENOR a densidade, MAIOR deve ser o poder.
     *
     *   Atencao a conversao de tipos: como area, pib e pibPerCapita sao
     *   float, a soma inteira vira float automaticamente. O "1.0f" garante
     *   que 1/densidade seja divisao com casas decimais (e nao inteira).
     * ================================================================ */
    float densidade1    = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float superPoder1   = populacao1 + area1 + pib1 + pontosTuristicos1
                          + pibPerCapita1 + (1.0f / densidade1);

    float densidade2    = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    float superPoder2   = populacao2 + area2 + pib2 + pontosTuristicos2
                          + pibPerCapita2 + (1.0f / densidade2);

    /* ================================================================
     * EXIBICAO - Carta 1
     * ================================================================ */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);           /* <<< %lu */
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);        /* NOVO */

    /* ================================================================
     * EXIBICAO - Carta 2
     * ================================================================ */
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    /* ================================================================
     * >>> NOVO NO MESTRE <<< - Comparacao das cartas
     *
     * Cada "atributo1 > atributo2" resulta em 1 (Carta 1 vence) ou
     * 0 (Carta 2 vence). Para a densidade a regra INVERTE: menor vence,
     * entao usamos "<" no lugar de ">".
     * ================================================================ */
    printf("\n=== Comparacao de Cartas (1 = Carta 1 vence | 0 = Carta 2 vence) ===\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
