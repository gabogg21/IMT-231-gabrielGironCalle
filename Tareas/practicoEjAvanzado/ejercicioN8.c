#include <stdio.h> 
#include "funciones.h"

int main(void){

    int i=1;
    int inicial=1;
    int fact=0;
    int N;
    while (1) {

        printf("Ingrese un numero entero:\n ");
        scanf("%d", &N);
        if (N<=0){
            break;
        }

        fact= factorial(i,N,inicial);
        printf("El factorial de este numero es: %d\n ",fact);
    
    }


    return 0;
}