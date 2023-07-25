
#include "jogador.h"

struct Jogador
{
    int X, Y;
    int Xf, Yf;
    char prioridades[5];
};

Jogador *jogador_criar()
{
    Jogador *jogador = (Jogador *)calloc(1, sizeof(Jogador));

    return jogador;
}

void jogador_ler()
{
    ;
}

void jogador_destruir(Jogador *jogador)
{
    free(jogador);
}