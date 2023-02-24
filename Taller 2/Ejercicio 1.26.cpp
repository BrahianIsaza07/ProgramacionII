#include <stdio.h>
#include <math.h>

int main(){
	
	int num, digito, maximo = 0;
	
	printf("Ingresa un numero: \n ");
	scanf("%d", &num);
	
	while(num > 0){
	
		digito = num % 10;
		if(digito > maximo){
			maximo = digito;
		}
		
		num /= 10;
	}
	
	
	printf("El numero mayor del numero ingresado es : %d\n ",maximo);
	
	return 0;
}
