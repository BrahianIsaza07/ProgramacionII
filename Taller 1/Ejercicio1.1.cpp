//Write a program for: The temperature is 35o C; convert this temperature into Fahrenheit.

#include <stdio.h>



 int main(){
 	
 	int a;
 	
 	printf("Ingresa la temperatura que deseas convertir : " );
 	scanf("%d" , &a);
 	
 	
 	int TempF =  (a * 9/5) + 32;
 	
 	
 	
 	printf ("La convercion de celcius a Fahrenheit es  : %d ", TempF );
 	
 	return 0;
 }
