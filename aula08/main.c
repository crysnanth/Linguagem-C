#include <stdio.h>
// no C não tem valores booleanos, 1 é equivalente a TRUE e 0 a false

void main() {
    int i = 0;
    int entrada = 1;

    // enquanto a condição for verdadeira, o programa vai continuar executando o laço de repetição até a condição ser falsa
    while(i <= 10) {
        if (i == 10) {
            printf("%i", i);
        } else {
            printf("%i, ", i);
        }

        // incremento da variável i
        i++;
    }

    // igual ao while, mas tem o DO 
    do {
        printf("\nGostaria de continuar o programa?\n");
        printf("1 - Continuar\n");
        printf("0 - Parar\n");
        printf("Resposta: ");
        scanf("%i", &entrada);
    } while (entrada != 0);
    
}