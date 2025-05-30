#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*Hacer un programa que ingrese un precio y calcule el IVA (21%). 
	Mostrar el resultado por pantalla */
	
	float precio;
	float porcentajeIva =21;
	float iva;
	float precioFinal;
	
	printf ("Ingrese el valor de la compra: \n");
	scanf("%f", &precio);
	
	iva = (precio * porcentajeIva)/100;
	precioFinal = precio + iva;
	
	printf("El precio final con IVA incluido es de : $ %.2f",precioFinal);
	
	
	return 0;
}
