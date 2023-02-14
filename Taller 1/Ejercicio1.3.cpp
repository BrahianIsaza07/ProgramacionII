#include<stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Ingrese la base de el triangulo: ");
	scanf("%d",&a);
	
	printf("Ingrese la altura de el triangulo: ");
	scanf("%d",&b);
	
	
	c = (a * b) / 2;
	
	printf("El area del triangulo es %d : ",c);
	
	return 0;
}
