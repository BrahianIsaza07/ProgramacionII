//Escriba un programa que lea del usuario una medida en metros, para mostrarla luego en 
//kil�metros y en cent�metros

#include <stdio.h>

int main(){
    
float m,c2,c1;

    printf("Ingrese la medida en metros que desea convertir : \n ");
    scanf("%f",&m);

    
	c1 = (m / 1000);
	c2 = (m * 100);

 printf("La conversion de metros a km es %.1f : \n", m, c1);
 printf("La conversion de metros a centimetros es %.1f : ", m, c2);
 
    return 0;
}
