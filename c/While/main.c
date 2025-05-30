#include <stdio.h>
#include <stdlib.h>

int main(void) {
	short N;
	long suma=0;
	long cont =0;
	long suma_mayores_de_7=0;
	
	printf("Ingrese el valor:\n");
	scanf("%hd", &N);
	while(N !=0){
		if (N>7){
			suma_mayores_de_7++;
		}
		suma = suma + N;
		cont ++; 
		printf("Ingrese el valor:\n");
		scanf("%hd", &N);
	}
	printf("La suma de los numeros es : %ld", suma);
	printf("\nIngresaron %ld numeros",cont);
	printf("\nSe ingresaron %ld numeros mayores a 7", suma_mayores_de_7);
	return 0;
}
