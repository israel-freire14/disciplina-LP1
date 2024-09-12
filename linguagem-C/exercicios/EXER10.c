//Fazer uma rotina que recebe um array do tipo double e o número de valores que devem ser
//solicitados ao usuário e devolve o array preenchido com os valores digitados.

#include <stdio.h>

void preencherArray(double *array, int numValores) {
    for (int i = 0; i < numValores; i++) {
        printf("Digite o %dº valor: ", i+1);
        scanf("%lf", &array[i]);
    }
}

int main() {
    double array[10];
    preencherArray(array, 10);

    // Imprime o array para verificar se os valores foram inseridos corretamente
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", array[i]);
    }

    return 0;
}