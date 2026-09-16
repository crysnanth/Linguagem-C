#include <stdio.h>
// calculo da area de um triangulo
void main() {
    float base, altura;
    
    printf("===================================\n");
    printf("    Calculo da area de um triangulo\n");
    printf("===================================\n");
    printf("\n");

    printf("Digite a base: ");
    scanf(" %f", &base);
    printf("Digite a altura: ");
    scanf(" %f", &altura);

    float area = (base * altura) / 2;

    printf("===================================\n");
    printf("            Resultado\n");
    printf("===================================\n");
    printf("\n");

    printf("A area eh: %.2f", area);
}