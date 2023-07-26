
#include "vector.h"

int main()
{
    Vector *v = vector_create();

    vector_destroy(v);

    return 0;
}