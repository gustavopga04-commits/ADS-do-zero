#include <stdio.h>

int main() {
    /*
    incremento (++)
    pre-incremento ++a
    pos-incremento a++
    decremento (--)
    pre-decremento --a
    pos-decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes de incremento: %d\n", numero1);
    // numero1 = numero1 +1;
    //numero1 += 1;
    //pos incremento:
    //resultado = numero1;
    //numero++;
    resultado = numero1++;
    //printf("Apos pos-incremento: %d\n", numero1);
    printf("Apos pos-incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    resultado = ++numero1;
    //printf("Apos pos-incremento: %d\n", numero1);
    printf("Apos pre-incremento - numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    // numero1 = numero1 -1;
    //numero1 -= 1;
//   numero1--;
//   printf("Apos pos-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);
    resultado = numero1--;
    printf("Apos pos-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos pre-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);
    return 0;
}