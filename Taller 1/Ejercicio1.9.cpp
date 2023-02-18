//Escriba un programa que lea del usuario una cantidad en KiloBytes, para mostrarla luego 
//en GigaBytes y en bits.

#include <stdio.h>

int main (){
	
	float kbyte, gbyte, bits;
   
    printf(" Ingrese un valor en KiloByte : ");
	scanf("%f",&kbyte);
	
    gbyte = kbyte/1000000;
    bits = kbyte*8000;
    
	printf(" El valor en Gigabytes es : %f", gbyte);
	printf(" Y la cantidad en Bits es : %f", bits);
	
	
	return 0;
} 
