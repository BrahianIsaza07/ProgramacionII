#include <stdio.h>

int main() {
    int num, i, fact = 1;
    printf("Ingresa un numero entero \n ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        fact *= i;
    }

    printf("El factorial de %d ingresado es %d ", num, fact);
    
	
	
	
	return 0;

}
