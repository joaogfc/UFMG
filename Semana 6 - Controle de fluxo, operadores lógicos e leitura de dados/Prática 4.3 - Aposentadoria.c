#include <stdio.h>

int main() {
    int idade, tempo;
    char sexo;

    // Lê a idade, o tempo de contribuição e o sexo
    scanf("%d", &idade);
    scanf("%d", &tempo);
    scanf(" %c", &sexo);  // esse espaço antes do %c é pra ignorar o enter anterior

    // Bora ver se o caboclo já pode largar o batente ou não
    if ((sexo == 'M' && idade >= 60 && tempo >= 35) ||
        (sexo == 'F' && idade >= 55 && tempo >= 30) ||
        (sexo == 'M' && idade >= 65) ||
        (sexo == 'F' && idade >= 60)) {
        printf("Pode aposentar\n");
    } else {
        printf("Nao pode aposentar\n");
    }

    return 0;
}
