#include <stdio.h>

int main() {
    /*
    Atribuicao simples (=)
    Atribuicao com Soma(+=)
    Atribuicao com subtracao(-=)
    Atribuicao com multiplicacao(*=)
    Atribuicao com divisao(/=)
    */
    int numero1 = 10, numero2 = 5, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);
    
    //resultado = resultado + 20;
    resultado += 20;
    printf("Resultado: %d\n", resultado);
    
    //resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado * numero2;
    resultado *= numero2;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado / 2;
    resultado /= 2;
    printf("Resultado: %d\n", resultado);
    
    return 0;
}