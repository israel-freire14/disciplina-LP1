# include <stdio.h>
# include <stdlib.h>

/*1.Construa uma aplicação em C, que mostre a área de um quadrado, retângulo e círculo sendo que ás áreas devem ser vriáveis globais e todas
as outras internas e funções (escopo).
*/

int main(void){

  int ld1, ld2,b,h, area;
  float pi=3.14, raio,areaCirculo;
  printf("Informe valor do Lado1: \n");
  scanf("%d",&ld1);
  printf("Informe valor do Lado2: \n");
  scanf("%d",&ld2);
  area = (ld1*ld2);
  printf("Base do quadrado:  %d\n",area);


//Base retângulo
  printf("Informe valor da Base: \n");
  scanf("%d",&b);
  printf("Informe valor da Altura: \n");
  scanf("%d",&h);
  area = (b*h);
  printf("Base do retângulo:  %d\n",area);


//Base do círculo

printf("Informe valor do raio: \n");
  scanf("%f",&raio);
  area = ( pi* (raio*raio));
  printf("Base do retângulo:  %f\n",areaCirculo);
  








}
