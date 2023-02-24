#include <stdio.h>

int main(){
	
	int num,i;
	
	printf("ingrese un numero entero \n");
	scanf("%d", &num);
	for(i = 1; i <= 10; i++){
		printf("La tabla de multiplicar del numero ingresado es :");
		printf("%d multiplicado %d = %d \n",num, i, num * i);
	}
	 
	
	return 0;
}
