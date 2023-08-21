
#include <stdlib.h>
#include "vector.h"

struct Vector
{
    void **itens;
    int capacidade;
    int qtd;
};

/*
struct Agenda
{
    void **contatos;
    int capacidade;
    int qtd;
};
*/

Vector *vector_create()
{
    Vector *v = (Vector *)calloc(1, sizeof(Vector));

    v->capacidade = 8;

    v->itens = (void **)calloc(v->capacidade, sizeof(void *));
    
    return v;
}

void vector_add(Vector *v, void *item)
{
    if( v->capacidade == v->qtd )
    {
        v->capacidade *= 2;

        v->itens = (void **)realloc(v->itens, v->capacidade * sizeof(void *));
    }

    v->itens[v->qtd] = item;

    v->qtd++;
}

void vector_destroy(Vector *v)
{
    /*
    A principio é necessario dar free nos elementos antes de destruir o vetor;
    */

    free(v->itens);

    free(v);
}