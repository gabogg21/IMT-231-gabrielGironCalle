#include <stdio.h> 
#include "funciones.h"

int main(void){

    int i=0;
    int N;
    while (1) {
        if (N==0){
            break;
        }
        printf("Ingrese un numero entero:\n ");
        scanf("%d", &N);
        printf("El numero de digitos es: %d\n",digitos(N,i));
    
    }


    return 0;
}