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

int parimpar(int num1){
    return num1%2==0;
}

int digitos(int numing, int cont){
    while(numing!=0){
        numing= numing /10;
        cont++;
    }

    return cont;
}

int sumaint(int numint, int cont2){

    if(numint >=0){
        cont2 = cont2 + numint;
    }
    return cont2;
}

int mayor(int may, int men){
    
        return may>men;   
}

int menor(int may2, int men2){
    
    return may2<men2;
}

int igual(int may3, int men3){
    
    return may3==men3;
}

int multiplosDe3(int numb, int cont3){
    if(numb %3==0){
        cont3++;
    }
    return cont3;
}

int factorial(int n, int limite,int total){
    for(;n<=limite;n++){
        total= total*n;


    }return total;
}

int invertirNumero(int n){
    int invertido = 0;

    for (; n > 0; n= n/10) {
        invertido = invertido * 10 + n % 10;
    }

    return invertido;
}