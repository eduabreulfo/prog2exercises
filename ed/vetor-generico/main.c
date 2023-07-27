
#include <stdio.h>
#include "vector.h"
#include "vector_item.h"

int main()
{
    Vector *v = vector_create();

    VectorItem *item = vector_item_create();

    

    vector_destroy(v);

    return 0;
}