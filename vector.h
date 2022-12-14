#include <stdio.h>
#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_INIT_CAPACITY 4

typedef struct vector {
    void **items;
    int capacity;
    int total;
} vector;
typedef void* (*callback)(void* data);

void vector_init(vector *);
int vector_total(vector *);
void vector_resize(vector *, int);
void vector_add(vector *, void *);
void vector_set(vector *, int, void *);
void *vector_get(vector *, int);
void vector_delete(vector *, int);
void vector_free(vector *);
void vector_foreach(vector* v, callback f);
void print_vector(vector* v, FILE* f, callback printer);
#endif