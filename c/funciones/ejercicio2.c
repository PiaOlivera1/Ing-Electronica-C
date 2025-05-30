//Función Simple: Escribe una función que reciba un número entero y devuelva el doble de ese número.

#include<stdio.h>
#include<stdlib.h>

long Doble(long);
int main (void){
	long doble;
	short numero;
	printf("Inglese un numero: \n");
	scanf("%hd", &numero);
	doble = Doble(numero);
	
	printf("El doble del numero %hd es %ld", numero, doble);
	
	
	return 0;
}
long Doble (long x){
	long doble ;
	doble = x * 2;
	return doble;
	
}

