//Escriba un programa que solicite el radio de una esfera, calcule y muestre el área y el
//volumen de dicha esfera.

#include <stdio.h>
#define PI 3.1416

 

int main(){
	
	float a, b, c, area, volumen;
	
	printf("Escriba el radio a calcular de una esfera \n");
	scanf("%f",&a);
	
	area = (4 * PI * a*a);
	
	volumen = (4 * PI * a*a*a )/3 ;
	
	printf("El Area de la esfera es : %.2f \n ", area); 
	printf("El volumen de la esfera es : %.2f", volumen);
	
	
	
	return 0;
}

