#include <stdio.h>
#include <stdlib.h>
//Dos lados iguales isosceles
//tres lados iguales Equilatero
// tres lados desiguales Escaleno
int main(void) {
	short A =2;
	short B =1;     // b=c, b=a, a=c
	short C =3;
	
	if(A==B){
		
		if(A==C){
			printf("EQUILATERO");
		}
		else{
			printf("ISOSCELES");
		}
	}
	else{
		if(A==C){
			printf("ISOSCELES");
		}
		else{
			
			if(C==B){
				printf("ISOCELES");
			}
			else{
				printf("Escaleno");
			}
		}
	}
	return 0;
}
