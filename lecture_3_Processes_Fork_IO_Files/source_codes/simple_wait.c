#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
	pid_t pid = fork();
	int exit;
	if (pid != 0) {
		wait(&exit);
	}
	printf("Hello World\n: %d\n", pid);
	return 0;
}

