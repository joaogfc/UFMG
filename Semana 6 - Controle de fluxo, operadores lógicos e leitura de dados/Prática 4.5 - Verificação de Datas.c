#include <stdio.h>

int main() {
    int dia, mes, ano;

    // pega a data: dia, mes e ano
    scanf("%d %d %d", &dia, &mes, &ano);

    // checa se o ano, mês ou dia são negativos
    if (dia <= 0 || mes <= 0 || ano <= 0) {
        printf("Data Invalida\n");
        return 0; // sai do programa se a data for inválida
    }

    // define o número de dias por mês, assumindo que fevereiro tem 28 por padrão
    int dias_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // bora checar se o ano é bissexto
    int bissexto = 0;
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        bissexto = 1;
    }

    // se for bissexto, fevereiro tem 29 dias
    if (bissexto) {
        dias_no_mes[2] = 29;
    }

    // agora a gente valida a data: mês tem que ser de 1 a 12, e o dia dentro do que o mês permite
    if (mes >= 1 && mes <= 12 && dia >= 1 && dia <= dias_no_mes[mes]) {
        printf("Data Valida\n");
    } else {
        printf("Data Invalida\n");
    }

    return 0;
}
