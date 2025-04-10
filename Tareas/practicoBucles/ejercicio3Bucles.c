#include <stdio.h>
int main(void){
    int N=0;
    
    printf("Ingrese un numero:\n ");
    scanf("%d", &N);
    printf("La tabla del 1 al 10 del numero es:\n");

    for (int i=1; i<=10;i++){
        printf("%d\n",N*i );
       
    }
    return  0;
    
   
} 
