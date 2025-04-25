#include <stdio.h>

int main() {
    float a, b, c;

    // lê os três lados do triângulo
    scanf("%f %f %f", &a, &b, &c);

    // primeiro a gente vê se algum valor é inválido (negativo ou zero)
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Valores invalidos\n");
    }
    // agora sim, bora ver se forma um triângulo
    else if (a >= b + c || b >= a + c || c >= a + b) {
        printf("Triangulo invalido\n");
    }
    else {
        // se os três lados forem iguais, é equilátero
        if (a == b && b == c) {
            printf("Triangulo equilatero\n");
        }
        // se dois lados forem iguais, é isósceles
        else if (a == b || b == c || a == c) {
            printf("Triangulo isosceles\n");
        }
        // se todos os lados forem diferentes, é escaleno
        else {
            printf("Triangulo escaleno\n");
        }
    }

    return 0;
}
