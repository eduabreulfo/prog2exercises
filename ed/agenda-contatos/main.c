
#include <stdio.h>
#include "contato.h"
#include "vector.h"

int main()
{
    Vector *agenda = vector_create();

    vector_destroy(agenda);

    printf("Hello World!\n");
    return 0;
}