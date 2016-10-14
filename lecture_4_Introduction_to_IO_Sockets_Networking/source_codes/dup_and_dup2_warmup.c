#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  int pid, status;
  int newfd;

  if((newfd = open("output_file.txt", O_CREAT|O_TRUNC|O_WRONLY, 0644)) < 0){
    exit(1);
  }

  printf("Luke, I am your...\n");
  dup2(newfd, 1);
  printf("father\n");
  exit(0);

}
