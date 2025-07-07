#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define cantidad 10



struct tiendaMusica{
	char album[50];
	char tipo; // c= cassete , C = cd , V = vinillo
	float precio;
};
int main(int argc, char *argv[]) {
	struct tiendaMusica discos[cantidad];
	char auxiliar [50];
	short i=0;
	short cantidadDiscos;
	short bandera_c =0;
	float max_c;
	float min_c;
	short indice_max_c, indice_min_c;
	short bandera_CD=0;
	float max_Cd;
	float min_Cd;
	short indice_max_Cd, indice_min_Cd;

	printf("Ingrese el nombre del disco:\n");
	scanf("%49[^\n]s", auxiliar);
	fflush(stdin);
	
	while(stricmp(auxiliar, "fin")!=0 && i < cantidad ){
		strcpy(discos[i].album, auxiliar);
		
		fflush(stdin);
		printf("Ingrese el tipo: (c= cassete , C = cd , V = vinillo) \n");
		scanf("%c", &discos[i].tipo);
		
		printf("Ingrese elPrecio: \n");
		scanf("%f", &discos[i].precio);
		fflush(stdin);

		
		i++;
		if(i < cantidad){
			printf("Ingrese el nombre del disco:\n");
			scanf("%49[^\n]s", auxiliar);
			fflush(stdin);
		}
	}
	
	cantidadDiscos =i;
	
	if(cantidadDiscos ==0){
		printf("no se ingresaron ningun disco para vender");
		
	}
	for(i=0;i<cantidadDiscos;i++){
		printf("Album: %s\n Tipo: %c\n Precio: %.2f\n", discos[i].album, discos[i].tipo, discos[i].precio);
	}
	fflush(stdin);
	for(i=0;i<cantidadDiscos;i++){
		if(discos[i].tipo ==  'c'){
			if(bandera_c){
				max_c = discos[i].precio;
				min_c =discos[i].precio;
				bandera_c =1;
			}
			else{
				if(discos[i].precio > max_c){
					max_c = discos[i].precio;
					indice_max_c =i;
					fflush(stdin);
				}
				
				if(discos[i].precio < min_c){
					min_c = discos[i].precio;
					indice_min_c =i;
					fflush(stdin);
				}
			}
		
		}
	}
	fflush(stdin);
	printf("El disco mas caro en formato cassete es: %s $ %.2f", discos[indice_max_c].album, discos[indice_max_c].precio );
	printf("\n");	
	fflush(stdin); 
	printf("El disco mas barato en formato cassete es: %s $ %.2f", discos[indice_min_c].album, discos[indice_min_c].precio );
	fflush(stdin);
	
	
	for(i=0;i<cantidadDiscos;i++){
		if(discos[i].tipo ==  'C'){
			if(bandera_CD==0){
				max_Cd = discos[i].precio;
				min_Cd = discos[i].precio;
			}
			else{
				if(discos[i].precio > max_Cd){
					max_Cd= discos[i].precio;
					indice_max_Cd =i;
					fflush(stdin);
				}
				if(discos[i].precio < min_Cd){
					min_Cd = discos[i].precio;
					indice_min_Cd =i;
					fflush(stdin);
				}
			}
		
		}
	}	
	fflush(stdin);
	printf("El disco mas caro en formato cassete es: %s $ %.2f", discos[indice_max_Cd].album, discos[indice_max_Cd].precio );
	printf("\n");	
	fflush(stdin); 

	printf("El disco mas barato en formato cassete es: %s $ %.2f", discos[indice_min_Cd].album, discos[indice_min_Cd].precio );		
	
	
	return 0;
}
