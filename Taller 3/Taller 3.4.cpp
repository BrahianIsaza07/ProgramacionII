#include <stdio.h>

int tabla_ascii(char caracter){
	return (int) caracter;
}
int main(){
	char caracter;
	int resul = tabla_ascii(caracter);
	printf("Ingrese el simbolo que desea consultar: ");
	scanf("%c", &resul);

	printf("El caracter '%c' en la tabla ASCII es el numero %d\n",caracter, resul );
	
	
	
	return 0;
}
