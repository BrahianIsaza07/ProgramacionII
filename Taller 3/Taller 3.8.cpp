#include <stdio.h>

char convertidor_mayuscula(char letra) {
    if (letra >= 'A' && letra <= 'zZ') {
        return letra + ('a' - 'A'); 
    } else {
        return letra; 
    }
}


int main() {
    char letra;
    
    printf("Ingrese una letra mayuscula: ");
    scanf("%c", &letra);
    
    
    printf("la letra ingresada en minuscula es: %c\n", convertidor_mayuscula(letra));
   
    return 0;
    
    
}
