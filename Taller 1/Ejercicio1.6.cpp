//Escriba un programa que solicite los datos mínimos necesarios para calcular y mostrar el
//área y el volumen de un cilindro.

#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){
	
	double altura, radio, volumen, area;
	
	printf("Ingrese el radio de un cilindro: ");
	scanf("%lf",&radio);
	
	printf("Ingrese la altura de un cilindro: ");
	scanf("%lf",&altura);
	
	
	area = 2 * PI * radio * (radio + altura);
	volumen = PI * pow(radio,2) * altura;
	
	printf("El area de un cilindro es %.2lf \n " ,area);
	printf("El volumen de un cilindro es %.2lf \n " ,volumen);
	
	return 0;
}
