#include <stdio.h>

int main() {
    int velocidade_max, velocidade_motorista;

    // Leitura das velocidades
    scanf("%d", &velocidade_max);
    scanf("%d", &velocidade_motorista);

    // Se o cara pisou demais no acelerador, vamos calcular quanto foi o excesso
    if (velocidade_motorista <= velocidade_max) {
        printf("Sem Infracao\n");
    } else {
        float excesso = ((velocidade_motorista - velocidade_max) / (float)velocidade_max) * 100;

        if (excesso <= 20) {
            printf("Infracao Media\n");
        } else if (excesso <= 50) {
            printf("Infracao Grave\n");
        } else {
            printf("Infracao Gravissima\n");
        }
    }

    return 0;
}
