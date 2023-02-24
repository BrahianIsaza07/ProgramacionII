#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero entero de 3 digitos: ");
    scanf("%d", &numero);

    int digito1 = numero / 100;   
    int digito2 = (numero / 10) % 10;  
    int digito3 = numero % 10;    

    if (digito1 == 1 || digito2 == 1 || digito3 == 1) {
        printf("El numero %d tiene el digito 1\n", numero);
    } else {
        printf("El numero %d no tiene el digito 1\n", numero);
    }

    return 0;
}

