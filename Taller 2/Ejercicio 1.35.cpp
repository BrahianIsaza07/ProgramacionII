#include <stdio.h>

int main(){
	
	int num, num1, mutuo;
	
	printf("Ingresa dos numeros : \n ");
	scanf("%d %d", &num, &num1);
	
	mutuo = (num/10) * (num1/10);
	printf("El producto mutuo de los numeros es: %d\n ", mutuo);
	
	return 0;
}
