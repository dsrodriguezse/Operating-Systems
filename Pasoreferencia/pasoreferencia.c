#include <stdio.h>
#include <stdlib.h>

void sumaDos(int *a, int *b, int *c){

	*a = *a+2;
	*b = *b+2;
	*c = *c+2;
}

void main(void){

	int x;
	/**/
	int y;
	int z;
	/**/
	printf("Introduzca tres números:\n ");
	scanf("%d %d %d", &x, &y, &z);
	printf("%d %d %d son los números ingresados\n", x,y,z);
	sumaDos(&x, &y, &z);
	printf("%d %d %d son los números con la suma aplicada\n", x, y, z);	//imp?
//	printf("%d %d %d", &x, &y, &z);
}
