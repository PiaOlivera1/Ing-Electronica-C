#include <stdio.h>
#include <stdlib.h>

/*1 2. Realiza un programa en C#, que pida números mientras no se ingrese uno negativo. 
Al final, se debe mostrar la suma de los números ingresados*/
int main(void) {
	short contador=0;
	long num;
	long suma=0;
	float promedio;
	long suma_Pares=0;
	
	printf("Ingrese un numero:\n ");
	scanf("%ld", &num);
	
	if(num<0){
		printf("No se ingreso ningun numero positivo ");
	}
	else{
		while(num>0){	
			contador ++;
			suma = num+ suma;
			if(num %2 ==0){
				suma_Pares++;
			}
			printf("Ingrese un numero:\n ");
			scanf("%ld", &num);
			
		}
		
		promedio = (float)suma / contador;
		printf("El promedio es: %.2f\n ", promedio);
		printf("La suma de los numeros positivos da: %ld\n",suma);
		printf("Se ingresaron %ld numeros pares:\n ",suma_Pares);
	}
	
	return 0;
}
