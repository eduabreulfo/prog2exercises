
#include "vector.h"

struct VectorItem
{
    int *data;
};

struct Vector
{
    VectorItem *vector;
    int qtd;
    int capacidade;
};

vector_criar