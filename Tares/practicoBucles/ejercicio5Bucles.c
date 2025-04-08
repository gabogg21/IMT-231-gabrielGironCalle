#include <stdio.h>
int main(void){
    char N[100];
    int i=0;
    int reves =0;
    printf("Ingrese una palabra:\n ");
    scanf("%s",N);
    while (N[reves]!='\0'){
        reves++;
    }
    printf("La palabra al reves es: \n");

    for (i= reves; i>=0;i--){
        printf("%c", N[i]);

    }
    printf("\n");
    return 0;
    
    
   
} 
