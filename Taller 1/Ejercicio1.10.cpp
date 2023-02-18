#include <stdio.h>

int main(){
    
char suma,resta,multiplicacion,division;
int n,n2;
    printf("Digite un numero : ");
    scanf("%d",&n);
    
    printf("Digite otro numero : ");
    scanf("%d",&n2);

    
suma = (n + n2);
resta = (n - n2);
multiplicacion = (n * n2);
division = (n / n2);
 

 printf("\n La suma es %d :\n ", suma);
 printf("La resta es %d :\n ", resta);
 printf("La multiplicacion es %d : \n ", multiplicacion);
 printf("La division es %d : \n ", division);
 
 
    return 0;
}
