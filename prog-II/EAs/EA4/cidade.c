
#include "cidade.h"

struct Cidade
{
    int dano;
    int X;
    int Y;
};

Cidade *cidade_criar();

void cidade_destruir(Cidade *);