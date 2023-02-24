#include <stdio.h>

int main(){
	
    int numero;
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    printf("Multiplos de 5 entre 1 y %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (i % 5 == 0) {  
            printf("%d\n", i);  
        }
    }

    return 0;
}
	
	
	
	

