//=======================================================================================================
//4. Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e imprime o resultado da
//expressão: <valor 1><operando><valor2>
//=======================================================================================================

# include <stdio.h>
# include <stdlib.h>

int main(void){

  //inicializar variáveis
  int valor1, valor2, soma, subtracao, multiplicacao, divisao;
  char operando;

  //entrada de dados
  printf("Entre com o primeiro valor:");
  scanf("%d",&valor1);
  printf("Entre com um dos operandos (+,-,*,/):");
  scanf(" %c",&operando);
  printf("Entre com o segundo valor: ");
  scanf("%d",&valor2);

  switch (operando){

  case '+':
    soma = valor1 + valor2;
    printf("soma: %d\n",soma); 
    break;
  case '-':
    subtracao = valor1 - valor2;
    printf("subtração: %d\n",subtracao); 
    break;
  case '*':
    multiplicacao = valor1 * valor2;
    printf("multiplicação: %d\n",multiplicacao);  
    break;
  case '/':
    
    if(valor2 == 0){
      printf("Divisão por 0 é indefinido");
    }
    else{
      divisao = valor1 / valor2;
      printf("divisão: %d\n",divisao);
    } 
    break;
  default:
    printf("Operando inválido!");
    break;
  }
}