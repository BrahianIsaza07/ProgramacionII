#include <stdio.h>

void encriptar(char cadena[]) {
    while (*cadena != '\0') {
        *cadena += 3;
        cadena++;
    }
}

int main() {
    char cadena[100];

    printf("Introduce los caracteres que desea encriptar: ");
    scanf("%s", cadena);

    encriptar(cadena);

    printf("La encriptacion de los caracteres digitados es : %s", cadena);

    return 0;
}
