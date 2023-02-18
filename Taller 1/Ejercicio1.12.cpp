#include <stdio.h>
#include <math.h>


int main(){

	const double litrosGalones = 0.264172;
	const double precioCorriente = 10.000;
	const double precioExtra = 16.000;
	double distanciaKm;
	double consumoKm;
	
	printf("Ingresa la distancia a recorrer en kilómetros (KM) por litros : \n");
	scanf("lf%",&distanciaKm);
	printf("Ingresa el consumo promedio de gasolina en kilometros por litro :");
	scanf("lf%",&consumoKm);
	
	double litrosNecesarios = distanciaKm / consumoKm;
	double galonesNecesarios = litrosNecesarios * litrosGalones;
	double costoExtra = galonesNecesarios * precioExtra;
	double costoCorriente = galonesNecesarios * precioCorriente;
	
	printf("La cantidad de galones necesarios son : %.2lf galones \n ", galonesNecesarios);
	printf("Valor de gasolina corriente  : %.2lf \n ", costoCorriente);
	printf("Valor de gasolina extra : %.2lf galones \n ", costoExtra);
	
	return 0;
}
