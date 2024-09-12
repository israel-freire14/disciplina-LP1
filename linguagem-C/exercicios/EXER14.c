//Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes valores podem formar os lados de um triângulo.
//Em caso afirmativo, informar se o triângulo é equilátero, isósceles ou escaleno.

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("O triangulo e equilatero.\n");
        } else if (x == y || y == z || z == x) {
            printf("O triangulo e isosceles.\n");
        } else {
            printf("O triangulo e escaleno.\n");
        }
    } else {
        printf("Os valores nao podem formar um triangulo.\n");
    }

    return 0;
}