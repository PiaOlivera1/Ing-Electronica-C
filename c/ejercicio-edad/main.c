#include <stdio.h>
#include <stdlib.h>

/*
Hacer un programa que ingrese un precio y calcule el IVA (21%). 
Mostrar el resultado por pantalla 
*/
int main(void) {
/*	float precio;
	float iva;
	float precioFinal;

	
	printf("Ingrese el precio: ");
	scanf("%f", &precio);
	
	iva = (precio * 21)/100;
	printf("\nel IVA es: %.2f", iva);
	precioFinal = precio +  iva;
	printf("\nEl precio con IVA incluido es: $ %.2f", precioFinal);
	*/
	float precio;
	float descuento;
	float precioFinal;
	
	printf("ingrese el precio :");
	scanf("%f", &precio);
	
	descuento = (precio * 0.09);
	printf(" desciento: %.2f\n", descuento);
	
	precioFinal= precio - descuento;
	printf("precio final : %.2f" ,precioFinal);
	
	
	return 0;
	
	

	
	return 0;
	
	
}
