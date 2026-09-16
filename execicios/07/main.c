#include <stdio.h>
// utiliza um ternario para descobrir se o numero eh par
void main() {
    int num;

    printf("Digite um numero: ");
    scanf(" %i", &num);

    int resultado = num % 2 == 0 ? 1 : 0;

    printf("O numero eh par?\n");
    printf("1 - Sim\n");
    printf("0 - Nao\n");
    printf("\n");
    printf("Resultado: %i", resultado);
}