#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero entero : ");
    scanf("%d", &numero);
    printf("Los componentes numericos de %d son:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
