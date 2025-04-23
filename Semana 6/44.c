#include <stdio.h>

int main() {
    float preco;
    char estado;

    // pega o valor e o estado pra onde vai o bagulho
    scanf("%f %c", &preco, &estado);

    // bora ver qual estado foi e mandar a resposta na moral
    switch (estado) {
        case 'G': // minas gerais
            preco *= 1.07;
            printf("O valor em MG seria de R$%.2f\n", preco);
            break;
        case 'P': // são paulo
            preco *= 1.12;
            printf("O valor em SP seria de R$%.2f\n", preco);
            break;
        case 'J': // rio de janeiro
            preco *= 1.15;
            printf("O valor em RJ seria de R$%.2f\n", preco);
            break;
        case 'S': // mato grosso do sul
            preco *= 1.08;
            printf("O valor em MS seria de R$%.2f\n", preco);
            break;
        default:
            // digitou qualquer parada que não seja uma das válidas, já era
            printf("Estado invalido\n");
            break;
    }

    return 0;
}
