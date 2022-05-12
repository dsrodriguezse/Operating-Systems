#include <stdio.h>

int main(){

	for (int i=1;i<=38,i++;){
		if(i=1){
			printf("[%d,",i);	
			i++;
		}
		else{
			printf(" %d,",i);
		}	
	}
	printf("]\b");

	return 0;
}
