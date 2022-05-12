/*
INTEGRANTES
	David Santiago Rodriguez Segovia
	Miguel Angel Villada Saavedra
	Anderson Camilo Vargas Saavedra
*/

#include <stdio.h>
#include <ctype.h>


void main(){

	FILE* fichero;
	fichero = fopen("prueba.txt","a+");
	if(fichero==NULL){
		printf("Error leyendo prueba\n");
	}
	else{
		printf("Se leyo el file\n");
	}
	int n;
	printf("Ingrese la cantidad de asteriscos que desea: ");
	scanf("%d",&n);
	
	char cadena[n];
	for(int i=0;i<n;i++){
		cadena[i] = '*';
	}
	fputs(cadena,fichero);
	printf("%s\n",cadena);
	fputs("\n",fichero);
	fclose(fichero);
	
}
