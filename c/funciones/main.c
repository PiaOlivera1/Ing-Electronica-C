#include <stdio.h>
#include <stdlib.h>


float promedio (float, float, float);
int main(void) {
	float resultado;
	float a, b, c;
	printf("Ingrese la primer nota: \n");
	scanf("%f", &a);
	printf("Ingrese la segunda nota: \n");
	scanf("%f", &b);
	printf("Ingrese la tercer nota: \n");
	scanf("%f", &c);
	
	resultado = promedio(a,b,c);
	printf("El promedio es %f", resultado);
	return 0;
}

float promedio (float n1, float n2, float n3){
	float s, promedio;
	s = n1 + n2+ n3;
	promedio = s /3;
	return promedio;
	

}

