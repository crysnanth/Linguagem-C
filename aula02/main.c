#include<stdio.h>

void main() {
    // cada linha finalizada com ";" é uma sentença.
    int a = 1;
    // quando se tem operadores em uma linha, significa que é uma expressão, por exemplo o operado = que significa "recebe"
    int b = 2;
    // nessa linha temos 2 operadores, = e +, portanto temos 2 expressões.
    int c = a + b;

    printf("%d", c);
}