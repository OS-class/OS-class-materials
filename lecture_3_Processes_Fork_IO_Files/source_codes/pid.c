#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

#define BUFSIZE 1024


int main(int argc, char *argv[]){
	int c;
	pid_t pid = getpid();

	printf("My PID: %d\n", pid);

	c = fgetc(stdin);
	
	exit(0);
	
}

