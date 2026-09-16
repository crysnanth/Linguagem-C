#include <stdio.h>

void main() {
    int idade;
    printf("Digite sua idade: ");
    scanf(" %i", &idade);

    int resultado = idade >= 16 ? 1 : 0;

    printf("Pode votar?\n");
    printf("1 - Sim\n");
    printf("0 - Nao\n");
    printf("\n");
    printf("Resultado: %i", resultado);
}