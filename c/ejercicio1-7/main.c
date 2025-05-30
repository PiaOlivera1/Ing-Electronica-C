#include <stdio.h>
#include <stdlib.h>

int main(void) {
	short multiplicando;
	
	printf("ingrese el numero multiplicador: ");
	scanf("%hd",&multiplicando);
	
	for(int i=0;i<=10;i++){
		printf("%hd X",i);
		printf("%hd =", multiplicando);
		printf("%hd", i* multiplicando);
		printf("\n");
	}
	
	/*Realizar un programa que ingrese una cantidad de alumnos y una cantidad de aulas y 
	devuelva cuantos alumnos irán a cada aula de manera equitativa. */
	
	short alumnos;
	short aulas;
	short division;
	
	printf("Ingrese la cantidad de alumnos:\n");
	scanf("%hd", &alumnos);
	
	printf("\n Ingrese la cantidad de aulas: \n");
	scanf("%hd", &aulas);
	
	division = alumnos / aulas;
	printf("\n Habra %hd", division);
	printf(" alumnos en cada aula");
	
	
	
	return 0;
}
