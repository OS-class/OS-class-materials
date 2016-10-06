#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFSIZE 1024

int main(int argc, char *argv[])
{
  
  char buf[BUFSIZE];
  int status;
  
  size_t readlen, writelen, slen;
  
  pid_t cpid, mypid, tcpid;
  
  pid_t pid = getpid();         /* get current processes PID */
  
  printf("Parent pid: %d\n", pid);
  
  cpid = fork();
  
 if (cpid > 0) {		          /* Parent Process */

    mypid = getpid();
    printf("[%d] parent of [%d]\n", mypid, cpid);

    tcpid = wait(&status); /* wait for child to finish to see this */
    printf("[%d] bye %d(%d)\n", mypid, tcpid, status);

  }  
 
  else if (cpid == 0) {	 /* Child Process */

    mypid = getpid();
    printf("[%d] child\n", mypid);

  } 
 
  else {

    perror("Fork failed");
    exit(1);

  }
  exit(0);
}
