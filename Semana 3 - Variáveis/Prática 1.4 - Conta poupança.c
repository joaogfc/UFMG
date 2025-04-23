#include <stdio.h>

int main(int argc, char*argv[]){
    float saldo, mes1, mes2, mes3, juros;
    juros =0.56/100;
    mes1= 789.54;
    mes2=303.20;
    mes3=58.25;
    saldo = mes1 * (1+juros);
    saldo= (saldo + mes2) * (1+juros);
    saldo = (saldo - mes3) * (1 + juros);
    printf("%.2f\n", saldo);
    getchar();
    return 0;
}