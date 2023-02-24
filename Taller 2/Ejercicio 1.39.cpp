#include <stdio.h>

int main() {
    int num = 0, num1 = 1, sigteTermino = 0;
    
    // Imprimir los dos primeros términos de la serie
    printf("%d %d ", num, num1);
    
    while (sigteTermino <= 10000) {
        sigteTermino = num + num1;
        
        // Imprimir el siguiente término de la serie
        if (sigteTermino <= 10000) {
            printf("%d ", sigteTermino);
        }
        
        num = num1;
        num1 = sigteTermino;
    }
    
    return 0;
}
