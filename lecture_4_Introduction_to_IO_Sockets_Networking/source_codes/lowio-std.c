#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

#define BUFSIZE 1024

int main(int argc, char *argv[])
{
  char buf[BUFSIZE];
  ssize_t writelen = write(STDOUT_FILENO, "I am a process.\n", 16); // man 2 write

  ssize_t readlen  = read(STDIN_FILENO, buf, BUFSIZE); // man 2 read

  ssize_t strlen   = snprintf(buf, BUFSIZE,"Got %zd chars\n", readlen); // man snprintf

  writelen = strlen < BUFSIZE ? strlen : BUFSIZE;
  write(STDOUT_FILENO, buf, writelen);

  exit(0);
}
