#include <stdio.h> 
#include "funciones.h"

int main(void){

    int suma=0;
    int num;
    while (1) {

        printf("Ingrese un numero entero positivo:\n ");
        scanf("%d", &num);
        suma = sumaint(num,suma);

        if (num==){
            break;
        }
       
    
    }
    printf("La suma total es: %d\n",suma);


    return 0;
}