#include <stdio.h>

int main (){
	
	int n, suma=0;
	printf("Ingrese un numero " "\n");
	scanf("%d",&n);
	
	for(int i = 1;i <= n;i++ ){
		suma += i;
	}
	
	printf("La suma de todos los numeros comprendidos entre 1 y %d es : %d\n", n , suma);
	
	
	
	return 0;
}

