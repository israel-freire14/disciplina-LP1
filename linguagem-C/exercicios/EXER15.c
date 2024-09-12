//Escreva um programa que calcule o salário semanal de um trabalhador.
//As entradas são o número de horas trabalhadas na semana e o valor da hora.
//Até 40 h/semana não se acrescenta nenhum adicional.
//Acima de 40h e até 60h há um bônus de 50% para essas horas.
//Acima de 60h há um bônus de 100% para essas horas

#include <stdio.h>

int main() {
    int horasTrabalhadas;
    double valorHora, salario;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor da hora: ");
    scanf("%lf", &valorHora);

    if (horasTrabalhadas <= 40) {
        salario = horasTrabalhadas * valorHora;
    } else if (horasTrabalhadas <= 60) {
        salario = 40 * valorHora + (horasTrabalhadas - 40) * valorHora * 1.5;
    } else {
        salario = 40 * valorHora + 20 * valorHora * 1.5 + (horasTrabalhadas - 60) * valorHora * 2;
    }

    printf("O salario semanal e: %.2lf\n", salario);

    return 0;
}