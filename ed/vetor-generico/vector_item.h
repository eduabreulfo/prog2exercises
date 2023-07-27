
#ifndef _VECTOR_ITEM_H
#define _VECTOR_ITEM_H

typedef struct VectorItem VectorItem;

/* vai ter que passar o item logo na criacao? (void *?) */
VectorItem *vector_item_create();

void vector_item_destroy();

#endif