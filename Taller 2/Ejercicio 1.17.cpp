#include <stdio.h>

int main() {
    int x, y;
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    int suma_multiplos_2 = 0;
    for (int i = 1; i <= x; i++) {
        suma_multiplos_2 += 2 * i;
    }

    int promedio_multiplos_2 = suma_multiplos_2 / x;
    printf("El promedio de los primeros %d multiplos de 2 es: %d\n", x, promedio_multiplos_2);

    int suma_multiplos_5 = 0;
    for (int i = 1; i <= y; i++) {
        suma_multiplos_5 += 5 * i;
    }

    printf("La suma de los primeros %d multiplos de 5 es: %d\n", y, suma_multiplos_5);

    if (promedio_multiplos_2 > suma_multiplos_5) {
        printf("El promedio de los primeros %d multiplos de 2 es mayor que la suma de los primeros %d multiplos de 5\n", x, y);
    } else {
        printf("El promedio de los primeros %d multiplos de 2 NO es mayor que la suma de los primeros %d multiplos de 5\n", x, y);
    }

    return 0;
}
