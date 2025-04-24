#include <stdio.h> 
#include "Funciones.h"
 

int esPrimo(int numeroPrimo){

    return numeroPrimo %numeroPrimo==0 && numeroPrimo %2!=0;

}


int Factorial(int limite){
    int n=1;
    int total=1;
    for(;n<=limite;n++){
        total= total*n;


    }return total;
}


int contarDigitosPares(int digito1){
    int i=1;
    int contadorPares=0;
    for(;i<=digito1;i++){
        if(i%2==0){
            contadorPares= contadorPares+1;
        }
    } return contadorPares;
}

int contarDigitosImpares(int digito2){
    int i2=1;
    int contadorImpares=0;

    for(;i2<=digito2;i2++){
        if(i2 %2!=0){
            contadorImpares= contadorImpares+1;

        }
    }return contadorImpares;
}


