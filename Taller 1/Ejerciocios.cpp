#include <stdio.h>

int main (){
	
	
	int a;
	printf("Ingrese un numero de 3 ciffras: ");
	scanf("%d", &a);
	
	int b,c,d;	
	
	b = a / 100;
	c = (a % 100) / 10;
	d = (a % 100) % 10;
	printf("El Numero %d al reves es %d%d%d", a, d, c, b);

	
	return 0;

}
