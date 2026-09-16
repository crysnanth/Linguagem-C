#include <stdio.h>

void main() {
    float valor;
    
    printf("Digite o valor de um produto: R$");
    scanf(" %f", &valor);

    float valor_final = valor >= 100 ? valor - (valor * 0.10) : valor;

    printf("Valor final: R$ %.2f", valor_final);
}