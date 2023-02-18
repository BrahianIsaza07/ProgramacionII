#include<stdio.h>


int main(){
	
	int num, resul, resul1, resul2, resul3;
	
	printf(" Ingrese un numero de 3 cifras que desea separar: \n ");
	scanf("%d", &num);
	
	resul = num /100;
	resul1 = num % 100;
	resul2 = resul1 / 10;
	resul3 = resul1 % 10;
	
	printf ("Los dos primeros numeros son: %d%d \n", resul, resul2);
	printf ("Los dos ultimos numeros son : %d%d \n", resul2, resul3);
	printf ("El primer numero es : %d \n", resul);
	printf ("El segundo numero es : %d \n", resul2);
	printf ("El ultimo numero es : %d \n", resul3);
	
	
	
	return 0;
}
