# include <stdio.h>
# include <stdlib.h>

/*
1. Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em
decímetros, centímetros e milímetros.
*/

int main(void){

//inicializar variáveis
float metros, dec, cent, mili;

//entrada de dados
printf("Insira valor em metros que deseja converter: \n");
scanf("%f", &metros);

//calcular
dec = (metros * 10);
cent = (metros * 100);
mili = (metros * 1000);

//saída de dados
printf("Decímetros: %.f\n",dec);
printf("Centímetros: %.f\n",cent);
printf("Milímetros: %.f\n",mili);

}