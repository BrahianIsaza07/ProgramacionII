#include <stdio.h>


int main(){
	
	int num = 8;
	int num1 = 1;
	
	for(int x = 0; x < num; x++){
		printf("%d %d  \n", x , num1);
		
		if(x % 4 == 3){
			num1++;
	}
	}
	
	return 0;
}
