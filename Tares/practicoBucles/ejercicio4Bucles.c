#include <stdio.h>
int main(void){
    int i=0;
    int N=0;
    printf("Ingrese un numero entero:\n ");
    scanf("%d", &N);

    while(N!=0){
        N= N /10;
        i++;

    }return printf("El numero de digitos es: %d\n",i);
}