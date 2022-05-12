#include <stdio.h>
#include <stdlib.h>

struct jugador{
	char nombre[20];	//campo "nombre", estructura "jugador".
	int edad; 		//campo "edad", estructura "jugador".
	float altura;		//campo "altura", estructura "jugaor".
};

int main(){
	struct jugador jugador1 = {"juan",19, 2.4};
	/*char *nom;
	nom = nombre;
	*/
	printf("Ingrese el nombre, edad y altura del jugador\n");
	scanf("%s %d %f",jugador1.nombre, &jugador1.edad, &jugador1.altura);

	printf("El nombre del jugador es: %s\n", jugador1.nombre);
	printf("La edad del jugador es: %d\n", jugador1.edad);
	printf("La altura del jugador es: %f\n", jugador1.altura);
	

	return 0;
}
