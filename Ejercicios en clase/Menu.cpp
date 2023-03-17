#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strlen
#define MAX_LONG_STRING 50

int menu() {
	int opcion;
	printf("\nSelecciona lo que deseas hacer\n\n");
	printf("1. Opcion 1.\n");
	printf("2. Opcion 2.\n");
	printf("3. opcion 3.\n");
	printf("4. Salir\n");
	printf("Escoja una opcion entre 1 y 4: ");
	scanf("%d", &opcion);
	return opcion;	
}

int main() {
	int opcion;
	
	do {
		system("CLS");
		opcion = menu();
		
		switch (opcion) {
			case 1:
				printf("Has Seleccionado la Opcion #1 \n");
				//fflush(stdin);
				break;
			case 2:
				printf("Has Seleccionado la Opcion #2 \n");
				//fflush(stdin);
				break;
			case 3:
				printf("Has Seleccionado la Opcion #3 \n");
				break;
			case 4:
				printf("Has seleccionado Finalizar el menu\n");
				break;
			default:
				printf("Ingreso una opcion incorrecta!!!\n");
				break;
		}
		system("PAUSE");	
	}while(opcion != 4);
	
	return 0;
}
