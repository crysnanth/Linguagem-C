#include <stdio.h>

void main() {
    float nota_final;

    printf("Digite a nota final do aluno: ");
    scanf(" %f", &nota_final);

    int resultado = nota_final >= 60 ? 1 : 0;

    printf("Aprovado?\n");
    printf("1 - Sim\n");
    printf("0 - Nao\n");
    printf("\n");
    printf("Resultado: %i", resultado);
}