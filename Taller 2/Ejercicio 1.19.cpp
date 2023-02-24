#include <stdio.h>
#include <stdbool.h>


bool es_primo(int num) {
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
	int num;
	
	printf("Ingrese un numero entero \n");
	scanf("%d", &num);
	
	if(es_primo(num)){
		printf("%d es un numero primo\n", num);
		
	} else {
		printf("%d no es un numero primo\n",num);
		
		return 0;
	}
	}	
	

