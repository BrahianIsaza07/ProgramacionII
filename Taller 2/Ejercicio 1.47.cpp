#include <stdio.h>

int factorial(int num){

	if (num == 0){
			
		return 1;
	}else {
		
		return num * factorial(num -1);
			
	}

}

int main(){
	int num, a;
	int suma = 0;
	
	printf("Digite un numero entero \n");
	scanf("%d", &num);
	
	
	for(a = 1; a <= num; a++){
		suma += factorial(a);
		
		printf("La Suma de los numeros factoriales es %d \n", suma);
		
		
		
	}
	
		
	
	return 0;
}
