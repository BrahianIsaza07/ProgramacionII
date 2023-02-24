#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, sigtTermino;
    
    printf("Ingrese un numero de dos digitos: ");
    scanf("%d", &n);
    
    while (sigtTermino < n) {
        sigtTermino = t1 + t2;
        t1 = t2;
        t2 = sigtTermino;
    }
    
    if (sigtTermino == n) {
        printf("%d pertenece a la serie de Fibonacci.", n);
    } else {
        printf("%d no pertenece a la serie de Fibonacci.", n);
    }
    
    return 0;
}
