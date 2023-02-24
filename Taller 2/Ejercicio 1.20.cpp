#include <stdio.h>

int main (){
	
	int num, dig = 0;
	printf("ingrese un numero entero \n");
	scanf("%d", &num);
	
	while(num != 0){
		num /= 10;
		dig++;
			
	}
	printf("El numero ingresado tiene %d digitos: \n ", dig);
	
	
	return 0;
}
