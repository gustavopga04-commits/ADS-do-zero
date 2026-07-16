/*
 * Super Trunfo de Paises - TechNova
 * Desafio 2 (Logica do Jogo) | Nivel: NOVATO
 *
 * Novidade deste desafio:
 *   - Comparar as duas cartas por UM atributo (escolhido no codigo)
 *     usando ESTRUTURAS DE DECISAO: if / else if / else.
 *   - Dizer com clareza qual carta venceu (ou se houve empate).
 *
 * Regra da comparacao:
 *   - Vence a carta com o MAIOR valor no atributo...
 *   - ...EXCETO a Densidade Populacional, onde vence a de MENOR valor.
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
    unsigned long int populacao1;
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
    scanf("%lu", &populacao1);

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
     * CALCULOS (vem dos niveis anteriores)
     * ================================================================ */
    float densidade1    = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    float densidade2    = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    /* ================================================================
     * EXIBICAO das duas cartas
     * ================================================================ */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

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

    /* ================================================================
     * >>> NOVO NO DESAFIO 2 <<< - Comparacao com if / else if / else
     *
     * Atributo escolhido para a batalha: POPULACAO (maior vence).
     * Para comparar OUTRO atributo, e so trocar as variaveis abaixo.
     *   Atencao: se escolher DENSIDADE, a regra inverte -> troque o
     *   primeiro ">" por "<", porque ali quem tem MENOR valor vence.
     *
     * Como funciona:
     *   - if  ...... testa a 1a condicao (Carta 1 maior)
     *   - else if .. so e testado se o if acima foi falso (Carta 2 maior)
     *   - else ..... se nenhuma das anteriores foi verdadeira (empate)
     * ================================================================ */
    printf("\n=== Comparacao de cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (Estado %c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (Estado %c): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
