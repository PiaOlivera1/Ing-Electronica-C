#include <stdio.h>
#include <stdlib.h>
/*Datos de un estudiante
Solicitá el nombre de un estudiante y
la notas que obtuvo y muestre el promedio. Mostrá ambos datos.
*/

struct Estudiante{
	char nombre [10];
	float notas[3];
};

float promedio(float, float, float);
int main(int argc, char *argv[]) {
	struct Estudiante estudiante;
	short i;
	float funcion;
	printf("Ingrese el nombre del estudiante: \n");
	fgets(estudiante.nombre, sizeof(estudiante.nombre), stdin);
	
	for( i=0;i<3;i++){
		printf("Ingrese la notas notas del estudiante:\n");
		scanf("%f", &estudiante.notas[i]);
	}
	for( i=0;i<3;i++){
		printf("Nota %hd: %.2f", i +1, estudiante.notas[i]);
	}
	funcion = promedio(estudiante.notas[0], estudiante.notas[1], estudiante.notas[2]);
	
	printf("El promedio de %s es de : %.2f",estudiante.nombre, funcion);
	return 0;
}
float promedio(float n1, float n2, float n3){
	float p;
	p= (n1+ n2+ n3)/3;
	return p;
}

