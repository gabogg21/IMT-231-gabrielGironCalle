c#include <stdio.h>
#include "funciones.h"
#define MSJ1  "Ingrese el primer numero \n"
#define MSJ2  "Ingrese el segundo numero \n"

int main(){
   
    int num1 =0;
    int num2= 0;
    int opcion;

    while(1){

        printf("\n------ MENÚ ------\n");
        printf("1. Sumar 2 numeros\n");
        printf("2. Restar 2 numeros\n");
        printf("3. Multiplicar 2 numeros\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
               
            printf(MSJ1);
            scanf("%d",&num1);
            printf(MSJ2);
            scanf("%d",&num2);
            int resultado=suma(num1,num2);
            printf("la suma es: %d\n",resultado);
            break;
    
            case 2:
            
            printf(MSJ1);
            scanf("%d",&num1);
            printf(MSJ2);
            scanf("%d",&num2);
            int resultado2=resta(num1,num2);
            printf("la suma es: %d\n",resultado2);
            break;
            
            case 3:

                printf(MSJ1);
                scanf("%d",&num1);
                printf(MSJ2);
                scanf("%d",&num2);
                int resultado3=multiplicacion(num1,num2);
                printf("la suma es: %d\n",resultado3);
                break;
        
            case 4:
                printf("Saliendo\n");
                return 0;
        
            default:
                printf("Opción no válida\n");
                break;
    
        }
        
       
    }
  
   
}
    