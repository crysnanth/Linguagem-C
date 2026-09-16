#include <stdio.h>
// utiliza o ternario para descobrir qual o menor numero
void main() {
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf(" %i", &n1);
    printf("Digite o segundo numero: ");
    scanf(" %i", &n2);

    int menor = n1 < n2 ? n1 : n2;
    
    printf("Menor numero: %i", menor);
}