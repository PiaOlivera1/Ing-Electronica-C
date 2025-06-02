#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define cantidad 4
/*
Una concesionaria necesita un programa en  para gestionar la información de los autos disponibles a la venta. Para ello, se desea:

Cargar los datos de hasta 100 autos utilizando un vector de estructuras. Cada auto debe contener:

Marca 

Modelo

Año de fabricación 

Precio 

Kilometraje 

Permitir al usuario ingresar autos hasta que lo desee o se llegue al límite.

Luego del ingreso, el programa debe:

Mostrar todos los autos cargados.

Informar cuál es el auto más caro y cuál es el más barato.

Calcular el promedio de los precios.

Mostrar todos los autos con menos de 50.000 km.

Informar la cantidad de autos fabricados a partir del año 2020.
*/

struct concesionaria {
	char marca [20];
	char modelo [20];
	long anio;
	long precio;
	long km;
};
int main(int argc, char *argv[]) {
	struct concesionaria autos_disponibles[cantidad];
	char auximarca [20];
	short i =0;
	long disponible_venta;
	long minimo;
	long maximo;
	long indice_min =0;
	long indice_max=0;
	short bandera =1;
	short autos_may_2020=0;
	
	printf("\nIngrese la marca (o 'FIN' para terminar): \n");
	scanf(" %19[^\n]s", auximarca);
	fflush(stdin);
	
	while(strcmp(auximarca, "FIN")!=0 && i < cantidad){
		strcpy(autos_disponibles[i].marca, auximarca);
				
		printf("Ingrese el modelo:\n");
		scanf("%19[^\n]s", autos_disponibles[i].modelo);
		fflush(stdin);
		
		printf("Ingrese el anio:\n");
		scanf("%ld", &autos_disponibles[i].anio);
		
		printf("Ingrese el precio:\n");
		scanf("%ld", &autos_disponibles[i].precio);
		
		printf("Ingrese el km: \n");
		scanf("%ld", &autos_disponibles[i].km);
		
		if(bandera){
			minimo = autos_disponibles[i].precio;
			maximo = autos_disponibles[i].precio;
			bandera = 0;
		}
	
		i++;
		
		printf("Ingrese la marca: \n");
		scanf(" %19[^\n]s", auximarca);
		fflush(stdin);
		
		
	}
	disponible_venta =i;
	printf("\n");
	printf("Autos disponibles a la venta : \n");
	for( i=0;i<disponible_venta;i++){
		printf("Auto %hd:\n", i+1);
		printf("Marca: %s\n", autos_disponibles[i].marca);
		printf("Modelo: %s\n", autos_disponibles[i].modelo);
		printf("Anio: %ld\n", autos_disponibles[i].anio);
		printf("Precio: %ld\n", autos_disponibles[i].precio);
		printf("Km: %ld\n", autos_disponibles[i].km);
		printf("\n");
	}
	
	printf("Autos de mayor y menor valor:\n");
	for(i=0;i< disponible_venta;i++){
		
		if(autos_disponibles[i].precio< minimo){
			minimo =autos_disponibles[i].precio;
			indice_min =i;
		}
		if(autos_disponibles[i].precio > maximo){
			maximo = autos_disponibles[i].precio;
			indice_max =i;
		}
	}
	
	printf("Detalle del auto de menor valor:\n");
	printf("Marca: %s\n", autos_disponibles[indice_min].marca);
	printf("Modelo: %s\n", autos_disponibles[indice_min].modelo);
	printf("Anio: %ld\n", autos_disponibles[indice_min].anio);
	printf("Precio: %ld\n", autos_disponibles[indice_min].precio);
	printf("Km: %ld\n", autos_disponibles[indice_min].km);
	
	printf("\n");
	printf("Detalle del auto de mayor valor:\n");
	printf("Marca: %s\n", autos_disponibles[indice_max].marca);
	printf("Modelo: %s\n", autos_disponibles[indice_max].modelo);
	printf("Anio: %ld\n", autos_disponibles[indice_max].anio);
	printf("Precio: %ld\n", autos_disponibles[indice_max].precio);
	printf("Km: %ld\n", autos_disponibles[indice_max].km);
	
	printf("\n");
	
	printf("Auto menor en km:\n");
	for( i=0;i<disponible_venta;i++){
		if(autos_disponibles[i].km < 50000){
			printf("Marca: %s\n", autos_disponibles[i].marca);
			printf("Modelo: %s\n", autos_disponibles[i].modelo);
			printf("Anio: %ld\n", autos_disponibles[i].anio);
			printf("Precio: %ld\n", autos_disponibles[i].precio);
			printf("Km: %ld\n", autos_disponibles[i].km);
		}
	}	
	printf("\n");
	
	
	printf("Autos fabricados apartir del anio 2020\n");
	for( i=0;i<disponible_venta;i++){
		if(autos_disponibles[i].anio>=2020){
			printf("Marca: %s\n", autos_disponibles[i].marca);
			printf("Modelo: %s\n", autos_disponibles[i].modelo);
			printf("Anio: %ld\n", autos_disponibles[i].anio);
			printf("Precio: %ld\n", autos_disponibles[i].precio);
			printf("Km: %ld\n", autos_disponibles[i].km);
			autos_may_2020++;
		}
	}
	printf("Se registraron %hd autos mayores al 2020", autos_may_2020);
	return 0;
}
