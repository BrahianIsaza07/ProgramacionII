#include<stdio.h>


int main (){
	
	int num,num1;
	
	printf("Ingrese un numero entero:\n " );
	scanf("%d",&num);
	
	printf("Ingrese un segundo numero entero:\n" );
	scanf("%d",&num1);
	
	printf("Los numeros enteros comprendidos entre %d y %d son : " "\n", num, num1 );
	
	if(num < num1)
	{
		for(int i = num + 1 ; i<num1 ; i++)
		{
		
	printf("%d " "\n" ,i );
		}
					
	}
	else 
	{
	
	for(int i = num1 + 1 ; i<num1 ; i++)
	{
		
	printf("%d " "\n" ,i );
					
		}
	}	
	

	return 0;
}
