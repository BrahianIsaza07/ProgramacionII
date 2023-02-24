#include <stdio.h>


int main(){
	
	int num = 10;
	int i = 1, j = 1;
	
	for(int x = 0; x < num; x++){
		printf("%d %d  \n", x , i);
		
		if(x % 2 == 0){
			j++;
			
			
			
		}else{
			i = j;
			
		}		
	}
	
	return 0;
	
}
