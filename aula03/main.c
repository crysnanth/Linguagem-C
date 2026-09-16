#include<stdio.h>

void main() {
    // caracteres
    // aspas simples significa que o valor pode ser apenas 1 caractere
    char a = 'a';
    // aspas duplas significa que o valor pode conter uma cadeia de caracteres, mais conhecido como string
    //char a2 = "a";
    printf("char %c\n", a); // mostrar variável do tipo char

    //números inteiros
    short int b = 1;
    int c = 1;
    long int d = 1;
    printf("int %i\n", b); // mostrar variável do tipo short int ou int
    printf("long int %li\n", d); // mostrar variável do tipo long int

    // não aceita números negativos
    unsigned short int e = 1;
    unsigned int f = 1;
    unsigned long int g = 1;
    printf("unsigned %u\n", e); // mostrar variável do tipo unsigned
    printf("unsigned long %lu\n", g); // mostrar variável do tipo long unsigned

    // números reais
    float h = 2.5f; // recomenda-se colocar esse f no final para tipos float
    double i = 2.5;
    long double j = 2.5e-23L; // long double é usado para notação científica
    printf("float %f\n", h); // mostrar variável do tipo float ou double
    printf("long double %e\n", j); // mostrar variável do tipo long double

    //constantes nomeadas
    // constantes são variáveis que não mudam de valor durante o programa.
    // tem que ter o valor definido já na declaração
    const int MAX = 100;
    printf("const int %i\n", MAX); // tipo da constante

    // casting de variáveis
    float teste = 2.5f;
    int teste2 = (int) teste; // realiza o truncamento do valor, o que significa que todo valor depois da vírgula será ignorado

    int teste3;
    printf("%p", &teste3); // impressão de endereço da variável
}