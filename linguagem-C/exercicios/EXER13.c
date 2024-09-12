// Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    double media = (valor1 + valor2 + valor3) / 3.0;

    printf("A media e: %.2lf\n", media);

    return 0;
}