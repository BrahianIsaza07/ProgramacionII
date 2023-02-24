#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, sigtTermino, sum = 0, cont = 0;
    double promedio;
    
    while (t1 <= 1000) {
        sum += t1;
        cont++;
        sigtTermino = t1 + t2;
        t1 = t2;
        t2 = sigtTermino;
    }
    
    promedio = (double)sum / cont;
    
    printf("El promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000 es %d.", (int)promedio);
    
    return 0;
}
