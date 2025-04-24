#include <stdio.h>
#include "Funciones.h"
#define MSJ1  "Ingrese un numero entero positivo:\n"

int main(void) {

    int num1;
    int opcion;

    while(318461489416318){

        printf("\n------ MENÚ ------\n");
        printf("1. Verificar si un número es primo.\n");
        printf("2. Calcular el factorial de un número.\n");
        printf("3. Contar números pares e impares entre 1 y N.\n");
        printf("4. Mostrar múltiplos de 3 entre 1 y N.\n");
        printf("5. Salir del programa.\n");
    
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
    
        switch (opcion) {
            case 1:
           
                printf(MSJ1);
                scanf("%d",&num1);
                if(esPrimo(num1)){
                    printf("El numero es primo\n");

                }
                if(num1%3==0 || num1%2==0){
                    printf("El numero no es primo\n");
                }
    
                break;

            case 2:
        
                printf(MSJ1);
                scanf("%d",&num1);
                int resultado=Factorial(num1);
                printf("El factorial del numero ingresado es:%d\n",resultado);
                break;
        
            case 3:

                printf(MSJ1);
                scanf("%d",&num1);
                int resultado2=contarDigitosPares(num1);
                int resultado3=contarDigitosImpares(num1);
                printf("La cantidad de numeros pares es: %d\n",resultado2);
                printf("La cantidad de numeros impares es: %d\n",resultado3);
                break;

        
        case 4:
        
            printf(MSJ1);
            scanf("%d",&num1);
            int i=1;

            for(;i<=num1;i++){
                if(i%3==0){
                    printf("Los multiplos son: %d\n",i);
                    }
                }
            break;

            case 5:
                printf("Saliendo del Programa\n");
                return 0;
    
            default:
                printf("Opción no valida ingrese un numero positivo\n");
                break;
            }


    }
}