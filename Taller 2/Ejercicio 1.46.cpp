#include <stdio.h>

int main() {
    int num, i, fact = 1, suma = 0 , prom;
    printf("Ingrese un numero \n ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
        suma += fact;
    }
        fact *= i;
        suma += fact;
   
        fact *= i;
        suma += fact;

        fact *= i;
        suma += fact;
		
		prom = suma / num;
    printf("El promedio de los factoriales de %d  ", prom);
    
   
return 0;
}
