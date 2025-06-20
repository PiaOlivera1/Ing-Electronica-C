#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cantidad 10
/*Cargar los datos de hasta 10 videojuegos.

Cada videojuego debe tener:

Nombre del juego (string de hasta 30 caracteres)

Consola (string de hasta 20 caracteres) — por ejemplo: "PS5", "Switch", "PC"

Año de lanzamiento (entero)

Precio (float)

Mostrar:

El videojuego más caro y el más barato.

Todos los juegos lanzados después del año 2020.

Todos los juegos que tengan más de 10 caracteres en el nombre (usando strlen).

Comparar si hay juegos repetidos (mismo nombre ignorando mayúsculas y minúsculas, usando stricmp).*/

struct Videojuego{
	char nombre_juego[30];
	char consola [20];
	short anio_lanzamiento;
	float precio;
};
int main(void) {
	struct Videojuego juegos[cantidad];
	char auxiliar[30];
	short i;
	short juegosDisponibles;
	short bandera;
	float precio_mayor;
	float precio_menor;
	short indice_mayor_p;
	short indice_menor_p;
	short anio_mayor_2020=0;
	
	
	fflush(stdin);
	printf("Ingrese el nombre del juego:\n");
	scanf("%[^%\n]s", auxiliar);
	fflush(stdin);
	
	i =0;
	while(stricmp(auxiliar, "Fin")!=0 && i < cantidad){
		strcpy(juegos[i].nombre_juego, auxiliar);
		
		printf("Ingrese la consola:\n");
		scanf("%[^%\n]s", juegos[i].consola);
		fflush(stdin);
		
		printf("Ingrese el anio de lanzamiento:\n");
		scanf("%hd", &juegos[i].anio_lanzamiento);
		fflush(stdin);
		printf("Ingrese el precio:\n");
		scanf("%f", &juegos[i].precio);
		fflush(stdin);
		
		i++;
		fflush(stdin);
		printf("Ingrese el nombre del juego:\n");
		scanf("%[^%\n]s", auxiliar);
		fflush(stdin);
	}
	juegosDisponibles =i;
	//LISTAR JUEGOS DISPONIBLES
	printf("\n");
	printf("***JUEGOS DISPONIBLES***\n");
	for(i=0;i<juegosDisponibles;i++){
		printf("Juego Nro: %hd\n", i+1);
		printf("Nombre del juego: %s\n", juegos[i].nombre_juego);
		printf("Consola: %s\n", juegos[i].consola);
		printf("Anio de lanzamiento: %hd\n", juegos[i].anio_lanzamiento);
		printf("Precio: %.2f \n", juegos[i].precio);
		printf("\n");
	}
	printf("\n");
	fflush(stdin);
	/// MENOR Y MAYOR PRECIO
	
	bandera=1;
	for( i=0;i<juegosDisponibles;i++)
	{
		if(bandera){
			precio_mayor = juegos[i].precio;
			precio_menor = juegos[i].precio;
			bandera =0;
		}
		else{
			if(juegos[i].precio> precio_mayor)
			{
				precio_mayor =juegos[i].precio;
				indice_mayor_p =i;
			}
			fflush(stdin);
			if(juegos[i].precio < precio_menor)
			{
				precio_menor = juegos[i].precio;
				indice_menor_p = i;
				
			}
		}
	
	}
	fflush(stdin);
	printf("El juego de mayor valor es: %s, precio: $ %.2f\n",juegos[indice_mayor_p].nombre_juego, juegos[indice_mayor_p].precio);
	fflush(stdin);
	printf("El juego de menor valor es: %s, precio $ %.2f\n", juegos[indice_menor_p].nombre_juego, juegos[indice_menor_p].precio);
	fflush(stdin);
	
	//Mayores al año 2020
	printf("\n");
	printf("Juegos superiores al anio 2020");
	anio_mayor_2020=0;
	for(i=0;i<juegosDisponibles;i++){
		if(juegos[i].anio_lanzamiento >2020){
			anio_mayor_2020 =1;
			printf("Juego %s , anio %hd\n", juegos[i].nombre_juego, juegos[i].anio_lanzamiento);
			fflush(stdin);
		}
	
	}
	fflush(stdin);
	if(!anio_mayor_2020){
		printf("No hay ningun juego superior al 2020 para vender.\n");
	}
	return 0;
}
