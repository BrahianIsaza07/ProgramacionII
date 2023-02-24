#include <stdio.h>

int main() {
    int numero, contador = 0;
    float suma = 0.0;
    
    printf("Ingrese numeros enteros terminados en 5 (o 0 para terminar):\n");
    while (scanf("%d", &numero) == 1 && numero != 0) {
        if (numero % 10 == 5) {
            suma += numero;
            contador++;
        }
    }
    
    if (contador > 0) {
        float promedio = suma / contador;
        printf("El promedio de los numeros terminados en 5 es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron numeros terminados en 5\n");
    }
    
    return 0;
}
