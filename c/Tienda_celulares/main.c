#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define cantidad 3

/*
Una tienda de celulares necesita un programa en C para gestionar la información de los teléfonos disponibles a la venta. Para ello, se desea:

🟢 Estructura:
Cargar los datos de hasta 100 celulares utilizando un vector de estructuras. Cada celular debe contener:

Marca (ej: Samsung, Apple, Motorola)

Modelo (ej: Galaxy S21, iPhone 13, Moto G10)

Año de lanzamiento

Precio

Almacenamiento en GB (ej: 64, 128, 256)

🟢 Funcionalidad del programa:
Permitir al usuario cargar celulares hasta que lo desee o hasta llegar al límite (100).

Luego del ingreso, el programa debe:

Mostrar todos los celulares cargados

Informar cuál es el celular más caro y cuál es el más barato

Calcular y mostrar el promedio de precios

Mostrar todos los celulares con almacenamiento mayor o igual a 128 GB

Informar la cantidad de celulares lanzados a partir del año 2021

🎯 Extra (opcional, si querés practicar más):
Mostrar cuántos celulares hay por marca (Samsung, Apple, etc.)

Agregar opción de menú para elegir qué mostrar
*/

struct tienda_celulares{
	char marca [20];
	char modelo [20];
	long anio;
	float precio;
	short almacenamiento;
};
int main(int argc, char *argv[]) {
	struct tienda_celulares disponibles_venta[cantidad];
	long disponibilidad;
	short i=0;
	char auxiliar[20];
	short bandera =1;
	float min;
	float max;
	short indice_max=0;
	short indice_min=0;
	
	printf("Ingrese la marca o 'Fin'para terminar:\n");
	scanf("%19[^\n]s", auxiliar);
	fflush(stdin);

	while(strcmp(auxiliar, "Fin")!=0 && i< cantidad){
		strcpy( disponibles_venta[i].marca, auxiliar);
		
		
		printf("Ingrese el modelo:\n");
		scanf("%19[^\n]s", disponibles_venta[i].modelo);
		fflush(stdin);
		
		printf("Ingrese el anio:\n");
		scanf("%ld", &disponibles_venta[i].anio);
		
		printf("Ingrese el precio:\n");
		scanf("%f", &disponibles_venta[i].precio);
		
		printf("Ingrese el almacenamiento en GB\n");
		scanf("%hd", &disponibles_venta[i].almacenamiento);
		
		if(bandera){
			max= disponibles_venta[i].precio;
			min =disponibles_venta[i].precio ;
			bandera =0;
		}
		i++;
		fflush(stdin);
		printf("Ingrese la marca:\n");
		scanf("%19[^\n]s", auxiliar);
		fflush(stdin);
	}
	disponibilidad=i;
	
	for(i=0;i<disponibilidad ;i++){
		printf("Celular %hd :\n", i+1);
		printf("Marca: %s\n", disponibles_venta[i].marca);
		printf("Modelo: %s\n", disponibles_venta[i].modelo);
		printf("Anio: %ld\n", disponibles_venta[i].anio);
		printf("Precio: %.2f\n", disponibles_venta[i].precio);
		printf("Almacenamiento: %hd\n",disponibles_venta[i].almacenamiento);
		printf("\n");
	}
	for( i=0;i<disponibilidad;i++){
		if(disponibles_venta[i].precio < min){
			min= disponibles_venta[i].precio;
			indice_min = i;
		}
		if(disponibles_venta[i].precio > max){
			max= disponibles_venta[i].precio;
			indice_max = i;
		}
	}
	printf("\n");
	printf("MODELO DE MAYOR VALOR:\n");
	printf("Marca: %s\n", disponibles_venta[indice_max].marca);
	printf("Modelo: %s\n",disponibles_venta[indice_max].modelo);
	printf("Anio: %ld\n", disponibles_venta[indice_max].anio);
	printf("Precio: %.2f\n",disponibles_venta[indice_max].precio);
	printf("Almacenamiento: %hd\n", disponibles_venta[indice_max].almacenamiento);
	printf("\n");
	
	printf("MODELO DE MENOR VALOR:\n");
	printf("Marca: %s\n", disponibles_venta[indice_min].marca);
	printf("Modelo: %s\n",disponibles_venta[indice_min].modelo);
	printf("Anio: %ld\n", disponibles_venta[indice_min].anio);
	printf("Precio: %.2f\n",disponibles_venta[indice_min].precio);
	printf("Almacenamiento: %hd\n", disponibles_venta[indice_min].almacenamiento);
	printf("\n");
	return 0;
}
