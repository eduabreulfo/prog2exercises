
#include "defesa.h"

struct Defesa
{
    char nome[50];
    char tipo;
    int x;
    int y;
    int tamanho; //raio ou 1/2 diagonal do quadrado
    int poder;
    int qtd;
};

Defesa *defesa_criar();

void defesa_ler(Defesa *);

void defesa_destruir(Defesa *);