#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero = 32768 - 1;
    
    while (!esPrimo(numero)) {
        numero--;
    }
    
    printf("El numero primo mas cercano por debajo de 32768 es: %d\n", numero);
    
    return 0;
}
