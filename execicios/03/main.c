#include <stdio.h>
//calculo da area e volume de uma esfera
void main() {
    float raio;
    
    printf("Digite o raio: ");
    scanf(" %f", &raio);

    float area = 4 * 3.1415 * raio;
    float volume = 4 * 3.1415 * raio / 3;
    
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
}