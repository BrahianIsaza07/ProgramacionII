#include <stdio.h>

int main(){
	
	int num, i, j, fact = 1;
	
	printf("Digite un numero \n");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		for(j = 1; j <= i; j++){
			fact *= j;
		}
		printf("El factorial de %d es %d\n ",i, fact);
			
	}
	return 0;
}
