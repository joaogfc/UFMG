// função que arredonda um float na moral, sem usar math.h
float arredonda(float num) {
    // se o número for positivo, soma 0.5 pra ver se passa pro próximo inteiro
    // ex: 2.6 + 0.5 = 3.1 -> vira 3 quando vira int
    // ex: 2.4 + 0.5 = 2.9 -> vira 2
    if (num >= 0) {
        return (float)((int)(num + 0.5));
    } else {
        // se for negativo, a treta inverte — a gente tem que subtrair 0.5 pra arredondar pra baixo
        // ex: -2.6 - 0.5 = -3.1 -> vira -3
        // ex: -2.4 - 0.5 = -2.9 -> vira -2
        return (float)((int)(num - 0.5));
    }
}
