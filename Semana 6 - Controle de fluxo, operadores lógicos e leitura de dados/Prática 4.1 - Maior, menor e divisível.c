#include <stdio.h>

int main() {
    int numeros[5];
    int maior, menor, divisiveis_por_3 = 0;

    // Lê os 5 números e já faz a bagunça: pega maior, menor e conta os divisíveis por 3
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);

        if (i == 0) {
            // Primeiro número serve de base pra tudo
            maior = menor = numeros[i];
        } else {
            if (numeros[i] > maior) maior = numeros[i];
            if (numeros[i] < menor) menor = numeros[i];
        }

        if (numeros[i] % 3 == 0) divisiveis_por_3++;
    }

    // Joga os resultados na tela
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Quantidade de divisiveis por 3: %d\n", divisiveis_por_3);

    return 0;
}
