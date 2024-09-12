//Implementar a função inverte que recebe um número  unsigned int 
//como parâmetro e retorna este número escrito ao contrário. Ex: 431 <-> 134.

#include <stdio.h>

unsigned int inverte(unsigned int num) {
    unsigned int invertido = 0;
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

int main() {
    unsigned int num;
    printf("Digite um numero: ");
    scanf("%u", &num);
    printf("O numero invertido e: %u\n", inverte(num));
    return 0;
}