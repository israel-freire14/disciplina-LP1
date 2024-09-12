// Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valores lidos. 

#include <stdio.h>
#include <limits.h>

int main() {
    int maior = INT_MIN;
    int menor = INT_MAX;
    int valor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}