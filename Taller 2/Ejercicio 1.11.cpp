#include <stdio.h>


 int main(){
	int n;
	printf("Ingrese un numero de dos digitos " );
	scanf("%d",&n);
	
int digito1 = n / 10;
int digito2 = n % 10;

    printf("Los numeros comprendidos entre %d y %d son:\n", digito1, digito2);
    if (digito1 < digito2) {
        for (int i = digito1 + 1; i < digito2; i++) {
            printf("%d\n", i);
        }
    } else {
        for (int i = digito2 + 1; i < digito1; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
 
