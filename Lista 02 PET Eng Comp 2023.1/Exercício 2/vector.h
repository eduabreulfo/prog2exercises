
#ifndef _VECTOR_H_
#define _VECTOR_H_

typedef enum
{
    INT = 0,
    FLOAT = 1,
    DOUBLE = 2,
    CHAR = 3
} ItemType;

typedef struct VectorItem VectorItem;

typedef struct Vector Vector;

VectorItem *vector_item_create(void *, ItemType);
void vector_item_print(VectorItem *);
void vector_item_free(VectorItem *);

Vector *vector_create();
void vector_add(Vector *, void *, ItemType);
VectorItem vector_get(Vector *, int idx);
int vector_get_size(Vector *);
void vector_remove(Vector *v, int idx);
void vector_print(Vector *v);
void vector_destroy(Vector *v);

#endif