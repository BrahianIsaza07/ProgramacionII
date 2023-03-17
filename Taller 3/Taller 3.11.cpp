#include <stdio.h>

void decriptar(char cadena_cifrada[]) {
    while (*cadena_cifrada != '\0') {
        *cadena_cifrada -= 3;
        cadena_cifrada++;
    }
}

int main() {
    char cadena_cifrada[100];

    printf("Introduce una cadena cifrada: ");
    scanf("%s", cadena_cifrada);

    decriptar(cadena_cifrada);

    printf("La decriptacion de los caracteres digitados es : %s", cadena_cifrada);

    return 0;
}
