
#include <stdio.h>
#include "vector.h"
#include "vector_item.h"

int main()
{
    Vector *v = vector_create();

    for(int i=0; i<15; i++)
    {
        VectorItem *item = vector_item_create();
        vector_add(v, item);
    }

    vector_destroy(v);

    return 0;
}