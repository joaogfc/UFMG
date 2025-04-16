#include <stdio.h>
#include "minhas_funcoes.h"

void testaTroca(float x, float y) {
    troca(&x, &y);
    printf("%.4f %.4f\n", x, y);
}
