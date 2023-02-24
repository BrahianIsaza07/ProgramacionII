#include <stdio.h>
#include <stdbool.h>


bool esPrimo(int num) {
	if (num <= 1) {
	return false;
    }

	for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
int main (){
	
	int num, sum = 0;
	printf("ingrese un numero entero \n");
	scanf("%d", &num);
	
	while(num != 0){
		sum += num % 10;
		num /= 10;
			
	}
	if (esPrimo(sum)){
		
	printf("la suma de los digitos (%d) es un numero primo \n ", sum);
		
	}
	else {
		
	printf("la suma de los digitos (%d) no es un numero primo ", sum);
		
	}
	
	
	return 0;
}
