#include <stdio.h>
#include <limits.h>

int main() {
    long long menor = LLONG_MIN; 
    unsigned long long maior = ULLONG_MAX;

    printf("menor: %lld\n", menor);
    printf("maior: %llu\n", maior);

    return 0;
}
