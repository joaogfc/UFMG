#include <stdio.h>


int main(int argc, char *argv[]){
    float pesoBrutus, alturaBrutus, pesoIdealBrutus, pesoOlivia, alturaOlivia, pesoIdealOlivia;
    alturaBrutus= 1.84;
    pesoBrutus=122;
    alturaOlivia=1.76;
    pesoOlivia=45;

     pesoIdealBrutus =25*alturaBrutus*alturaBrutus;
     pesoIdealOlivia= 18.5*alturaOlivia*alturaOlivia;

     printf("%.1f ", pesoBrutus - pesoIdealBrutus);
     printf("%.1f\n", pesoIdealOlivia-pesoOlivia);
     getchar();
     return 0;
}