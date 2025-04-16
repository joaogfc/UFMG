
#include "minhas_funcoes.h"

void soma1(int *valor) {
    (*valor)++;
}

void troca(float *end_valor1, float *end_valor2) {
    float temp = *end_valor1;
    *end_valor1 = *end_valor2;
    *end_valor2 = temp;
}

int ddd(long long telefone) {
    return (telefone / 100000000LL) % 100;
}
