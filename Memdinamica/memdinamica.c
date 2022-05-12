#include <stdio.h>
#include <stdlib.h>

void main(){

	int n, *miarray;
	printf("De cuantos elementos quere el array?");
	scanf("%d", &n);
	
	//miarray[n]; // ERROR! no se puede hacer
	miarray = (int*)malloc(sizeof(int)*n);//ok, es lo correcto
	
	//El nuevo tamaño del array apuntado por miarray es de n
	miarray = (int*)realloc(miarray, n);

}
