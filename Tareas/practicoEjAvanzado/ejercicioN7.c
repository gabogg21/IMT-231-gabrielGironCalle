#include <stdio.h> 
#include "funciones.h"

int main(void){
    int mult3=0;
    int num;
    while (1) {
        printf("Ingrese un numero:\n ");
        scanf("%d", &num);
        mult3 = multiplosDe3(num,mult3);

        if (num==-1){
            break;
        }
    }
    printf("La cantidad de multiplos de 3 es: %d\n",mult3);
    return 0;
}