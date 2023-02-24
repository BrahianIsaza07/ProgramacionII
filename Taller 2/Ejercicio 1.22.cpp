#include <stdio.h>

int main (){
	
	int num, cont = 0;
	printf("ingrese un numero entero \n");
	scanf("%d", &num);

	while(num != 0){
		int dig = num % 10;
		if (dig == 1){
			
			cont++;
		}
		
		num /= 10;
			
	}
	printf("El numero 1 aparece %d veces: \n ", cont);
	
	
	return 0;
}
