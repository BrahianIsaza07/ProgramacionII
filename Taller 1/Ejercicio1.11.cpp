//Escriba un programa que calcule la pendiente de una recta, a partir de indicar las coordenadas enteras de dos puntos de la recta
 #include <stdio.h>
 
 int main (){
 	
 	
	float x1,x2,y1,y2;
	float m; 	 
	
 	printf("Ingrese las coordenadas del primer punto en X : ");
 	scanf("%d",&x1);
 	 
 	printf("Ingrese las coordenadas del primer punto en Y: ");
 	scanf("%d",&y1);
 	
 	printf("Ingrese las coordenadas del segundo punto en X : ");
 	scanf("%d",&x2);
 	
 	printf("Ingrese las coordenadas del segundo punto en Y  : ");
 	scanf("%d",&y2);
 	
	m = (y2-y1)/(x2-x1);	

	printf("La Pendiente de la recta es  %.2f : ",m);
 	
 	return 0 ;
 }
