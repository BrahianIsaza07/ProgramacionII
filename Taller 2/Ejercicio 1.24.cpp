#include <stdio.h>

int main (){
	
	int num, sum = 0,resi;
	printf("ingrese un numero entero \n");
	scanf("%d", &num);
	
	while(num != 0){
		resi= num % 10;
	
		if(resi % 2 == 0){
			sum += resi; 
		}
			num /= 10;
			
	}
	printf("la suma de los digitos pares es : %d ", sum);
	
	
	return 0;
}
