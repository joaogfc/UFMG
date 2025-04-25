#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    // regra do bissexto: divisível por 4, mas não por 100, exceto se for por 400
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        // se cair nessa condição, é bissexto
        printf("O ano de %d e bissexto.\n", ano);
    } else {
        // senão, não é bissexto
        printf("O ano de %d nao e bissexto.\n", ano);
    }

    return 0;
}
