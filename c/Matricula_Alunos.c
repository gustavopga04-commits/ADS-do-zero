#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];
    

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf(" %49[^\n]", nome);   // le o nome inteiro (aceita espaco): "Gustavo Pereira"

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade %d - Altura %f\n", idade, altura);

    return 0;

}