#include <stdio.h>
#include <stdlib.h>


struct Empleado{
	long id;
	short horasTrabajadas[4]; // 4 semanas del mes
};
int main(void) {
	struct Empleado empleado;
	long horasTotales =0;
	
	printf("Ingrese el id el empleado: \n");
	scanf("%ld", &empleado.id);
	
	for(short i=0;i<4;i++){
		printf("Ingrese la cantidad de horas trabajadas en la semana %hd :\n ", i +1);
		scanf("%hd", &empleado.horasTrabajadas[i]);
		horasTotales = horasTotales + empleado.horasTrabajadas[i];
	}
	printf("Mensualmente trabaja %ld horas\n", horasTotales);
	
	// Escribe un programa que pida un número al usuario y utilice un 
	//bucle for para mostrar su tabla de multiplicar del 1 al 10.
	short multiplicando;
	short N;
	short resultado;
	printf("Ingrese el numero multiplicando:  \n");
	scanf("%hd", &multiplicando);
	
	for( N=0;N<=10;N++){
		resultado = N* multiplicando;
		printf("%hd x %hd = %hd \n", N, multiplicando, resultado);
	}
	//Diseña un juego que pida al usuario adivinar una clave, 
	//utilizando un bucle while para permitir múltiples intentos hasta que adivine correctamente.
	
	short clave;
	short cont=1;
	printf("Ingrese la clave: \n");
	scanf("%hd", &clave);
	if(clave ==123){
		printf("Clave correcta,");
	}
	else{
		do{
			printf("clave incorrecta.");
			cont++;
			printf("Ingrese la clave: \n");
			scanf("%hd", &clave);
		}while(clave != 123 && cont<3);
		if(cont == 3){
			printf("Equipo bloqueado, supero el máximo de intentos.");
		}
		else{
			printf("Clave correcta");
		}
		
	}
	
	
	return 0;
}
