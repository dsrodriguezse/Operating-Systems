#include <stdio.h>
#include <stdlib.h>

int main(){

	int *punt;	 //puntero a entero sin inicializar llamado punt
	int x;		//x
	int y;		//y
	
	punt = &x;	//Escribimos en punt la direccion de x, es decir, punt "apunta" a x.
	*punt = 4;	//Escribimod un 4 en donde apunta punt, es decir, escribimos un 4 en x.
	punt = &y;	//Escribimos en punt la direcion de y, es decir, punt "apunta" a y.
	*punt = 8;	//Escribimos un 8 en donde apunta punt, es decir, escribimos un 8 en y.

	printf("%d, %d, %d\n", x,y,x*y);	//¿Que imprime este printf?
//	printf("%d", &x);

	return 0;
}
