#include <stdio.h>

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int numero, contador = 0, suma = 0;
    
    printf("Ingrese numeros enteros (o 0 para terminar):\n");
    while (scanf("%d", &numero) == 1 && numero != 0) {
        if (esPrimo(numero)) {
            suma += numero;
            contador++;
        }
    }
    
    printf("%s\n", contador > 0 ? "El promedio entero de los numeros primos es: " : "No se ingresaron numeros primos");
    if (contador > 0) printf("%d\n", suma / contador);
    
    return 0;
}
