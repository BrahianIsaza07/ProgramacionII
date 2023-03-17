#include <stdio.h>

int entero_rango(int num){
	if(num >= 0 && num <= 255){
		return 0;
	}else{
		return 1;
	}
}
int main(){
	int num;
	
	printf("Digite un numero: ");
	scanf("%d", &num);
	
	int resul = entero_rango(num);
	
	if(resul == 0){
    	printf("El numero %d esta en el rango de 0 y 255 ", num);
    }else{
	    printf("El numero %d esta fuera del rango entre 0 y 255 ", num);
    }
     
	return 0;
	
}
