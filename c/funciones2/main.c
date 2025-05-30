#include <stdio.h>
#include <stdlib.h>
// Escribe una función que reciba un número entero y devuelva el doble de ese número.

long Doble (short); //prototipo
int main(int argc, char *argv[]) {
	long resultado;
	short numero;
	printf("Ingrese el numero: \n");
	scanf("%hd", &numero);
	
	resultado = Doble(numero);
	printf("El doble del numero %hd es %ld", numero, resultado);
	
	return 0;
}

long Doble (short n){
	long doble;
	doble = n *2;
	return doble;
}


