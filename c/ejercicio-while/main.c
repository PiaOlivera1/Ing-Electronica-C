#include <stdio.h>
#include <stdlib.h>

/*1 1.- Realiza un programa en C#, , que muestre únicamente, los números pares en el rango del 1 al 100.*/
int main(void) {
	long contador=0;

	
	while(contador<=100){
		contador++;
		if(contador %2 ==0){
			printf("%ld\n", contador);
		}
		
	}

}
