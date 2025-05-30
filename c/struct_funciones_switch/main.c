#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	/* Funciones en C */
	
	/*
	S para sumar
	R para restar
	M para multiplicar
	D para dividir
	*/
	
	struct mate{
		float resultado;
		char valido; /* S o N */
	};
//prototipo o firma
	struct mate operaciones(short, short, char);
	
	int main(void) 
	{
		struct mate R_main;
		char opcion;
		short X;
		short Y;
		
		/* la llamada a la funcion - uso */
		printf("Ingrese el primer operando: ");
		scanf("%hd", &X);
		
		printf("Ingrese el segundo operando: ");
		scanf("%hd", &Y);
		
		printf("Ingrese una opcion para operar: ");
		scanf(" %c", &opcion);
		R_main= operaciones(X, Y, opcion); 
		
		if(R_main.valido == 'S')
		{
			printf("El resultado de la operacion es: %f\n", R_main.resultado);
//		if(_isnan(R_main.resultado))
//		{
//			printf("Es NAN\n");
//		}
		}
		else
		{
			printf("Error en el uso de la funcion\n");
		}
		
		return 0;
	}
	/*
	Datos de ingreso: 2 short
	Dato de salida: 1 long
	*/
	
	struct mate operaciones(short A, short B, char oper) /* Implementacion */
	{
		struct mate R;
		
		switch(oper)
		{
			case 'S':  	R.resultado= A + B; 
			R.valido= 'S';
			break;
			
			case 'R': 	R.resultado= A - B; 
			R.valido= 'S';
			break;
			
			case 'M': 	R.resultado= A * B;
			R.valido= 'S';
			break;
			
			case 'D': 	R.resultado= (float)A / B; 
			R.valido= 'S';
			break;
			default:   	R.resultado= 0;
			R.valido= 'N';
			break;
		}
		
		return R;
	}
