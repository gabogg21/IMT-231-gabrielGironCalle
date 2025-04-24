#include <stdio.h> 
#include "funciones.h"

int main(void){
    int max;
    int min;
    while (1) {

        printf("Ingrese un numero entero:\n ");
        scanf("%d", &max);

        printf("Ingrese otro numero entero:\n ");
        scanf("%d", &min);
        
        if (max==0 && min==0){
            break;
        }
        if (mayor(max,min)){
            printf("El numero mayor es: %d \n", max);  
        }
        if (menor(max,min)){
            printf("El numero mayor es: %d \n", min);  
        }
        if (igual(max,min)){
            printf("ambos numero son iguales\n");  
        }
    }return 0;
}