#include <stdio.h>
#include <stdlib.h>

int main(void) {
	short N;
	short maximo;
	short minimo;
	short bandera=1;
	
	printf("Ingresa un numero: \n");
	scanf("%hd", &N);
	for(short i=0;i!=0;i++){
		
		if(bandera){
			maximo =N;
			minimo =N;
			bandera=0;
		}
		if(maximo < N){
			maximo =N;
		}
		if(minimo > N){
			minimo =N;
		}
		printf("Ingresa un numero: \n");
		scanf("%hd", &N);
	}
	printf("El maximo es: %hd\n", maximo);
	printf("El minimo es: %hd", minimo);
	return 0;
}
