#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// arrays multidimensionais
void main() {
    int array[12]; // indice (inteiro) -> dado
    // na memória, esse array multidimensional tem o mesmo tamanho do array acima
    int array2[3][4]; // indice (inteiro, inteiro) -> dado
    
    int array5[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    // quando quisermos acessar todos os valores de um array bi-dimensional
    // int array[LINHA][COLUNA]
    // o tamanho de i vai ser igual ao numero de linhas
    // e o tamanho de j vai ser igual ao numero de colunas

    // int array3[10][10];

    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 10; j++) {
    //         array3[i][j] = 0;
    //         printf("i: %i J: %i\n", i, j);
    //     }
    // }
}