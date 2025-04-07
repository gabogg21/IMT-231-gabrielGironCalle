// {} #
// \n*
#include <stdio.h> 
#include "funciones.h"

#define MENU  "1. Para suma\n2. Para resta\n3. Para multiplicacion\n4. Para division\n"
#define MSJ1  "Ingrese el primer numero \n"
#define MSJ2  "Ingrese el segundo numero \n"

void saludo(void);

int main(void){

    saludo();

    int a =0;
    int b= 0;
    int opcion=0;
    while (1) {

        printf(MENU);
        scanf("%d",&opcion);

        if(opcion ==1){

            printf(MSJ1);
            scanf("%d",&a);
            printf(MSJ2);
            scanf("%d",&b);
            int resultado=suma(a,b);
            printf("la suma es: %d\n",resultado);
        }
        if(opcion ==2){

            printf(MSJ1);
            scanf("%d",&a);
            printf(MSJ2);
            scanf("%d",&b);
            int resultado2=resta(a,b);
            printf("la resta es: %d\n",resultado2);
        }

        if(opcion ==3){

            printf(MSJ1);
            scanf("%d",&a);
            printf(MSJ2);
            scanf("%d",&b);
            int resultado3=multiplicacion(a,b);
            printf("la multiplicacion es: %d\n",resultado3);
        }

        if(opcion ==4){

            printf(MSJ1);
            scanf("%d",&a);
            printf(MSJ2);
            scanf("%d",&b);
            int resultado4=division(a,b);
            printf("la division es: %d\n",resultado4);
        }

        if(opcion ==5){
            break;
        }

    }


    return 0;
}
