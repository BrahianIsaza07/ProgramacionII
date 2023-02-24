#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 1; i <= 20; i++) {
        suma += i * 3; 
    }
    printf("La suma de los primeros 20 multiplos de 3 es: %d\n", suma);

    return 0;
}
