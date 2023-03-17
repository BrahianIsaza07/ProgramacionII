#include <stdio.h>
#include <math.h>

double raiz(double a, double b) {
    double res = pow(b, a);
    return res;
}

int main() {
    int a, b;
    float res;
    printf("Ingrese un numero para b: ");
	scanf("%d", &b);
	
	printf("Ingrese un numero para a: ");
	scanf("%d", &a);
	
    res = pow(b, 1.0/a);
    printf("La raiz %d de %d es %.1f\n", a, b, res);
    
    
    
    return 0;

}
