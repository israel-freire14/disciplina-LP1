//O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025.
//Fazer um programa para obter todos os números de 4 algarismos com a mesma característica do número 3025.

#include <stdio.h>

int main() {
    for (int i = 1000; i <= 9999; i++) {
        int parte1 = i / 100;
        int parte2 = i % 100;
        if ((parte1 + parte2) * (parte1 + parte2) == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}