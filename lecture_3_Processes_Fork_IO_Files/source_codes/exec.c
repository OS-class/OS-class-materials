#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>



int main(void)
{
	char** argv = (char**) malloc(3*sizeof(char*));
	argv[0] = "/bin/ls";
	argv[1] = ".";
	argv[2] = NULL;

	for (int i = 0; i < 10; i++){
		printf("%d\n", i);
		if (i == 3)
		execv("/bin/ls", argv);
		}
	
	return 0;
}
