#include <stdio.h>
int main(void){
        int numberA=0;
        int numberB=0;
        
        printf("Ingrese el primer numero\n ");
        scanf( "%d", &numberA);
        printf("ingrese el segundo numero\n ");
        scanf( "%d", &numberB);
        
        if(numberA > numberB){
                printf("El numero mayor es: %d \n", numberA);

        }                 
        if(numberB > numberA){
                printf("El numero mayor es: %d \n", numberB);

        }   
        if(numberA == numberB){
                printf("Ambos numeros son iguales: %d \n ", numberA);
        }                
        return 0;
             

}
 
