#include <stdio.h>

void main() {
    int idade;
    float altura;
    char letra_favorita;

    printf("Qual sua idade?");
    // usando o scanf eu consigo receber dados do usuário pelo terminal, passando o tipo do dado e o endereço da variável (&)
    scanf(" %i", &idade);

    printf("Qual usa altura?");
    // é necessário colocar um espaço antes do %f para o programa não quebrar
    scanf(" %f", &altura);

    printf("Qual sua letra favorita?");
    scanf(" %c", &letra_favorita);

    printf("Sua idade: %i\n" \
    "Sua altura: %.2f\n" \
    "Sua letra favorita: %c\n"\
    , idade, altura, letra_favorita);
}