// {} #
// \n*cac

//aqui no puede haber un int main, ni bucles infinitos
#include <stdio.h> 
#include "funciones.h"
void saludo(void) {

    printf("hola desde la funcion\n");
} 
int suma(int numero1, int numero2){ //este es el prototipo, sin la llave
    int respuesta = numero1 + numero2;

    return respuesta;
}

int resta(int numero3, int numero4){ 
    int resp = numero3 - numero4;

    return resp;
}

int multiplicacion(int numero5, int numero6){ 
    int resp2 = numero5 * numero6;

    return resp2;
}

int division(int numero7, int numero8){ 
    int resp3 = numero7 / numero8;

    return resp3;
}

int par(int num1){
    if (num1 %2 == 0){

    }return printf("El numero es par\n");

}

int impar(int num2){
    if (num2 %2 != 0){

    

    }return printf("El numero es impar\n");
}

