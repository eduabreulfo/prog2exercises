
#ifndef _VECTOR_H
#define _VECTOR_H

typedef struct Vector Vector;

/* Cria um vetor vazio */
Vector *vector_create();

/* Adiciona um item ao vetor */
void vector_add(Vector *v, void *item);

/* Libera todos os itens e destroi o vetor */
void vector_destroy(Vector *v);

#endif