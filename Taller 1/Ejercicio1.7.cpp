//Escriba un programa que calcule el valor neto a pagar por un mes de trabajo, a partir de
//ingresar el nombre del trabajador, su sueldo b�sico mensual y, los d�as trabajados. Tenga
//en cuenta que al trabajador le realizan descuentos por salud y pensi�n con base en los
//montos de ley (neto=salario de los d�as trabajados � salud � pensi�n)

#include<stdio.h>

int main(){
char n;
float basico,salud,pension,neto;
int d;

printf("Digite el nombre : ");
scanf("%s",&n);

printf("Digite los dias trabajados : ");
scanf("%d",&d);

basico = 1160000;
salud = 46400;
pension = 46400; 
neto = basico - (salud + pension);

printf("Su salario neto de este mes es %.1f  : ", neto );
	
return 0 ;
}
