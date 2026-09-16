#include <stdio.h>

void main() {
    int opcao;

    printf("Digite 1 ou 2: ");
    scanf(" %i", &opcao);
    // opcao deve ser do tipo: int, char ou enum
    switch (opcao) {
        case 1:
            printf("Voce digitou 1");
            break;
        case 2:
            printf("Voce digitou 2");
            break;
        default:
            printf("Digite 1 ou 2 apenas");
            break;
    }
}