//Escriba un programa que calcule el valor neto a pagar por un mes de trabajo, a partir de
//ingresar el nombre del trabajador, su sueldo básico mensual y, los días trabajados. Tenga
//en cuenta que al trabajador le realizan descuentos por salud y pensión con base en los
//montos de ley (neto=salario de los días trabajados – salud – pensión)

#include <stdio.h>
#include <string.h>

	float calcularSalario(char nombre[], float sueldoBasico, int diasTrabajados){
    float salarioBruto = sueldoBasico * diasTrabajados;
    float descuentoSalud = salarioBruto * 0.04;
    float descuentoPension = salarioBruto * 0.04;
    float salarioNeto = salarioBruto - descuentoPension - descuentoSalud;

    return salarioNeto;
}

int main() {
    char nombre[50];
    float sueldoBasico;
    int diasTrabajados;

    printf("Ingresa el nombre del Colaborador: \n");
    scanf("%s", nombre);
    printf("Ingresa el salario basico mensual: \n");
    scanf("%f", &sueldoBasico);
    printf("Ingresa los dias laborados: \n");
    scanf("%d", &diasTrabajados);

    float salarioNeto = calcularSalario(nombre, sueldoBasico, diasTrabajados);
    printf("El salario de %s es de %.2f.\n", nombre, salarioNeto);

    return 0;
}
