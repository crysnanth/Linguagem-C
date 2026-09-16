#include <stdio.h>
#include <string.h> // biblioteca para manipulação de strings (ver docs)
#include <stdlib.h> // biblioteca para casting de strings para outros tipos (ver docs)

// strings
void main() {
    // assim que se cria uma string (tem outas maneiras, mas a mais de boa é essa, na minha opinião)
    //char nome[] = "Nome";
    // quando for declara uma string, se não for colocar o valor na declaração, é obrigatório colocar o tamanho
    // char nome[50];
    // printf("Digite seu nome: ");
    // scanf(" %s", &nome); // o espaço no inicio é por causa do buffer que deixa armazenado valores do programa anterior (explicação melhor na internet)
    // comandos para limpar o buffer, e não precisar mais colocar o espaço no scanf
    //fflush(stdin); // para windows
    //__fpurge(stdin); // para linux
    //setbuf(stdin, NULL); // para ambos
    
    char nome[50];
    printf("Digite seu nome: ");
    // o comando funciona colocando antes e depois
    setbuf(stdin, NULL);
    // não armazena espaços nem quebras de linhas
    scanf("%s", &nome);
    setbuf(stdin, NULL);
    printf("Seu nome eh %s", nome);

    // outros comandos para armazenar strings
    
    //armazena tudo menos a tecla enter \n
    //gets(nome);
    
    // armazena tudo incluindo a tecla enter \n
    //fgets(nome, 50, stdin); // mais seguro devido poder especificar o tamanho do valor
}