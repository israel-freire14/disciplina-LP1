/*Procure determinar quais valores são impressos ao final destes programas. Confira sua resposta testando os programas:
a) void main() 
{ int a,b,*c;
 a = 3; 
b = 4; 
c = &a; 
b++; 
*c = a+2; 
printf("%d %d",a,b); 
} */

#include <stdio.h>

void main() 
{ 
    int a,b,*c;
    a = 3; 
    b = 4; 
    c = &a; 
    b++; 
    *c = a+2; 
    printf("%d %d",a,b); 
}
