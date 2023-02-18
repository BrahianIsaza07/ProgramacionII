#include <stdio.h>


int main (){
	
	float metros, pulgadas, pies;
	

	printf(" Ingrese la cantidad de metros que desea convetir : ");
	scanf("%f", &metros);
	
	pies = metros * 3.281;
	pulgadas = metros / 39.37;
	

	printf(" %.2f La cantidad  en metros convertidos a %.2f pies es : ", metros, pies);
	printf("  Y  %.2f La cantidad  en metros convertidos a %.2f pulgadas es : ", metros, pulgadas);
	
	
	return 0;
}
