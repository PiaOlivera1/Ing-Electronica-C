#include <iostream>

long Doble(long);
int main(int argc, char** argv) {

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

