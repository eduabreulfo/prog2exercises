
#ifndef _VECTOR_H
#define _VECTOR_H

typedef struct Vector Vector;

Vector *vector_create();

void vector_add(Vector *, void *item);

// void *vector_get(Vector *v);

/* Salva o vector como um arquivo binario em path */
// void vector_salvar(Vector *, char path);

// void vector_ler(Vector *, char path);

void vector_destroy(Vector *);

#endif