
#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

struct VectorItem
{
    int *data;
};

struct Vector
{
    VectorItem **vector;
    int qtd;
    int capacidade;
};

VectorItem *vector_item_create(int *data)
{
    VectorItem *item = (VectorItem *)calloc(1, sizeof(VectorItem));

    item->data = (int *)calloc(1, sizeof(int));
    item->data = data;

    return item;
}

void vector_item_print(VectorItem *item)
{
    printf("%d", *item->data);
}

void vector_item_free(VectorItem *item)
{
    free(item->data);

    free(item);
}

Vector *vector_create()
{
    Vector *v = (Vector *)calloc(1, sizeof(Vector));

    v->capacidade = 4;

    v->vector = (VectorItem **)calloc(v->capacidade, sizeof(VectorItem *));

    return v;
}

void vector_add(Vector *v, int *data)
{
    if(v->qtd == v->capacidade)
    {
        v->vector = (VectorItem **)realloc(v->vector, 2 * v->capacidade * sizeof(VectorItem *));
    }

    v->vector[v->qtd] = vector_item_create(data);

    v->qtd++;
}

VectorItem vector_get(Vector *v, int idx)
{
    return *v->vector[idx];
}

int vector_size(Vector *v)
{
    return v->qtd;
}

void vector_remove(Vector *v, int idx)
{
    vector_item_free(v->vector[idx]);

    for(int i = idx + 1; i < v->qtd; i++)
    {
        v->vector[i-1] = v->vector[i];
    }

    v->qtd--;
}

void vector_print(Vector *v)
{
    printf("[");

    vector_item_print(v->vector[0]);

    for(int i = 1; i < v->qtd; i++)
    {
        printf(", ");

        vector_item_print(v->vector[i]);
    }
    
    printf("]\n");
}

void vector_destroy(Vector *v)
{
    for(int i = 0; i < v->qtd; i++)
    {
        vector_item_free(v->vector[i]);
    }

    free(v->vector);

    free(v);
}