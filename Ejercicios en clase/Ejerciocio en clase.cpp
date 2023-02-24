#include <stdio.h>


int main (){
	
	int number;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &number);
	
	if( number % 2 == 0){
		
		printf("El numero ingresado es par");
			
	}else{
		printf("el numero ingresado es impar");
		
	}
	
	return 0;
	
}
