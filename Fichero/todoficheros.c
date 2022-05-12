#include <stdio.h>
#include <stdlib.h>

void main (){

	//fopen
	//FILE * fopen(char *nombre, char *modo);
	/*
	2param→	r:Solo lectura, debe existir.	
		w: se abre para escritura, se crea uno nuevo o se sobreescribe.
		a: añadir, se abre para escritura, el cursor se situa al final del fichero.
			si no existe se crea.
		r+: lectura y escritura. Debe existir
		w+: lectura y escritura, se crea un fichero nuevo o se sobreescribe si ya existe.
		a+: añadir, lectura y escritura, sel cursor se situa al final. 
			Si el fichero no existe, se crea
		t: Tipo texto, si no se especifica "t" ni "b", se asume por defecto que es "t"
		b: tipo binario.
	*/
	FILE *fichero;
	fichero = fopen("nuevofichero", "a");
	if(fichero==NULL){
		printf("Error leyendo archivo\n");
	}
	fputs("Texto usando fputs\n", fichero);
	fprintf(fichero, "%s", "Texto usando fprintf\n");

	//fclose
	/*
	int fclose(FILE *fichero);
	*/

	fclose(fichero);

}
