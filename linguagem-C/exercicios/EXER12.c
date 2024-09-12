//Fazer um programa para 
//a. receber do usuário um tempo em segundos, correspondente à
//duração de um evento qualquer (por ex. jogo de futebol)
//b. calcular e mostrar ao usuário o tempo equivalente em horas,
//minutos e segundos

#include <stdio.h>

int main() {
    int tempoTotal, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempoTotal);

    horas = tempoTotal / 3600;
    tempoTotal = tempoTotal % 3600;

    minutos = tempoTotal / 60;
    tempoTotal = tempoTotal % 60;

    segundos = tempoTotal;

    printf("Tempo equivalente: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}