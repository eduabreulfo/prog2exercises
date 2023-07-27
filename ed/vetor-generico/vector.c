
#include "vector.h"
#include <stdlib.h>
#include "constantes.h"

struct Vector
{
    void **itens;
    unsigned capacidade;
    unsigned qtd;
};

Vector *vector_create()
{
    Vector *v = (Vector *)calloc(1, sizeof(Vector));

    v->itens = (void **)calloc(VECTOR_CAPACIDADE_INICIAL, sizeof(void *));

    v->capacidade = VECTOR_CAPACIDADE_INICIAL;

    return v;
}

void vector_add(Vector *v, void *item)
{
    if(v->qtd == v->capacidade)
    {
        v->itens = (void **)realloc(v->itens, 2 * v->capacidade * sizeof(void *));
    }

    v->itens[v->qtd] = item;

    v->qtd++;
}

void *vector_get(Vector *v, int idx)
{
    return v->itens[idx];
}

void vector_destroy(Vector *v)
{
    for(int i = 0; i < v->qtd; i++)
    {
        free(v->itens[i]);
    }

    free(v->itens);

    free(v);
}