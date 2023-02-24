#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero n: ");
    scanf("%d", &n);

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += 3 * i;
    }

    int promedio = suma / n;
    printf("El promedio entero de los primeros %d multiplos de 3 es: %d\n", n, promedio);

    return 0;
}
