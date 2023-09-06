
#include "missil.h"

struct Missil
{
    char nome[50];
    int poder;
    int x;
    int y;
};

struct Arsenal
{
    Missil **vetorMisseis;
    int capacidade;
    int qtd;
};

Missil *missil_criar();

void missil_ler(Missil *);

void missil_destruir(Missil *);