#include <stdio.h>

void calculoSaldo(int vitorias, int derrotas)
{
    int saldo = (vitorias - derrotas);

    if (saldo < 10) printf("O Herói tem de saldo de %d, está no nível de Ferro", saldo);
    if (saldo > 11 && saldo <=20) printf("O Herói tem de saldo de %d, está no nível de Bronze", saldo);
    if (saldo > 21 && saldo <=50) printf("O Herói tem de saldo de %d, está no nível de Prata", saldo);
    if (saldo > 51 && saldo <=80) printf("O Herói tem de saldo de %d, está no nível de Ouro", saldo);
    if (saldo > 81 && saldo <=90) printf("O Herói tem de saldo de %d, está no nível de Diamante", saldo);
    if (saldo > 91 && saldo <=100) printf("O Herói tem de saldo de %d, está no nível de Lendário", saldo);
    if (saldo >= 101) printf("O Herói tem de saldo de %d, está no nível de Imortal", saldo);

    
}


int main(){
    int vitorias, derrotas;

    printf("Número de vitórias do jogador:\n");
    scanf("%d", &vitorias);

    printf("Número de derrotas do jogador:\n");
    scanf("%d", &derrotas);

    calculoSaldo(vitorias, derrotas);
    
    return 0;
}