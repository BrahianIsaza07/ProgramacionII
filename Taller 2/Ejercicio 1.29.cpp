#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero entero \n");
    scanf("%d", &numero);
    while (numero >= 10) {
        numero /= 10;
    }
    printf("El primer digito del numero es %d\n", numero);
    return 0;
}
