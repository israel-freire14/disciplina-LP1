/*Fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja, imprime as opções
de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).
1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).
OBS:  fazer  uma  função  que  imprime  as  opções  solicita  a  opção  desejada  e  retorna  a  opção escolhida. 
No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção).*/

#include <stdio.h>

int escolherOpcao() {
    int opcao;

    printf("1) A vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preco da etiqueta)\n");
    printf("3) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

double aVista(double total) {
    return total * 0.9;
}

double duasVezes(double total) {
    return total;
}

double parcelado(double total, int parcelas) {
    if (parcelas < 3 || parcelas > 10) {
        printf("Numero de parcelas invalido.\n");
        return -1;
    }
    return total * (1 + 0.03 * parcelas);
}

int main() {
    double total;
    int opcao, parcelas;

    printf("Digite o total gasto: ");
    scanf("%lf", &total);

    opcao = escolherOpcao();

    switch (opcao) {
        case 1:
            printf("Valor a pagar: %.2lf\n", aVista(total));
            break;
        case 2:
            printf("Valor a pagar: %.2lf\n", duasVezes(total));
            break;
        case 3:
            printf("Digite o numero de parcelas (3-10): ");
            scanf("%d", &parcelas);
            printf("Valor a pagar: %.2lf\n", parcelado(total, parcelas));
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}