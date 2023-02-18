//Write a program for: If takes a car 35 seconds to accelerate from zero to 100 Kilometers
//per hour; determine how far the car gets in 20 seconds.
#include <iostream>
#include <stdio.h>
#include <cmath>

int main(){
	
	float v0, v1, a, t, d1, d2, d; 

 	v0= 0 ;
	v1=100/3.6;
	a=v1/35;
	t=20-35;
	d1=0.5*a*35*35;
	d2=v1*t+0.5*a*t*t;
	d=d1+d2;
  	
	
	printf("La distancia recorrida del auto en los primeros 20s es %.1f :", d );
	
	
	return 0;
}
