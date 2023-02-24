#include <stdio.h>

int main() {
    int numero1, numero2;
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &numero2);
    int menor = (numero1 < numero2)  ? numero1 : numero2;
    int mayor = (numero1 > numero2) ? numero1 : numero2;
    printf("Los multiplos de 5 entre %d y %d son:\n", menor, mayor);
    for (int i = menor; i <= mayor; i++) {
    	
        if (i % 5 == 0) {
        	
            printf("%d\n", i);
        }
    }
    return 0;
}
