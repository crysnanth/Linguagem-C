#include <stdio.h>
#include <string.h>

// criação de um "apelido" para o tipo
// typedef int inteiro;
// com esse apelido eu poderia simplesmente fazer:
// inteiro numero = 10 que funcionaria igual a int numero = 10;


struct pessoa {
    // atributos
    char nome[50];
    int idade;
    float altura;
};

typedef struct pessoa pessoa;
// com esse apelido criado eu posso simplesmente fazer: pessoa p em vez de struct pessoa p;

// maneira 2 com typedef e struct
// typedef struct pessoa
// {
//     // atributos
//     char nome[50];
//     int idade;
//     float altura;
// } pessoa;

// maneira 3
// typedef struct
// {
//     // atributos
//     char nome[50];
//     int idade;
//     float altura;
// } pessoa;

void main() {
    // struct pessoa p;
    
    // // array de pessoas
    // struct pessoa parray[5];
    // for (int i = 0; i < 5; i++) {
    //     printf("Digite o nome: ");
        
    //     setbuf(stdin, NULL);
    //     gets(parray[i].nome);
    //     setbuf(stdin, NULL);
        
    //     printf("Digite a idade: ");
    //     // limpeza de buffer
    //     setbuf(stdin, NULL);
    //     scanf(" %i", &parray[i].idade);
    //     setbuf(stdin, NULL);
        
    //     printf("Digite a altura: ");
        
    //     setbuf(stdin, NULL);
    //     scanf(" %f", &parray[i].altura);
    //     setbuf(stdin, NULL);
    // }
    
    // struct pessoa p = {"Teste", 20, 1.80};

    // para colocar o valor de uma string, tem que usar a função strcpy()
    // strcpy(p.nome, "Teste");
    
    // para os demais tipos, é dessa forma mesmo
    // p.idade = 20;
    // p.altura = 1.80;]

    pessoa p;
    
    printf("Digite o nome: ");
    gets(p.nome);
    printf("Digite a idade: ");
    scanf("%i", &p.idade);
    printf("Digite a altura: ");
    scanf("%f", &p.altura);

    printf("Nome: %s\n" \
    "Idade: %i\n" \
    "Altura: %.2f", 
    p.nome, p.idade, p.altura);
}