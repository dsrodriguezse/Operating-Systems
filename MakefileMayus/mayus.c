#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
	
	FILE *fichero;
	fichero = fopen("prueba.txt", "r");
	if(fichero==NULL){
		printf("Error leyendo prueba\n");
	}
	else{
		printf("Se leyo el file\n");
	}
	char cadena[200];

	fgets(cadena,200,fichero);
	//fscanf(fichero, "%s", cadena);
	printf("%s",cadena);
	for(int i=0;cadena[i]!='\0';++i){
		cadena[i]=toupper(cadena[i]);
	}
	
	printf("%s",cadena);
	
	fclose(fichero);
}
