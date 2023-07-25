
typedef struct VectorItem VectorItem;

typedef struct Vector Vector;

VectorItem *vector_item_create();
void vector_item_print(VectorItem *);
void vector_item_free(VectorItem *);

Vector *vector_create();
void vector_add(Vector *, int *);
VectorItem vector_get(Vector *, int idx);
int vector_get_size(Vector *);
void vector_remove(Vector *v, int idx);
void vector_print(Vector *v);
void vector_destroy(Vector *v);