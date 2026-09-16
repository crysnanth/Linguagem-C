#include <stdio.h>

//enum dia {domingo = 0, segunda = 1, terca = 2, quarta = 3, quinta = 4, sexta = 5};
// é a mesma coisa que a sentença acima, porém automaticamente a linguagem já faz essa ordenação
enum dia {domingo, segunda, terca, quarta, quinta, sexta, sabado};

void main() {
    enum dia d;
    
    printf("Digite um numero entre 0 e 6: ");
    // adicionando um número inteiro a variável enum
    scanf(" %i", &d);

    // podemos utilizar os nomes já que a variável é do tipo enum
    switch (d) {
        case domingo:
            printf("Domingo");
            break;
        case segunda:
            printf("Segunda");
            break;
        case terca:
            printf("Terca");
            break;
        case quarta:
            printf("Quarta");
            break;
        case quinta:
            printf("Quinta");
            break;
        case sexta:
            printf("Sexta");
            break;
        default:
            printf("Digite algum numero entre 0 e 6");
            break;
    }
}