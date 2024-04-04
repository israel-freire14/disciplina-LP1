//========================================================================================
//6. Fazer uma função que cacula a enésima potência de uma variável real x: f(x, n) = xn
//========================================================================================
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int b, int e){
   int resultado =  pow(b,e);
   return(resultado);
}

int main(void){
  //inicializar variáveis
  int base,expoente,resultado;

  //entrada de dados
  printf("Calculadora de potências... \n");
  printf("Entre com a base:");
  scanf("%d",&base);
  printf("Entre com o expoente:");
  scanf("%d",&expoente);

  //retorna a função potencia
  resultado = potencia(base, expoente);
  printf("%d\n",resultado);
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * Calcula a potência de uma base elevada a um expoente.
 *
 * Parâmetros:
 *   base - o número base
 *   expoente - o expoente para o qual elevar a base
 *
 * Retorno:
 *   o resultado da conta de potência
 */
int calcular_potencia(int base, int expoente) {
   int potencia =  pow(base, expoente);
   return(potencia);
}

int main(void) {
  // inicializar variáveis
  int base, expoente, potencia;

  // entrada de dados
  printf("Calculadora de potências... \n");
  printf("Entre com a base: ");
  if (scanf("%d", &base) != 1) {
    printf("Erro: Entrada inválida. Por favor, insira um inteiro para a base.\n");
    return 1;
  }
  printf("Entre com o expoente: ");
  if (scanf("%d", &expoente) != 1) {
    printf("Erro: Entrada inválida. Por favor, insira um inteiro para o expoente.\n");
    return 1;
  }

  // chamar a função calcular_potencia
  potencia = calcular_potencia(base, expoente);
  printf("%d\n", potencia);

  return 0;
}