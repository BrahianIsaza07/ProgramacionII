//Escriba un programa que solicite los datos m�nimos necesarios para calcular y mostrar el
//�rea y el volumen de un cilindro.

#include<stdio.h>

int main(){
	
	float a, r, volumen, altura, pi;
	pi= 3,1416;
	
	printf("Ingrese la altura de un cilindro: ");
	scanf("%f",&a);
	
	printf("Ingrese el radio de un cilindro: ");
	scanf("%f",&r);
	
	
	altura = (2 * pi * r * (r + a));
	volumen = (pi * ( r * r) * a);
	
	printf("El area de un cilindro es %f : " ,altura);
	printf("El volumen de un cilindro es %f : " ,volumen);
	
	return 0;
}
