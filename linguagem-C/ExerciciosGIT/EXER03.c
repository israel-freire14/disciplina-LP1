//======================================================================================================
//3.Faça um programa em "C" que lê dois valores e imprime: - se o primeiro valor for menor que o
//segundo, a lista de valores do primeiro até o segundo; - se o primeiro valor for maior que o segundo
//a lista de valores do segundo até o primeiro em ordem decrescente; - se ambos forem iguais a
//mensagem "valores iguais".
//======================================================================================================

# include <stdio.h>
# include <stdlib.h>

int main(void){

//inicializar variáveis
int num1, num2;

//entrada de dados
printf("Entre com o primeiro valor: \n");
scanf("%d",&num1);
printf("Entre com o segundo valor: \n");
scanf("%d",&num2);

//condição

if(num1 == num2) {
 printf("Valores iguais"); 
}
if(num1 < num2){
  printf("%d\n",num1);
  printf("%d\n",num2);

}
else if(num1 > num2){
  printf("%d\n",num1);
  printf("%d\n",num2);
} 
}