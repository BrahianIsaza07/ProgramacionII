#include <stdio.h>

char convertidor_mayuscula(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return letra - ('a' - 'A'); 
    } else {
        return letra; 
    }
}

//char convertidor_minuscula(char letra) {
    //if (letra >= 'A' && letra <= 'Z') {
        //return letra + 'a' + 'A'; 
    //} 
      //  return letra; 
    
//}

int main() {
    char letra;
    printf("Ingrese una letra minuscula: ");
    scanf("%c", &letra);
    
    //if(convertidor_mayuscula){
    	//printf("La letra en mayuscula es: %c",convertidor_minuscula(letra));
    		
	//}else if (convertidor_minuscula){
		//printf("La letra en miniscula es: %c",convertidor_mayuscula(letra));
		
	//}
     
    printf("la letra ingresada en mayuscula es: %c\n", convertidor_mayuscula(letra));
    return 0;
}
