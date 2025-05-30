#include <iostream>
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
	long codigo=1;
	long cantidad =0;
	float precio;
	float suma=0;
	
	printf("Ingrese el codigo del producto:\n ");
	scanf("%ld", &codigo);
	
	printf("Ingrese la cantidad:\n");
	scanf("%ld", &cantidad);
	
	printf("Ingrese el precio: \n");
	scanf("%f", &precio);
	
	while(codigo!=0){
		codigo++;
		cantidad++;
		precio = (float)precio * cantidad;
		printf("Ingrese el codigo del producto:\n ");
		scanf("%ld", &codigo);
		
		printf("Ingrese la cantidad:\n");
		scanf("%ld", &cantidad);
		
		printf("Ingrese el precio: \n");
		scanf("%f", &precio);
		suma = suma + precio;
	}
	printf("La cantidad de productos comprados fue: %ld ", cantidad);
	printf("Se gasto un total de: $%.2f", suma);
	
	return 0;
}
