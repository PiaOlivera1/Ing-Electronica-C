#include <stdio.h>
#include <stdlib.h>

/*Hacer un programa que ingrese la edad de una persona. 
Se debe calcular cuántos años va a tener dentro de 23 años. 
Imprima el resultado por pantalla. 
*/
int main(void) {
	short edad;
	short edadFuturo;
	
	printf ("Ingrese su edad: \n");
	scanf("%hd", &edad);
	
	edadFuturo = edad +23;
	printf("Su edad dentro de 23 anios  sera: %hd", edadFuturo);
	return 0;
}
