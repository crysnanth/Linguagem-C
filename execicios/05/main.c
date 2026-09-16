#include <stdio.h>
// soma de todos os numeros de 1 ate o numero que o usuario digitou
void main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf(" %i", &num);

    int soma = num * (num + 1) / 2;
    
    printf("Soma dos numeros: %i", soma);
}