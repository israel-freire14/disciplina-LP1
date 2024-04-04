# include <stdio.h>
# include <stdlib.h>

/*
3.Crie um aplicativo em C para determinar o dias da semana sendo que 
domingo = 1. Crie um tipo enumerado com C para esse fim (tipo de dado
do usuário).
*/


int main(void){
  int diasSemana;
  
  printf("Informe o número correspondente ao número da semana (1-7): \n");
  scanf("%d",&diasSemana);
  
  switch(diasSemana){
    case 1:
      printf("Domingo \n");
      break;
    case 2:
      printf("Segunda-feira \n");
      break;
    case 3:
      printf("Terça-feira \n");
      break;
    case 4:
      printf("Quarta-feira \n");
      break;
    case 5:
      printf("Quinta-feira \n");
      break;
    case 6:
      printf("Sexta-feira \n");
      break;
    case 7:
      printf("Sábado \n");
      break;
    default:
      printf("Entrada inválida \n");
  }
}