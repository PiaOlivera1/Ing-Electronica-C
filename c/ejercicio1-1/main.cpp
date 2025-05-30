#include <stdio.h>

/*1.1 Hacer un programa que ingrese un número entero por pantalla e imprima el doble del mismo. */
int main(void) {
	short numero;
	short doble;
	
	printf("Ingresen un numero: \n");
	scanf("%hd", &numero);
	printf("El doble del numero %hd ", numero);
	
	doble = numero*2;
	printf(" es : %hd", doble);
	
	
	
	
	
	
	
	return 0;
}
