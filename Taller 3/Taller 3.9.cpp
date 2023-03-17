#include <stdio.h>
#include <math.h>

float aproximacion(float num, char tipo) {
    if (tipo == 'r') {
        return roundf(num);
    } else if (tipo == 'c') {
        return ceilf(num); 
    } else if (tipo == 'f') {
        return floorf(num); 
    } else {
        printf("Tipo de aproximacion no valido\n");
        return num;
    }
}

int main() {
    float num;
    char tipo;

    printf("Introduce un numero: ");
    scanf("%f", &num);

    printf("Introduce el tipo de aproximacion (r=Redondeo, c=Ascendente, f=Descendente): ");
    scanf(" %c", &tipo);

    printf("El numero aproximado es: %.2f\n", aproximacion(num, tipo));

    return 0;
}

