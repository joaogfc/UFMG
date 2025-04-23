#include <stdio.h>

// função que verifica se o número é par, ímpar ou inválido
void par_ou_impar(int numero) {
    if (numero <= 0) {
        // número menor ou igual a zero não rola
        printf("ERRO: numero invalido.\n");
    } else if (numero % 2 == 0) {
        // se for divisível por 2, é par
        printf("%d e par.\n", numero);
    } else {
        // se não for par, então é ímpar
        printf("%d e impar.\n", numero);
    }
}
