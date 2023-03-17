#include <stdio.h>

char tabla_ascii(int num){
	return(char) num;
}

int main(){
	int num ;
	
	printf("Ingrese un numero menor  256 : ");
	scanf("%d", &num);
	
	char caracter = tabla_ascii(num);
	printf("El numero %d en la tabla ASCII es el caracter '%c'\n", num, caracter);
	
	
	
	return 0;
}
