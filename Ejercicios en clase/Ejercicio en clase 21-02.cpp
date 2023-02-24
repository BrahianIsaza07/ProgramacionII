#include <stdio.h>
#include <string.h>
#define MAX_LONG_STRING 50


int main()
{
	float sal, aum, nuevo_sal;
	
	char name[MAX_LONG_STRING];
	printf("Ingrese su nombre :  \n ");
	fgets(name, 50, stdin);
	
	printf("Ingrese el salario del colaborador : \n ");
	scanf("%f", &sal);
	
	if(sal < 1000000){
		sal *= 1.07;

	}else if (sal <= 1500000){
		
		sal *= 1.10;
	}else{
		
		sal *= 1.12;
		
	}
	
	
	printf("El aumento de %sal es de un %.2f%% ,  y Equivale a $ %.2f pesos. \n", name, (aum/sal) * 100, aum);
	printf("El salario nuevo es de %sal es %.2f%% ",name , nuevo_sal);
	
		
	
	
	return 0;
	
	
	
}
