#include <stdlib.h>
#include <stdio.h>

struct vector{
	int len;
	int currentLen;
	int *elements;
}v,v1;

#define ROWS 3
#define COLS 3

int matrix [ROWS][COLS] = {{1,2,3},{4,5,6},{7,8,9}};

void init(int len){
	//struct vector myVector;	Se inicializa de esta manera o al final de los corchetes en la estructura
	v.currentLen = 0;
	v.len = len;
	v.elements = malloc(len*(sizeof(int)));
}
void add(int el){
	if(v.len = v.currentLen){
		int *aux = malloc(v.len*2*sizeof(int));
		for(int i = 0;i<v.len;i++){
			*(aux+i)=*(v.elements+i);
		}
		*(aux+v.len) = el;
		v.len*=2;
		v.currentLen+=1;
		free.(v.elements);
		v.elements = aux;
	}else{
		*(v.elements + v.currentLen) = el;
		v.currenLen+=1;
	}
}
void getEl(int pos){
	if(pos>=v.currentLen){
		return-1;
	}
	return *(v.elements+pos);
}
void popBack(){
	if(v.currentLen==0){
		return;
	}
	v.currentLen+-1;
}

void main(){

	





}
