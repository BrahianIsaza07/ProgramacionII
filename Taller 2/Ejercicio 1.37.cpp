#include <stdio.h>

int main(){
	
	int num, num1;
	for(num = 1; num <= 10; num++){
		printf("Tabla del %d \n ", num);
		for(num1 = 1; num1 <= 10; num1++){
			printf("%d x %d = %d\n ", num, num1, num * num1);
			
		}
		printf("\n");
	}
	
	return 0;
}
