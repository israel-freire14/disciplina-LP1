//Fazer um programa em "C" que lê um string contendo palavras separadas por um espaço em branco cada e
//as imprime uma abaixo das outras.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma frase: ");
    fgets(str, 100, stdin); // lê a string do usuário

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}