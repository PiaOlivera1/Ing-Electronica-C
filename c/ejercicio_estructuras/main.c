#include <stdio.h>
#include <stdlib.h>
/*
Registrar un libro
Pedí al usuario que ingrese el título y el año de 
publicación de un libro y luego mostralo por pantalla.*/

struct Libro{
	char titulo[50];
	long anio;
};
int main(int argc, char *argv[]) {
	struct Libro libro;
	
	printf("Ingrese el nombre del libro: \n");
	fgets(libro.titulo,sizeof(libro.titulo), stdin);
	
	printf("Ingrese el anio de publicacion:\n");
	scanf("%ld", &libro.anio);
	
	printf("Libro: %s Publicado: %ld", libro.titulo, libro.anio);
	
	return 0;
}
