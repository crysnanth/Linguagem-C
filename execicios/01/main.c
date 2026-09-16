#include <stdio.h>
// calculo de media entre 3 numeros
void main() {
    float n1, n2, n3;

    printf("===================================\n");
    printf("   Calculo de media entre 3 numeros\n");
    printf("===================================\n");
    printf("\n");
    
    printf("Digite o primeiro numero: ");
    scanf(" %f", &n1);
    printf("\n");
    
    printf("Digite o segundo numero: ");
    scanf(" %f", &n2);
    printf("\n");
    
    printf("Digite o terceiro numero: ");
    scanf(" %f", &n3);
    printf("\n");

    float media = (n1 + n2 + n3) / 3;

    printf("===================================\n");
    printf("            Resultado\n");
    printf("===================================\n");
    printf("\n");
    printf("A media entre: %.2f, %.2f, %.2f eh: %.2f", n1, n2, n3, media);
}