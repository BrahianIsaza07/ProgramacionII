#include <stdio.h>
#include <math.h>

int potencia(int a, int b){
	int i, pot = a;
	for(i = 1; i < b; i++){
		pot *= a;
	}
	return pot;
}

int main(){
	int a, b;
	
	printf("Digite un numero para a: ");
	scanf("%d", &a);
	
	printf("Digite un numero para b: ");
	scanf("%d", &b);
	
	printf("El %d elevado a %d es igual a %d", a,b, potencia(a, b));
	
	return 0;
}
