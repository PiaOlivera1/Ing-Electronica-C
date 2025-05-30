#include <stdio.h>
#include <stdlib.h>

int main(void) {
	short A;
	printf("Ingrese el valor de A: ");
	scanf("%hd", &A);
	
	if(A != 1){
		printf("A es distinto de 1");
	}
	else{
		printf("A vale 1");
	}
	return 0;
}
