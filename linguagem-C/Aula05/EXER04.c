/*
4. Escreva um programa que leia 3 notas de um aluno e a média das notas
dos exercícios realizados por ele. Calcular a média de aproveitamento,
usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média,
informar o conceito de acordo com a tabela:

*/

# include <stdio.h>
# include <stdlib.h>

int main(void){
    
 double n1, n2, n3, me, ma;

    printf("Digite o valor da N1: \n");
    scanf("%le",&n1);
    printf("Digite o valor da N2: \n");
    scanf("%le",&n2);
    printf("Digite o valor da N3: \n");
    scanf("%le",&n3);

    me = ((n1+n2+n3)/3);
    
    ma = ((n1 + (n2*2) + (n3*3) + me)/7);
    
    printf("A média de aproveitamento é: %le\n",ma);


            if(ma>=9.0){
                printf("Conceito: A");
            } else if(ma>=7.5 && ma < 9.0){
                printf("Conceito: B");
            } else if(ma >= 6 && ma < 7.5){
                printf("Conceito: C");
            } else if(ma >= 4.0 && ma < 6.0){
                printf("Conceito: D");
            } else if(ma < 4.0){
                printf("Conceito: E");
            }
   
} 
