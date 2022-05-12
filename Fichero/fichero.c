#include <stdlib.h>
#include <stdio.h>

void main(){

	FILE *mifichero;	//declaracion de un handler de fichero
	
	//apertura del fichero prueba.txt asociandolo al handler "mifichero"
	mifichero = fopen ("prueba.txt", "r");
	if(mifichero != NULL){
		printf ("funciona\n");
	}

}
