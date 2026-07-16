#include <stdio.h>

int main() {
    /*
    soma(+)
    subtracao(-)
    multiplicacao(*)
    divisao(/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;   // float: a divisao precisa guardar casas decimais
    
    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);
    
    //operação soma
    
    soma = numero1 + numero2;
    
    //operção subtração
    
    subtracao = numero1 - numero2;
    
    //operação multplicação 

    multiplicacao = numero1 * numero2;
    
    //operação divisão

    divisao = (float) numero1 / numero2;   // (float) converte ANTES de dividir

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %.2f\n", divisao);   // %.2f = float com 2 casas

    return 0;
}