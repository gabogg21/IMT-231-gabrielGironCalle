#include <stdio.h> 
#include "funciones.h"
int main(void){
    int a;
    while (1) {
        printf("ingrese un numero:");
        scanf("%d",&a);
        if (a==-1){
            printf("El programa ha finalizado\n");
            break;
        }
        if (parimpar(a)){
            printf("\nEl numero es par\n");

        }else{
            printf("\nEl numero es impar\n");
        } 
    }


    return 0;
}