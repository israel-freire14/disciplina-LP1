//===========================================================================================
//2. Fazer um programa que solicita um número decimal e imprime o correspondente em binário.
//===========================================================================================

//libs
# include <stdio.h>
# include <stdlib.h>

void binario(int num){
  if (num ==0) {
      printf("%d",num);
  }
  else{
    binario(num/2);
    printf("%d", num % 2);
  }
}

int main(void){

//icializar as variáveis
int num;

//entrada de dados
printf("Entre com um valor decimal: \n");
scanf("%d",&num);

//saída de dados
binario(num);
printf("\n");

}