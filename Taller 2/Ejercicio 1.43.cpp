#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, sigtTermino, cont = 0;
    
    while (t1 <= 2000) {
        if (t1 >= 1000) {
            cont++;
        }
        sigtTermino = t1 + t2;
        t1 = t2;
        t2 = sigtTermino;
    }
    
    printf("Hay %d elemento(s) de la serie de Fibonacci entre 1000 y 2000.", cont);
    
    return 0;
}




