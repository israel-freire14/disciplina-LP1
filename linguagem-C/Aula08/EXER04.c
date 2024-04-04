# include <stdio.h>
# include <stdlib.h>

/*
4. A seguinte expressão precisa ser calculada: a=7, b=5, c=2. S = 2*c+3/a-c². 
Crie um aplicativo para calcular a variável S (precedência).
*/

//Definindo constantes
# define A 2
# define B 5
# define C 2

int main(void){
  int S;


 S = (2*C)+(3/(A-pow(C,2)));
  printf("S = %d\n",S);
}