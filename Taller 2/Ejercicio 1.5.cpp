#include<stdio.h>


int main (){
	
	int num,num1;
	
	printf("Ingrese un numero entero:\n" );
	scanf("%d",&num);
	
	printf("Ingrese un segundo numero entero:\n" );
	scanf("%d",&num1);
	
	printf("Los numeros terminados en 4 comprendidos entre %d y %d son: " "\n" "\n" ,num ,num1 );
	
	if(num < num1)
	{
		for(int i = num + 1 ; i<num1 ; i++)
		{
			if(i % 10 == 4)
			{
			
				printf("%d", i);
				
			}
		
		}
					
	}
	else 
	{
	
		for(int i = num1 + 1 ; i<num ; i++)
		{
			if(i % 10 == 4)
			{
			
			printf("%d", i);	
			
			}
					
		}
	}	
	
	printf("\n");
	
	
	return 0;
}
