//Escriba un programa que solicite el radio de una esfera, calcule y muestre el área y el
//volumen de dicha esfera.

#include <stdio.h>


 

int main(){
	
	float a, b, c, area, volumen;
	float pi =3.1416;
	
	printf("Escriba el radio a calcular de una esfera: ");
	scanf("%f",&a);
	
	area = (4 * pi * a*a);
	
	volumen = (4 * pi * a*a*a )/3 ;
	
	printf("El Area de la esfera es %f : ", area); 
	printf("El volumen de la esfera es %f : ", volumen);
	
	
	
	return 0;
}

