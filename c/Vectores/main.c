#include <stdio.h>
#include <stdlib.h>
#define cantidad 50

//EJERCICIO VECTORES
//###################

//Se cargaran las Notas de un examen Parcial, los datos se cargan hasta que se cargue un "0".
//o hasta que se llegue a la cantidad de alumnos maximos del curso (que son 50).

//A- Mostrar el contenido del vector (Lo quiero mostrar de forma consecutiva a todo el vectror).
//B- Mostrar todos los numeros mayores o iguales a 7.
//C- Mostrar todos las Notas entre 4 y 6 (inclusive).
//D -Mostrar todas las Notas menores a 4.
//E- Mostrar la Nota Maxima y Minima.
//F- Calcular el Promedio.
//G- Mostrar todas las notas Mayores al Promedio.
//G bis - Mostrar todas las notas Mayores al promedio.
int main(void) {
	short Alumnos[cantidad];
	short asistencias;
	short i=0;
	short notas_mayores_7=0;
	short notas_cuatro_seis=0;
	short notas_menores_4 =0;
	short maximo;
	short minimo;
	float promedio;
	short suma=0;
	short suma_mayor_promedio =0;
	
	printf("Ingrese La Nota del alumno o Cero para salir\n");
	scanf("%hd", &Alumnos[i]);
	
	while(Alumnos[i] !=0 ){
		i ++;
		
		printf("Ingrese La Nota del alumno o Cero para salir\n");
		scanf("%hd", &Alumnos[i]);
	}
	asistencias = i;
	printf("\n");
	
	printf("Punto A- Todo el vector\n");
	for( i=0;i< asistencias ;i++){
		printf("La nota es: %hd \n ", Alumnos[i]);
	}
	printf("\n");
	
	printf("Punto B- Notas mayores a 7\n");
	for( i=0;i< asistencias ;i++){
		if(Alumnos[i]>7){
			notas_mayores_7++;
			printf("Nota mayor a 7: %hd\n", Alumnos[i]);
		}
	}
	printf("Se ingresaron %hd notas mayores a 7\n", notas_mayores_7);
	printf("\n");
	
	printf("Punto C- Notras entre 4 y 6\n");
	for( i=0;i<asistencias;i++){
		if(Alumnos[i]>3 && Alumnos[i]<7){
			notas_cuatro_seis++;
			printf("Notas entre 4 y 6: %hd\n", Alumnos[i]);
		}
	}
	printf("Se ingresaron %hd notas entre cuatro y seis\n", notas_cuatro_seis);
	printf("\n");
	
	printf("Punto D- Notras menores a 4 \n");
	for( i=0;i<asistencias;i++){
		if(Alumnos[i]< 4){
			notas_menores_4++;
			printf("Notas menores a 4 : %hd\n", Alumnos[i]);
		}
	}
	printf("Se ingresaron %hd notas menores a 4\n", notas_menores_4);
	printf("\n");
	
	printf("Punto E- Nota Maxima y Minima.\n");
	for(i=0;i<asistencias ;i++){
		if(Alumnos[i]< minimo){
			minimo = Alumnos[i];
	}
		if(Alumnos[i]>maximo){
			maximo = Alumnos[i];
		}
	}
	printf("La nota maxima es: %hd\n", maximo);
	printf("La nota minima es: %hd \n", minimo);
	printf("\n");
	
	printf("Punto F- Promedio.\n");
	for( i=0;i<asistencias;i++){
		suma = suma + Alumnos[i];
	}
	promedio = (float)suma / asistencias;
	printf("El promedio fue: %.2f", promedio);
	printf("\n");
	
	printf("Punto G- Notas mayores al Promedio.\n");
	for(i=0;i<asistencias;i++){
		if(Alumnos[i]> promedio){
			suma_mayor_promedio++;
			printf("Nota mayor al promedio: %hd\n",Alumnos[i]);
		}		
	}
	printf("Hay %hd notas mayores al promedio:\n",suma_mayor_promedio);
	return 0;
}
