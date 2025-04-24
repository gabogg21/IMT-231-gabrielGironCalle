#include <stdio.h>
#include "funciones.h"


typedef enum { ROJO, VERDE, AMARILLO} Semaforo;

void mostrarColor(Semaforo c) {
    switch (c) {
        case ROJO:

        printf(" ROJO ");
        break;
        case VERDE:
        printf(" VERDE ");
        break;
        case AMARILLO:
        printf(" AMARILLO \n");
        break;
        default:
        printf("Color no reconocido");
        break;
    }
}

int main() {

    int i=0;

    while(i<=9){
        Semaforo Color1= ROJO;
        mostrarColor(Color1);

        Semaforo Color2= VERDE;
        mostrarColor(Color2);

        Semaforo Color3= AMARILLO;
        mostrarColor(Color3);

        i++;

    }

   }