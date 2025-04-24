#include <stdio.h>
int main(void){
    
    int N=0;
    int suma=0;
    printf("Ingrese un numero:\n ");
    scanf("%d", &N);
    printf("La suma es:\n");

    for (int i=1; i<=N;){
        suma= suma + i;
        i++;
    }
    return  printf("%d\n", suma);
    
   
} 
