#include <stdio.h>
#include <stdlib.h>
/*Hacer un programa que ingrese un precio y calcule un descuento del 9%. 
Mostrar por pantalla el descuento y el precio final.*/
int main(void) {
	
	float precio;
	float porcentaje =9;
	float descuento;
	float precio_con_Descuento;
	
	printf ("Ingrese el precio: ");
	scanf("%f", &precio);
	
	descuento = (precio * porcentaje)/100;
	
	precio_con_Descuento = precio - descuento;
	printf("El precio sin descuento es de : $ %.2f", precio);
	printf("\nEl precio con descuento incluido: $ %.2f", precio_con_Descuento);
	
	
	return 0;
}
