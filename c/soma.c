#include <stdio.h>

int main() {
    int num1, num2, soma;

    // Lendo dois numeros do usuário
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Calculando a soma dos dois numeros
    soma = num1 + num2;

    // Exibindo o resultado
    printf("A soma de %d e %d é:%d\n", num1, num2, soma);

    return 0;
}