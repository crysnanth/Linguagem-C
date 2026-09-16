#include <stdio.h>

void main() {
    int x;
    printf("Digite um numero inteiro: ");
    scanf(" %i", &x);

    // estrutura condicional
    if (x != 0 && x % 2 == 0) {
        printf("Par");
    } else if (x <= 0) {
        printf("Digite um numero maior que zero");
    } else {
        printf("Impar");
    }
}