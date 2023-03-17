#include <stdio.h>
#include <math.h>

// Funciones definidas
int potencia(int a, int b);
double raiz(double a, double b);
char tabla_ascii(int num);
int tabla_ascii_char(char caracter);
int entero_rango(int num);
char convertidor_mayuscula(char letra);
float aproximacion(float num, char tipo);
void encriptar(char cadena[]);
void decriptar(char cadena_cifrada[]);

int main() {
    // Ejemplo de uso de las funciones
    
    // Función potencia
    int base = 2, exponente = 5;
    int resultado_potencia = potencia(base, exponente);
    printf("%d elevado a la %d es igual a %d\n", base, exponente, resultado_potencia);
    
    // Función raiz
    double base_raiz = 2, exponente_raiz = 5;
    double resultado_raiz = raiz(base_raiz, exponente_raiz);
    printf("La raiz %lf de %lf es igual a %lf\n", exponente_raiz, base_raiz, resultado_raiz);
    
    // Función tabla_ascii
    int numero_ascii = 65;
    char caracter_ascii = tabla_ascii(numero_ascii);
    printf("El codigo ASCII %d corresponde al caracter '%c'\n", numero_ascii, caracter_ascii);
    
    // Función tabla_ascii_char
    char caracter_ascii2 = 'A';
    int numero_ascii2 = tabla_ascii_char(caracter_ascii2);
    printf("El caracter '%c' corresponde al codigo ASCII %d\n", caracter_ascii2, numero_ascii2);
    
    // Función entero_rango
    int numero_entero = 128;
    int resultado_entero_rango = entero_rango(numero_entero);
    if (resultado_entero_rango == 0) {
        printf("El numero %d esta en el rango de 0 a 255\n", numero_entero);
    } else {
        printf("El numero %d no esta en el rango de 0 a 255\n", numero_entero);
    }
    
    // Función convertidor_mayuscula
    char letra_minuscula = 'd';
    char letra_mayuscula = convertidor_mayuscula(letra_minuscula);
    printf("La letra '%c' en mayuscula es '%c'\n", letra_minuscula, letra_mayuscula);
    
    // Función aproximacion
    float numero_aproximacion = 3.14159;
    char tipo_aproximacion = 'f';
    float resultado_aproximacion = aproximacion(numero_aproximacion, tipo_aproximacion);
    printf("El numero %f aproximado al tipo '%c' es igual a %f\n", numero_aproximacion, tipo_aproximacion, resultado_aproximacion);
    
    // Función encriptar
    char cadena[] = "hola mundo";
    printf("Cadena original: %s\n", cadena);
    encriptar(cadena);
    printf("Cadena encriptada: %s\n", cadena);
    
    // Función decriptar
    char cadena_cifrada[] = "krod pxqgrd";
    printf("Cadena cifrada: %s\n", cadena_cifrada);
    decriptar(cadena_cifrada);
    printf("Cadena desencriptada: %s\n",cadena_cifrada);

	return 0;    
    
}


