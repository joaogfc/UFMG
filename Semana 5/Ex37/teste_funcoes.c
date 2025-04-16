
#include <stdio.h>
#include "minhas_funcoes.h"

int main() {
    int x;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &x);

    soma1(&x);
    printf("\nValor depois de chamar a função: %d", x);

    float a, b;
    printf("\nDigite os valores para troca: ");
    scanf("%f %f", &a, &b);

    troca(&a, &b);
    printf("\nValores depois de chamar a função: %.4f %.4f", a, b);

    long long tel;
    printf("\nDigite o telefone: ");
    scanf("%lld", &tel);

    printf("\nDDD: %d\n", ddd(tel));

    return 0;
}
