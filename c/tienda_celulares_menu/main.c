#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct tienda_celulares{
	char marca [20];
	char modelo [20];
	long anio;
	float precio;
	short almacenamiento;
};

int main(int argc, char *argv[]) {
	struct tienda_celulares disponibles_venta[]={{"motorola", "E13", 2020, 300, 128},
		{"samsung", "s24", 2021, 850, 256},
		{"apple", "iPhone 14", 2022, 1200, 128},
		{"xiaomi", "Redmi Note 11", 2022, 400, 128},
		{"nokia", "G21", 2021, 280, 64},
		{"motorola", "G60", 2022, 350, 128},
		{"samsung", "A53", 2022, 600, 128},
		{"apple", "iPhone 13 Mini", 2021, 1000, 128},
		{"huawei", "P40 Lite", 2020, 450, 128},
		{"xiaomi", "Poco X3", 2021, 370, 128},
		{"nokia", "X20", 2021, 390, 128},
		{"motorola", "Edge 30", 2022, 500, 256},
		{"samsung", "M14", 2023, 320, 128},
		{"apple", "iPhone SE", 2020, 700, 64},
		{"xiaomi", "Redmi 12", 2023, 250, 128}
	};
	
	short i;
	short bandera =1;
	float min;
	float max;
	short indice_max=0;
	short indice_min=0;
	short almacenamiento_mayor=0;
	short mayores_2021=0;
	short hay_iph=0;
	short hay_motorola;
	short opcion;
		
	printf("***Los celulares para la venta ya estan cargados en sistema***\n");
	printf("opcion 1: Disponibilidad de venta:\n");
	printf("opcion 2: Dispositivo más economico:\n");
	printf("opcion 3: Dispositivo más caro:\n");
	printf("opcion 4: Dispositivos con 128gb o mas\n");
	printf("opcion 5: Celulares a partir del anio 2021:\n");
	printf("opcion 6: Iphone disponibles:\n");
	printf("opcion 7: Motorolas disponibles:\n");
	printf("\n");
	printf("*** INGRESE LA OPCION:\n");
	scanf("%hd", &opcion);
	
	switch (opcion) {
	case 1:
		printf("***CELULARES DISPONIBLES A LA VENTA:***\n");
		
		for(i=0;i<15 ;i++)
		{
			printf("Celular %hd :\n", i+1);
			printf("Marca: %s\n", disponibles_venta[i].marca);
			printf("Modelo: %s\n", disponibles_venta[i].modelo);
			printf("Anio: %ld\n", disponibles_venta[i].anio);
			printf("Precio: %.2f\n", disponibles_venta[i].precio);
			printf("Almacenamiento: %hd\n",disponibles_venta[i].almacenamiento);
			printf("\n");
		}
		break;
	case 2:
		for( i=0;i<15;i++)
		{	
			if(bandera)
			{
				min= disponibles_venta[i].precio; 
				indice_min=0;
				
				bandera =0;
			}
		}
		for(i=0;i<15;i++){
			if(disponibles_venta[i].precio < min)
			{
				min= disponibles_venta[i].precio;
				indice_min = i;
			}
			
			printf("MODELO DE MENOR VALOR:\n");
			printf("Marca: %s\n", disponibles_venta[indice_min].marca);
			printf("Modelo: %s\n",disponibles_venta[indice_min].modelo);
			printf("Anio: %ld\n", disponibles_venta[indice_min].anio);
			printf("Precio: %.2f\n",disponibles_venta[indice_min].precio);
			printf("Almacenamiento: %hd\n", disponibles_venta[indice_min].almacenamiento);
			printf("\n");
		}
		break;
			
	case 3:
		for( i=0;i<15;i++)
		{	
			if(bandera)
			{
				max= disponibles_venta[i].precio;
			
				indice_max=0;
				
				bandera =0;
			}
		for( i=0;i<15;i++){
			if(disponibles_venta[i].precio > max)
			{
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
			
		break;
	case 4:
			printf("Celulares mayores o igual a 128GB\n");
			printf("\n");
			almacenamiento_mayor=0;
			
			for( i=0;i<15;i++)
			{
				if(disponibles_venta[i].almacenamiento >= 128)
				{
					almacenamiento_mayor = 1;
					
					printf("Marca: %s\n", disponibles_venta[i].marca);
					printf("Modelo: %s\n",disponibles_venta[i].modelo);
					printf("Anio: %ld\n", disponibles_venta[i].anio);
					printf("Precio: %.2f\n",disponibles_venta[i].precio);
					printf("Almacenamiento: %hd\n", disponibles_venta[i].almacenamiento);
					printf("\n");
				}
			}
			
			if(!almacenamiento_mayor)
			{
				printf("No hay ningun modelo con 128gb o mas.\n");
			}
			
			break;
	case 5:
			printf("\n");
			
			printf("Celulares lanzados a partir del 2021:\n");
			
			mayores_2021 =0;
			
			for( i=0;i< 15;i++){
				if(disponibles_venta[i].anio> 2021)
				{
					mayores_2021 =1;
					printf("Marca: %s\n", disponibles_venta[i].marca);
					printf("Modelo: %s\n", disponibles_venta[i].modelo);
					printf("Anio: %ld\n", disponibles_venta[i].anio);
					printf("Precio: %.2f\n",disponibles_venta[i].precio);
					printf("Almacenamiento: %hd\n", disponibles_venta[i].almacenamiento);
					printf("\n");
				}
				if(!mayores_2021)
				{
					printf("No hay ningun celular disponible apartir del anio 2021\n");
				}
			}	
			break;
	case 6:
			printf("Iphone Disponibles:\n");
			
			hay_iph =0;
			for( i=0;i<15;i++)
			{	
				if(strcmp(disponibles_venta[i].marca, "iphone")==0)
				{	hay_iph =1;	
					printf("Modelo: %s\n", disponibles_venta[i].modelo);
					printf("Anio: %ld\n", disponibles_venta[i].anio);
					printf("Precio: %.2f\n",disponibles_venta[i].precio);
					printf("Almacenamiento: %hd\n", disponibles_venta[i].almacenamiento);
				}		
			}
			
			if(!hay_iph)
			{
				printf("No hay iphone para la venta:\n");	
			}
			break;
	case 7:
			printf("\n");
			
			printf("Motorolas disponibles:\n");
			
			hay_motorola =0;
			for(i=0;i<15;i++)
			{
				if(strcmp(disponibles_venta[i].marca, "motorola")==0)
				{
					hay_motorola =1;
					printf("Modelo: %s\n", disponibles_venta[i].modelo);
					printf("Anio: %ld\n", disponibles_venta[i].anio);
					printf("Precio %.2f\n", disponibles_venta[i].precio);
					printf("Almacenamiento: %hd \n", disponibles_venta[i].almacenamiento);
				}
			}
			
			if(!hay_motorola)
			{
				printf("No hay motorolas para vender.\n");
			}
			break;
	default:
		//TODO
		break;
	}
	
	
	
	
	return 0;

	}
}

