#include <stdio.h> 
#include "funciones.h"


int main(void){

    int a =0;
    printf("ingrese un numero: \n");
    
    while (1) {
        if (a %2==0){
            int resultado=par(a);
            printf(resultado);

        }else{
            int resultado2=impar(a);
            printf(resultado2);
        } if (a==-1){
            break;
        }
    }


    return 0;
}