#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define cantidad 60
/*Una línea de colectivos va desde el centro de una ciudad hasta el recreo 
municipal distante 25km todos los días. El mismo servicio vuelve con pasajeros desde el recreo.
Se tienen en forma fija cuatro horarios diarios denominados “amanecer”, “mediodía”, “tarde” y “anochecer” 
(son nombres para los turistas…).
El colectivo lleva hasta 60 pasajeros, no pudiéndose vender más por servicio por cuestiones legales
y de seguridad vial.
Todos los días, al terminar el último servicio se rinde la recaudación total.
Se necesita un programa para PC que administre la venta de pasajes y al final del día informe:
Cuantos pasajeros fueron transportados por cada horario (separados ida y vuelta)
Cual fue el horario que más pasajeros transporto (indicando si fue ida o vuelta)
Si el boleto cuesta fijo 500 pesos, cuánto dinero se recaudó en total. 
Cual fue el promedio de pasajeros transportados

*/
struct linea_colectivo {
	char horarios_diarios [50];
	bool pasajeros_ida;
	bool pasajeros_vuelta;
	
};
int main(int argc, char *argv[]) {
	struct linea_colectivo colectivo[cantidad];
	char auxiliar[50];
	short pasajeros_a_bordo =0;
	short i=0;
	char respuesta[10];
	short contador_ida=0;
	short contador_vuelta =0;
	
	printf("Ingrese el horario de colectivo que desea sacar su pasaje: (amanecer-mediodia-tarde-anochecer) o ""Fin" " para salir: \n");
	scanf("%49[^\n]s", auxiliar);
	fflush(stdin);
	
	while(stricmp(auxiliar, "FIN")!=0 && i< cantidad){
		strcpy(colectivo[i].horarios_diarios, auxiliar);
		
		printf("Ingrese si desea el boleto de ida: (si/no):\n ");
		scanf("%s", respuesta);
		fflush(stdin);
		colectivo[i].pasajeros_ida= (stricmp(respuesta, "si")==0);
		if(colectivo[i].pasajeros_ida){
			contador_ida++;
		}
		printf("Ingrese si desea el boleto de vuelta: (si/no):\n");
		scanf("%s", respuesta);
		fflush(stdin);
		colectivo[i].pasajeros_vuelta= (stricmp(respuesta, "si")==0);
		if(colectivo[i].pasajeros_vuelta){
			contador_vuelta++;
		}
		i++;
		printf("Ingrese el horario de colectivo que desea sacar su pasaje: (amanecer-mediodia-tarde-anochecer) o  ""Fin" " para salir: \n");
		scanf("%49[^\n]s", auxiliar);
		fflush(stdin);
		
	}
	pasajeros_a_bordo= i;
	
	//Mostramos los pasajeros a bordo:
	for( i=0;i<pasajeros_a_bordo;i++){
		printf("Horario: %s\n", colectivo[i].horarios_diarios);
		printf("Pasaje de ida: %d\n", colectivo[i].pasajeros_ida);
		printf("Pasaje vuelta: %d\n", colectivo[i].pasajeros_vuelta);
		printf("\n");
	}
	
	// pasajeros en cada horario:
	short cont_ida_amanecer=0;
	short cont_vuelta_amanecer=0;
	for( i=0;i<pasajeros_a_bordo;i++){
		if(stricmp(colectivo[i].horarios_diarios, "amanecer")==0){
			if(colectivo[i].pasajeros_ida){
				cont_ida_amanecer++;
			}
			if(colectivo[i].pasajeros_vuelta){
				cont_vuelta_amanecer++;
			}
		}
	}
	printf("En el horario amenecer hubieron %hd pasajes de ida y %hd pasajes de vuelta vendidos\n", cont_ida_amanecer, cont_vuelta_amanecer);
	
	short cont_ida_mediodia=0;
	short cont_vuelta_mediodia =0;
	for( i=0;i<pasajeros_a_bordo;i++){
		if(stricmp(colectivo[i].horarios_diarios, "mediodia")==0){
			if(colectivo[i].pasajeros_ida){
				cont_ida_mediodia++;
			}
			if(colectivo[i].pasajeros_vuelta){
				cont_vuelta_mediodia++;
			}
		}
	}
	
	printf("En el horario mediodia hubieron %hd pasajes de ida y %hd pasajes de vuelta vendidos\n", cont_ida_mediodia, cont_vuelta_mediodia);
	
	short cont_ida_tarde=0;
	short cont_vuelta_tarde =0;
	for( i=0;i<pasajeros_a_bordo;i++){
		if(stricmp(colectivo[i].horarios_diarios, "tarde")==0){
			if(colectivo[i].pasajeros_ida){
				cont_ida_tarde++;
			}
			if(colectivo[i].pasajeros_vuelta){
				cont_vuelta_tarde++;
			}
		}
	}
	
	printf("En el horario tarde hubieron %hd pasajes de ida y %hd pasajes de vuelta vendidos\n", cont_ida_tarde, cont_vuelta_tarde);
	
	
	short cont_ida_anochecer=0;
	short cont_vuelta_anochecer =0;
	for( i=0;i<pasajeros_a_bordo;i++){
		if(stricmp(colectivo[i].horarios_diarios, "anochecer")==0){
			if(colectivo[i].pasajeros_ida){
				cont_ida_anochecer++;
			}
			if(colectivo[i].pasajeros_vuelta){
				cont_vuelta_anochecer++;
			}
		}
	}
	
	printf("En el horario mediodia hubieron %hd pasajes de ida y %hd pasajes de vuelta vendidos\n", cont_ida_anochecer, cont_vuelta_anochecer);
	//Cual fue el horario que más pasajeros transporto
	short suma_mediodia = cont_ida_mediodia +cont_vuelta_mediodia;
	short suma_amanecer = cont_ida_amanecer + cont_vuelta_amanecer;
	short suma_tarde = cont_ida_tarde + cont_vuelta_tarde;
	short suma_anochecer = cont_ida_anochecer + cont_vuelta_anochecer;
	
	if(suma_mediodia> suma_amanecer && suma_mediodia>suma_tarde && suma_mediodia> suma_anochecer ){
		printf("En el horario que más boletos se venderion fue en el horario del mediodia, con un total de %hd pasajes\n",suma_mediodia);
	}
	else if (suma_amanecer> suma_mediodia && suma_amanecer> suma_tarde && suma_amanecer> suma_anochecer){
		printf("En el horario que más boletos se venderion fue en el horario del amenecer, con un total de %hd pasajes\n",suma_amanecer);
	}
	else if(suma_anochecer> suma_mediodia && suma_anochecer> suma_amanecer && suma_anochecer> suma_tarde){
		printf("En el horario que más boletos se venderion fue en el horario del anochecer, con un total de %hd pasajes\n",suma_anochecer);
	}
	else if(suma_tarde> suma_amanecer && suma_tarde> suma_mediodia && suma_tarde> suma_anochecer){
		printf("En el horario que más boletos se venderion fue en el horario de la tarde, con un total de %hd pasajes\n",suma_tarde);
	}
	
	
	
	
	return 0;
}
