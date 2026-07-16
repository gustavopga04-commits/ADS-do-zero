/*
 * Modularidade: calculo da media usando vetor (array) de notas
 *
 * O programa e dividido em funcoes, cada uma com UMA tarefa:
 *   entradaDados  -> preenche o vetor de notas
 *   calcularMedia -> soma o vetor e devolve a media
 *   exibirMedia   -> mostra o resultado na tela
 *
 * Detalhe importante: "float *notas" quer dizer que a funcao recebe o
 * ENDERECO do vetor (onde ele mora no main), e nao uma copia. Por isso
 * entradaDados consegue preencher o vetor original -- e nao precisa
 * devolver nada (por isso e "void").
 *
 * Autor: Gustavo
 * Compilar: gcc modularidade_media.c -o modularidade_media
 */

#include <stdio.h>

#define QUANTIDADE 3   /* quantas notas o programa vai ler */

/* ------------------------------------------------------------------
 * Funcao generica para entrada de dados do usuario.
 *   notas      -> endereco do vetor que sera preenchido
 *   quantidade -> quantas notas ler
 *
 * O "for" repete o bloco: comeca em i=0, vai enquanto i < quantidade,
 * e soma 1 no i a cada volta (i++).
 * ------------------------------------------------------------------ */
void entradaDados(float *notas, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);   /* & aqui porque notas[i] e UMA nota so */
    }
}

/* ------------------------------------------------------------------
 * Funcao generica para calculo da media.
 *   Recebe o vetor e a quantidade, devolve a media.
 * ------------------------------------------------------------------ */
float calcularMedia(float *notas, int quantidade) {
    float soma = 0.0;

    for (int i = 0; i < quantidade; i++) {
        soma = soma + notas[i];   /* vai acumulando */
    }

    return soma / quantidade;     /* soma e float -> divisao com decimais */
}

/* ------------------------------------------------------------------
 * Funcao para exibir a media.
 *   Recebe a media e mostra. Nao devolve nada -> "void".
 * ------------------------------------------------------------------ */
void exibirMedia(float media) {
    printf("Media: %.2f\n", media);
}

/* ------------------------------------------------------------------
 * main: cria o vetor e organiza a ordem das tarefas.
 * ------------------------------------------------------------------ */
int main() {
    float notas[QUANTIDADE];   /* o vetor mora aqui */

    entradaDados(notas, QUANTIDADE);              /* preenche o vetor    */
    float media = calcularMedia(notas, QUANTIDADE); /* calcula a media   */
    exibirMedia(media);                            /* mostra o resultado */

    return 0;
}
