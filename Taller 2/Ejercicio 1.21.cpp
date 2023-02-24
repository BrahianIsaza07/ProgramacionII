#include <stdio.h>

int main (){
	
	int num, sum = 0;
	printf("ingrese un numero entero \n");
	scanf("%d", &num);
	
	while(num != 0){
		sum += num % 10;
		num /= 10;
			
	}
	printf("la suma de los digitos es: %d ", sum);
	
	
	return 0;
}
