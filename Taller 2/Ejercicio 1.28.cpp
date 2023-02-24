#include <stdio.h>
#include <math.h>

// aca determina si un numero es primo 
bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// aqui cuenta la cantidad de dígitos primos en un número
int contarDigitosPrimos(int n) {
    int contador = 0;
    while (n != 0) {
        int digito = n % 10;
        if (esPrimo(digito)) {
            contador++;
        }
        n /= 10;
    }
    return contador;
}

int main() {
    int num1, num2;
    printf("Ingrese dos numeros enteros : ");
    scanf("%d %d", &num1, &num2);
    int cantidadDigitosPrimosNum1 = contarDigitosPrimos(num1);
    int cantidadDigitosPrimosNum2 = contarDigitosPrimos(num2);
    if (cantidadDigitosPrimosNum1 > cantidadDigitosPrimosNum2) {
        printf("%d tiene mayor cantidad de digitos primos que %d\n", num1, num2);
    } else if (cantidadDigitosPrimosNum1 < cantidadDigitosPrimosNum2) {
        printf("%d tiene mayor cantidad de digitos primos que %d\n", num2, num1);
    } else {
        printf("Ambos numeros tienen la misma cantidad de digitos primos\n");
    }
    return 0;
}
