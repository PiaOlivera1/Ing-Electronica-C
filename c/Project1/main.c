#include <stdio.h>
#include <stdlib.h>

	/*Se requiere hacer un programa que permita el ingreso  de "N" productos. Definidos con un código, una cantidad y un precio.
	
	Se cargan en el Orden 
	
	Producto 1
	- Código
	- Cantidad
	- Precio
	
	Producto 2
	- Código
	- Cantidad
	- Precio
	
	....
	
	Producto "N"
	- Código
	- Cantidad
	- Precio
	
	El periodo de carga termina cuando el "Código" del producto es "0" (cero).
	
	Una vez terminada la carga, se debe mostrar:
	
	1) El valor del total de lo comprado.
	2) Cantidad de productos ingresados.
	3) Total de cantidades ingresadas (ej. 10 azúcar, 5 sal y 2 harinas, debe indicar 17 cantidades)
	4) Valor Promedio de los productos comprados.
	5) Se desea saber si se ingreso el código de producto "9999".
	6) Que porcentaje de productos tuvieron un precio unitario por encima "$2500".
	7) Cual fue la cantidad Máxima de un producto dado.
	8) Cual fue el precio Mínimo de un producto.*/
	int main(void) {
		long codigo;
		long cantidad ;
		float precio;
		float suma=0;
		long contador =0;
		//float porcentaje=0;
		//float porcentajeFinal;
		//long ProductosTotal=0;
		short bandera =1;
		long max;
		long min;
		
		printf("Ingrese el codigo del producto:\n ");
		scanf("%ld", &codigo);
		
		while(codigo!=0){
			
			printf("Ingrese la cantidad:\n");
			scanf("%ld", &cantidad);
			contador =  cantidad+ contador;
			printf("Ingrese el precio: \n");
			scanf("%f", &precio);
			//ProductosTotal++;
			precio = (float)precio * cantidad;
			suma = suma + precio;
			if(bandera){
				max= cantidad;
				min =precio;
				bandera=0;
				
			}
			if(max< cantidad){
				max= cantidad;
			}
			if(min>precio){
				min = precio;
			}
			
			
			
			printf("Ingrese el codigo del producto:\n ");
			scanf("%ld", &codigo);
			if(codigo ==9999){
				printf("Se ingreso el codigo del producto 9999.\n");
			}
			/*if (precio / ProductosTotal> 2500){
				porcentaje++;
			}REVISAR*/
		
		}
		//porcentajeFinal = (ProductosTotal*100)/ porcentaje;
		//printf("Se ingreso un porcentaje de %.2f productos por encima de $2500", porcentajeFinal);
		printf("\nLa cantidad de productos comprados fue: %ld ", contador);
		printf("\nSe gasto un total de: $%.2f", suma);
		printf("\nLa cantidad de producto maximo fue: %ld", max);
		printf("\nEl precio minimo de producto fue: %ld", min);
		
		return 0;
}
