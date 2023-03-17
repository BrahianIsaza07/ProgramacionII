//Escriba un programa que pida una cantidad de dinero en pesos colombianos, calcule y
//muestre su equivalencia en dólares y euros

#include <stdio.h>
#include <math.h>
int main(){

	
float euros = 5000,dolares = 4800,monedacol,dolar, euro;
	
printf("Ingresa la cantidad de dinero \n");
scanf("%f",&monedacol);


dolar = monedacol / dolares;
euro= monedacol / euros;

	printf("El equivalente de Cop a USD es :%.2f\n", dolar); 
	printf("El equivalente de cop a EU es :%.2f\n", euro);

return 0 ;
}
