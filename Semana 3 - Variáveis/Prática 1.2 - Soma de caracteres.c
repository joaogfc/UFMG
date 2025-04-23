#include <stdio.h>

int main() {
    char c1 = 'P', c2 = 'D', c3 = 'S', c4 = '-', c5 = '1';
    int soma = c1 + c2 + c3 + c4 + c5;
    int multiplicacao = c1 * c2 * c3 * c4 * c5;

    printf("Soma dos valores ASCII: %d\n", soma);
    printf("Multiplicacao dos valores ASCII: %d\n", multiplicacao);

    return 0;
}
