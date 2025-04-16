#include <stdio.h>

int parOuImpar(unsigned int number) {
    return ~number & 1;
}
