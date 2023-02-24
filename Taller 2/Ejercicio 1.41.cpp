#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, sigtTermino, sum = 0;
    
    while (t1 <= 100) {
        sum += t1;
        sigtTermino = t1 + t2;
        t1 = t2;
        t2 = sigtTermino;
    }
    
    printf("La suma de los elementos de la serie de Fibonacci entre 0 y 100 es %d.", sum);
    
    return 0;
}
