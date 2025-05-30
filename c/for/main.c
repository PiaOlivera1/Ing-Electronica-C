#include <stdio.h>
#include <stdlib.h>


struct Persona {
	long legajo;
	float sueldo[13];
};
int main(void) {
	struct Persona empleado;
	short mes;
	float sueldoAnio=0;
	printf("Ingrese el numero de legajo de la persona:\n");
	scanf("%ld", &empleado.legajo);
	

	for(mes=0; mes<12; mes++){
		printf("Ingrese el salario del mes %hd : \n", mes+1);
		scanf("%f", &empleado.sueldo[mes]);
		sueldoAnio = sueldoAnio + empleado.sueldo[mes];
	}
	printf("El sueldo anual es de : $ %.2f", sueldoAnio); 
	return 0;
}

