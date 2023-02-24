#include<stdio.h>


int main (){
	
	int num,dig1,dig2,dig3;
	
	printf("Ingrese un numero de tres digitos :\n" );
	scanf("%d",&num);
	
	dig1 = num / 100;
	dig2 = (num / 10) % 10;
	dig3 = num %10;
	
	printf("Los enteros comprendidos entre 1 y el primer digito %d son: " "\n" ,dig1 );
	
	for(int i = 1; i<= dig1; i++)
	{
		
		printf("%d", i);
					
	}
	
	printf("\n");
	
	printf("Los enteros comprendidos entre 1 y el segundo digito %d son: " "\n" ,dig2 );
	for(int i = 1 ; i<dig2 ; i++)
		{
			
			printf("%d", i);	
			
			}
			
	printf("\n");
			
	printf("Los enteros comprendidos entre 1 y el tercer digito %d son: " "\n" ,dig3 );
	for(int i = 1 ; i < dig3 ; i++)
		{
			
			printf("%d", i);
					
		}
		
	printf("\n");	
	
	return 0;
}
