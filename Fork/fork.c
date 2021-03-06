#include <sys/wait.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char *argv[]){
	
	pid_t pid;
	
	pid = fork();

	if(pid == -1){
		perror("fallo en fork");
		exit(EXIT_FAILURE);
	}
	
	if(pid == 0){
		printf("PID proceso hijo: %i\n", pid);
		printf("Proceso hijo: PID %d\n", getpid());
		printf("Proceso hijo: PPID %d\n", getppid());
		printf("\n");
		fflush(stdout);
	}
	else{
		printf("PID proceso padre: %i\n", pid);
		printf("Proceso padre: PID %d\n", getpid());
		printf("Proceso padre: PPID %d\n", getppid());
		fflush(stdout);
	}
}
