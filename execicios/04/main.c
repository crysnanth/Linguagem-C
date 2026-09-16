#include <stdio.h>
//usuario digita um tempo em segundos e o programa mostra a conversao em horas, minutos e segundos
void main() {
    int segundos;

    printf("Digite um tempo em segundos: ");
    scanf(" %i", &segundos);

    int horas = (segundos / 60) / 60;
    int minutos = (segundos / 60) % 60;
    int segs = segundos % 60;
    
    printf("Tempo: %i hora(s), %i minuto(s) e %i segundo(s)", horas, minutos, segs);
}