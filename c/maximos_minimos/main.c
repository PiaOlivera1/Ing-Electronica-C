#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	short numero;
	short maximo;
	short minimo;
	short bandera =1;
	
	printf("Ingrese un numero:\n");
	scanf("%hd", &numero);
	
	while(numero !=0){
		if(bandera){
			maximo = numero;
			minimo = numero;
			bandera =0;
		}
		if(maximo < numero ){
			maximo = numero;
		}
		if(minimo> numero){
			minimo = numero;
		}
		printf("ingrese un numero: \n");
		scanf("%hd", &numero);
	}
	
	printf("El numero maximo ingresado es %hd\n", maximo);
	printf("El numero minimo ingresado es %hd \n", minimo);
	return 0;
}
