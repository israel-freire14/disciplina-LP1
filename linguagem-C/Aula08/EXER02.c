# include <stdio.h>
# include <stdlib.h>
  
/*
2. Construa um aplicativo em C para calcular o valor de um produto onde 
valor = preço*icms. Sendo que  o icms varia da seguinte forma:
0.18, 0.17, e 0.2. Utilize constantes para o valor do icms (constantes).
*/


//Declaração da constante
# define ICMS_1  0.18
# define ICMS_2  0.17
# define ICMS_3  0.20


float main(void){
 
  float preco, valor_1, valor_2, valor_3;

  printf("Informe o valor do produto: \n");
  scanf("%f",&preco);

  valor_1 = preco * (1+ICMS_1);
  valor_2 = preco * (1+ICMS_2);
  valor_3 = preco * (1+ICMS_3);

  printf("Valor do produto com ICMS_1: %f\n",valor_1);
  printf("Valor do produto com ICMS_2: %f\n",valor_2);
  printf("Valor do produto com ICMS_3: %f\n",valor_3);
}