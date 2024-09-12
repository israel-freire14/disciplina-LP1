/* (Cortesia do Prof. Bogdan Tomoyuki Nassu) Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar do jogo e ganham 10 pontos se acertarem o vencedor ou se acertarem que foi empate, e ganham mais 5 pontos para o placar de cada time que acertarem. A tabela a seguir dá um exemplo, considerando que o placar real foi 3x2:
Placar apostado | Pontos  |  Razão
0x1             |   0     |   Não acertou o vencedor e nem o número de gols dos times.
0x2             |   5     |   Não acertou o vencedor, mas acertou o número de gols do segundo time
3x5             |   5     |   Não acertou o vencedor, mas acertou o número de gols do primeiro time.
1x0             |   10    |   Acertou o vencedor, mas não acertou o número de gols dos times.
3x1             |   15    |   Acertou o vencedor e o número de gols do primeiro time.
3x2             |   20    |   Acertou o vencedor e o número de gols de ambos os times

Escreva um programa que requisita do usuário o placar apostado e depois o placar do jogo e
informa quantos pontos o apostador fez. */

#include <stdio.h>

int main() {
  // Declaração de variáveis
  int placarApostadoTime1, placarApostadoTime2, placarRealTime1, placarRealTime2;
  int pontos;

  // Leitura do placar apostado
  printf("Digite o placar apostado (time 1 x time 2): ");
  scanf("%d %d", &placarApostadoTime1, &placarApostadoTime2);

  // Leitura do placar real
  printf("Digite o placar real (time 1 x time 2): ");
  scanf("%d %d", &placarRealTime1, &placarRealTime2);

  // Cálculo da pontuação
  pontos = 0;

  // Vencedor
  if (placarApostadoTime1 > placarApostadoTime2 && placarRealTime1 > placarRealTime2) {
    pontos += 10;
  } else if (placarApostadoTime1 < placarApostadoTime2 && placarRealTime1 < placarRealTime2) {
    pontos += 10;
  } else if (placarApostadoTime1 == placarApostadoTime2 && placarRealTime1 == placarRealTime2) {
    pontos += 10;
  }

  // Empate
  if (placarApostadoTime1 == placarApostadoTime2 && placarRealTime1 == placarRealTime2) {
    pontos += 10;
  }

  // Gols do time 1
  if (placarApostadoTime1 == placarRealTime1) {
    pontos += 5;
  }

  // Gols do time 2
  if (placarApostadoTime2 == placarRealTime2) {
    pontos += 5;
  }

  // Exibição da pontuação
  printf("Pontuacao: %d\n", pontos);

  return 0;
}
