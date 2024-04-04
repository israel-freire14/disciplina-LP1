//==================================================================================================
//5. Faca um programa em "C" que le dois números e utiliza uma função chamada "soma" e outra
//chamada "subtracao" para imprimir a soma e a diferenca entre os dois números. Ambas funções
//devem receber dois inteiros como parâmetro e retornar um inteiro como resultado.
//==================================================================================================

#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2){
  int resultado =  num1 + num2;
  return(resultado);
}

int subtracao(int num1, int num2){
  int resultado =  num1 - num2;
  return(resultado);
}


int main(void){
//inicialização de variáveis
int valor1, valor2, resultado;

//entrada de dados
printf("Valor 1:");
scanf("%d", &valor1);
printf("Valor 2:");
scanf("%d", &valor2);

//chama a função soma 
resultado = soma(valor1, valor2);
printf("soma = %d\n",resultado);
//chama a função subtração
resultado = subtracao(valor1, valor2);
printf("subtração = %d\n",resultado);

}