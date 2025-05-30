#include <stdio.h>
#include <stdlib.h>

int main(void) {
	short A = 4;

	if(A> 5){
		printf("A es mayor a cinco (%hd > 5)",A);
	}
	else{
		printf("A no es mayor a cinco (%hd < 5)",A);
	}
	return 0;
}
