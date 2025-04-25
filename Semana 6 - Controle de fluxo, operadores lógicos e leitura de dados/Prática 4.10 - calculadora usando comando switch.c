#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    // pega o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    // pega o operador
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // pega o segundo número
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 == 0) {
                // divisão por zero? não rola
                printf("Erro! Divisão por zero não é permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
        default:
            // operador esquisito? mete erro
            printf("Operador inválido!\n");
    }

    return 0;
}
