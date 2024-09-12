// Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não.

#include <stdio.h>

int main() {
    int num, i, eh_primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            eh_primo = 0;
            break;
        }
    }

    if (eh_primo && num > 1) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}