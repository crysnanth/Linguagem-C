#include <stdio.h>
#include <stdlib.h>
// #include <unistd.h> para linux (entrada em segundos)
#include <windows.h> // (entrada em milisegundos)

// Assinatura da função, que me possibilita escrever ela depois da função main, e caso eu precise chamar essa função dentro de outra, essa outra sendo criada primeiro, sem assinatura vai dar erro de função indefinida.
int calculaFatorial(int);
int verificaNumeroPrimo(int);

// função com retorno tipo int
int calculaFatorial(int n) {
    int fat = 1;

    for (int i = n; i > 1; i--) {
        fat *= i;
    }

    return fat;
}

int verificaNumeroPrimo(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % 2 == 0) {
            return 0; // não é primo
        }
    }
    
    return 1; // é primo
}

// as funções devem ser criadas antes da função main, pois o executável vai procurar primeiro a função main, e caso uma função seja feita depois, vai dar erro quando chamar a função, pois ela ainda não foi criada.
void main() {
    int num;
    int resultado;
    // usa o comando cls do terminal em tempo de execução.
    system("cls");
    
    printf("Digite um numero para calcular o fatorial: ");
    scanf(" %i", &num);
    
    resultado = calculaFatorial(num);
    
    printf("\nResultado: %i\n", resultado);
    Sleep(2000);
    printf("\nDigite um numero para verificar se eh primo: ");
    scanf(" %i", &num);
    
    resultado = verificaNumeroPrimo(num);
    if (resultado == 1) {
        printf("%i eh primo", num);
    } else {
        printf("%i nao eh primo", num);
    }
}

// OBS
/*
    Assinaturas são muito comuns em códigos complexos, pois ajuda a abstrair o que a função faz
*/