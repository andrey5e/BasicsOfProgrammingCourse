#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

vector createVector(size_t n) {
    vector new;

    if (n == 0) {
        new.data = NULL;
    } else {
        new.data = (int *) malloc(n * sizeof(int));
        if (!new.data) {
            fprintf(stderr, "bad alloc");
            exit(1);;
        }
    }

    new.size = 0;
    new.capacity = n;

    return new;
}

void reserve(vector *v, size_t newCapacity) {
    if (newCapacity == 0) {
        v->data = NULL;
    } else {
        v->data = (int *) realloc(v->data, sizeof(int) * newCapacity);
    }
    if (v->data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    if (v->size > newCapacity) {
        v->size = newCapacity;
    }
    v->capacity = newCapacity;
}

void clear(vector *v) {
    v->size = 0;
}

void shrinkToFit(vector *v) {
    reserve(v, v->size);
}

void deleteVector(vector *v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}