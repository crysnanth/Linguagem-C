#include <stdio.h>

void main() {
    int num;

    printf("Digite um numero: ");
    scanf(" %i", &num);

    int resultado = num < 0 ? -1 : num > 0 ? 1 : 0;
    printf("Positivo, negativo ou zero?\n");
    printf("1   - Positivo\n");
    printf("-1  - Negativo\n");
    printf("0   - Zero\n");
    printf("\n");
    printf("Resultado: %i", resultado);
}