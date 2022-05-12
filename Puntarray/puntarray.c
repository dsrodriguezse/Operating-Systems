#include <stdio.h>
#include <stdlib.h>

int main(){

	int miarray[7];
	int arr[5] = {1,2,3,4,5};
	 
	int *punt;
	
	punt = &miarray[0];	//idem que punt = miaray;
	*punt = 5;		//idem que punt [0] = 5;
	*(punt+2) = 6;		//idem que punt[2] = 5;
	
	int *p = arr;

	printf("Los datos de miarray[0] y miarray[2] son: %d, %d\n ",punt[0], punt[2]);
	printf("El dato de arr[0] es: %d\n", *p);
	printf("El dato de arr[1] es: %d\n", *p+1);
	printf("La direccion de arr[0] es: %p\n",p);
	printf("La direccion de arr[1] es: %p\n",p+1);
	printf("La direccion de arr[2] es: %p\n",p+2);

	return 0;
}
