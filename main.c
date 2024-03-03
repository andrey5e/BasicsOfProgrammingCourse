#include <stdlib.h>
#include <stdint.h>
#include "libs/data_structures/vector/vector.h"

vector createVector(size_t n) {
    vector vec;
    vec.data = (int *)malloc(n * sizeof(int));
    if (vec.data == NULL) {
        // обработка ошибки при выделении памяти
        exit(EXIT_FAILURE);
    }

    vec.size = n;
    vec.capacity = n;

    return vec;
}

int main() {
    size_t n = 10;
    vector v = createVector(n);

    return 0;
}