#include <stdio.h>
#include <stdlib.h>
//3 lados iguales equilatero
//2 lados iguales isosceles
//3 lados desiguales escaleno
int main(void) {
	float A =1;
	float B = 4;
	float C = 5;
	
	if(A== B){
		if(A==C){
			printf("Equilatero");
		}else{
			printf("Isosceles");
		}
	}else{
		if(A==C){
			printf("Isosceles");
		}else{
			if(C ==B){
			   printf("Isosceles");
			}else{
				printf("Escaleno");
			}
		}
	}
	
	return 0;
}
