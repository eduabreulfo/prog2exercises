
// comeco: 11:00

#include <stdio.h>
#include <stdlib.h>
#include "labirinto.h"

int me_tira_daqui(Labirinto *, Jogador *);

int main()
{
    Labirinto *labirinto = labirinto_criar();
    Jogador *jogador = jogador_criar();

    labirinto_ler(labirinto);
    jogador_ler(jogador);

    me_tira_daqui(labirinto, jogador);

    jogador_destruir(jogador);
    labirinto_destruir(labirinto);

    return 0;
}

int me_tira_daqui(Labirinto *labirinto, Jogador *jogador)
{
    ;
}