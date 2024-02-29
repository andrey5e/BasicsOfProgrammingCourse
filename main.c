#include <stdio.h>
#include "libs/data_structures/bitset/bitset.h"

int main() {
    bitset a = bitset_create(16);
    bitset_insert(&a, 1);
    bitset_insert(&a, 12);
    bitset_insert(&a, 6);
    bitset_insert(&a, 8);
    bitset_insert(&a, 10);
    bitset_print(a);

    return 0;
}