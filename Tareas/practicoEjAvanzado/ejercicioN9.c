#include <stdio.h>
#include "funciones.h"

int main(void) {
    int numero;

    while (1) {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &numero);

        if (numero < 10) {
            printf("Programa finalizado\n");
            break;
        }

        int resultado = invertirNumero(numero);
        printf("El numero invertido es: %d\n", resultado);
    }

    return 0;
}
