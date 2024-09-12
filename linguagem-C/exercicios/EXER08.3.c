/*Procure determinar quais valores são impressos ao final destes programas.
Confira sua resposta testando os programas:
c) void main() { int a,b,*c,*d,*,*f; a = 4; 
b = 3; 
c = &a; 
d = &b; 
*c /= 2;
 f = c;
 c = d; 
d = f; printf("%d %d",*c,*d); }
*/

#include <stdio.h>
void main() 
{ 
    int a,b,*c,*d,*f; // Corrigido: removido o asterisco solto
    a = 4; 
    b = 3; 
    c = &a; 
    d = &b; 
    *c /= 2; // Isso divide o valor de 'a' por 2, então 'a' agora é 2
    f = c;   // 'f' agora aponta para o mesmo local que 'c', ou seja, para 'a'
    c = d;   // 'c' agora aponta para 'b'
    d = f;   // 'd' agora aponta para 'a'
    printf("%d %d",*c,*d); // Isso imprime os valores para os quais 'c' e 'd' apontam
}
