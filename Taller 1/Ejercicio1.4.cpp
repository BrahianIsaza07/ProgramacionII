//Escriba un programa que pida una cantidad de dinero en pesos colombianos, calcule y
//muestre su equivalencia en dólares y euros

#include <stdio.h>
#include <math.h>
int main(){

	
float e,d,dolares,p,euros;
	
printf("Ingresa la cantidad de dinero : ");
scanf("%f",&p);


e = 5000;
d = 4800;

dolares = p / d;
euros= p / e;

printf("Pesos colombianos son equivalentes a %f : ",dolares,"dolares");
printf("Pesos colombianos son equivalentes a %f : ",euros," euros");

return 0 ;
}
