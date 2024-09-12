/*Fazer uma função situacao_aluno que:
a. recebe como parâmetros: média final do aluno (0 a 100), número de faltas e quantidade de horas-aula no semestre 
b. retorna 1 se o aluno foi aprovado, de acordo com os critérios do IF BAIANO, e 0 caso contrário. 
Critérios: média final maior ou igual a 70 e frequência maior ou igual a 75%
Fazer o teste da chamada desta função no main,
recebendo valores relativos a um aluno e informando se ele foi aprovado ou não. */

#include <stdio.h>

int situacao_aluno(float media_final, int num_faltas, int horas_aula) {
    float frequencia = ((horas_aula - num_faltas) / (float)horas_aula) * 100;
    if (media_final >= 70 && frequencia >= 75) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float media_final;
    int num_faltas, horas_aula;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media_final);

    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &num_faltas);

    printf("Digite a quantidade de horas-aula no semestre: ");
    scanf("%d", &horas_aula);

    if (situacao_aluno(media_final, num_faltas, horas_aula)) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }

    return 0;
}