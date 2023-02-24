#include<stdio.h>


int main (){
	
	int num;
	
	printf("Ingrese un numero entero:\n " );
	scanf("%d",&num);
	
	printf("Los numeros del 1 al numero  %d son : " "\n",num );

	for(int i = 1 ; i<=num ; i++)
	{
		
	printf("%d " "\n" ,i );
					
	}
	

	return 0;
}
